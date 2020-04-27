#include "fenetreanimaux.h"

FenetreAnimaux::FenetreAnimaux() : QWidget()
{
    m_onglets = new QTabWidget(this);
    m_race = new QString();
    m_supprimer = new QPushButton();
    m_modifier = new QPushButton();
    m_mainLayout = new QVBoxLayout();
    m_validatingLayout = new QHBoxLayout();
    m_fenetreAjout = new AjouterAnimal(this);
    m_fenetreModification = new ModifierAnimal(this);
    QHBoxLayout *retourLayout = new QHBoxLayout();

    m_onglets->setFixedSize(641,500);

    QPushButton *retourEnArriere = new QPushButton("Retour",this);
    QPushButton *ajouter = new QPushButton("Ajouter",this);
    QPushButton *quitter = new QPushButton("Terminer",this);

    this->setAttribute(Qt::WA_DeleteOnClose);

    afficherOnglet();

    this->setWindowTitle("Animaux");

    retourLayout->addWidget(retourEnArriere);
    retourLayout->addSpacing(500);
    m_validatingLayout->addSpacing(400);
    m_validatingLayout->addWidget(ajouter);
    m_validatingLayout->addWidget(quitter);
    m_mainLayout->addLayout(retourLayout);
    m_mainLayout->addWidget(m_onglets);
    m_mainLayout->addLayout(m_validatingLayout);

    m_mainLayout->setSizeConstraint(QLayout::SetFixedSize);
    this->setLayout(m_mainLayout);

    QObject::connect(ajouter, SIGNAL(clicked()), this, SLOT(ouvrirFenetreAjout()));
    QObject::connect(quitter, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(m_fenetreAjout, SIGNAL(accepted()), this, SLOT(afficherOnglet()));
    QObject::connect(m_fenetreModification,SIGNAL(accepted()), this, SLOT(afficherOnglet()));
}

void FenetreAnimaux::ongletSupprimer()
{
    dialogSuppression = new QDialog(this);
    surnomAnimal = new QLineEdit(dialogSuppression);
    QLabel *surnomAnimalLabel = new QLabel("Surnom : ");
    QHBoxLayout *supprimerAnimalLayout = new QHBoxLayout();
    QVBoxLayout *supprimerAnimalMainLayout = new QVBoxLayout();
    QPushButton *validerSuppression = new QPushButton("Valider",dialogSuppression);

    supprimerAnimalLayout->addWidget(surnomAnimalLabel);
    supprimerAnimalLayout->addWidget(surnomAnimal);

    supprimerAnimalMainLayout->addLayout(supprimerAnimalLayout);
    supprimerAnimalMainLayout->addWidget(validerSuppression);

    dialogSuppression->setWindowTitle("Supprimer Animal");
    dialogSuppression->setLayout(supprimerAnimalMainLayout);


    dialogSuppression->show();

    QObject::connect(validerSuppression, SIGNAL(clicked()), this, SLOT(validerSuppression()));
}

void FenetreAnimaux::validerSuppression()
{
    Smtp *smtp = new Smtp("notificationlaferme@gmail.com", "laferme123", "smtp.gmail.com");

    if( !surnomAnimal->text().isEmpty() )
    {
        if(GestionAnimal::verifierExistenceSurnom( surnomAnimal->text() ) )
        {
            smtp->sendMail("notificationlaferme@gmail.com", "bilel.taktak@esprit.tn" , "Suppression d'un animal","Bonjour Monsieur/Madame L'administrateur/administratrice,\n\n" + surnomAnimal->text() + " a été supprimé de la base de donnée." + "\n\nCordialement,\nService de notification La Ferme.");
            if(GestionAnimal::supprimerAnimal( surnomAnimal->text() ))
            {
                QMessageBox::information(this, "Adieu", surnomAnimal->text() +  " nous quitte aujourd'hui.." );
                afficherOnglet();
            }
            else
            {
                QMessageBox::critical(this, "Erreur", "La suppression n'a pas été effectué." );

            }
        }
        else
        {
            QMessageBox::critical(this, "Erreur", "Le nom indiqué n'est pas valide.");
        }


    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Vous n'avez pas mis de nom d'animal.");
    }

    dialogSuppression->accept();

    QObject::connect(smtp, SIGNAL(status(QString)), nullptr, SLOT(mailSent(QString)));
}

void FenetreAnimaux::ongletModifier()
{
    dialogModification = new QDialog(this);
    surnomAnimal = new QLineEdit(dialogModification);
    QLabel *surnomAnimalLabel = new QLabel("Surnom : ");
    QHBoxLayout *modifierAnimalLayout = new QHBoxLayout();
    QVBoxLayout *modifierAnimalMainLayout = new QVBoxLayout();
    QPushButton *validerModificationBouton = new QPushButton("Valider",dialogModification);

    modifierAnimalLayout->addWidget(surnomAnimalLabel);
    modifierAnimalLayout->addWidget(surnomAnimal);

    modifierAnimalMainLayout->addLayout(modifierAnimalLayout);
    modifierAnimalMainLayout->addWidget(validerModificationBouton);

    dialogModification->setWindowTitle("Modifier Animal");
    dialogModification->setLayout(modifierAnimalMainLayout);


    dialogModification->show();

    QObject::connect(validerModificationBouton, SIGNAL(clicked()), this, SLOT(validerModification()));
}

void FenetreAnimaux::validerModification()
{

    if( !surnomAnimal->text().isEmpty() )
    {
        if(GestionAnimal::verifierExistenceSurnom( surnomAnimal->text() ) )
        {
            GestionAnimal::supprimerAnimal( surnomAnimal->text() );
            ouvrirFenetreModification();
        }
        else
        {
            QMessageBox::critical(this, "Erreur", "Le nom indiqué n'est pas valide.");
        }

    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Vous n'avez pas mis de nom d'animal.");
    }

    dialogModification->accept();
}

void FenetreAnimaux::afficherOnglet()
{

    m_onglets->clear();

    m_fichierRaces = new QFile("C:/Users/Asus/Desktop/Dev/Qt/Projet Qt/Animaux et abris/races.txt");

    QTextStream out(m_fichierRaces);

    if(m_fichierRaces->open(QIODevice::ReadOnly))
    {
        while( (*m_race = out.readLine()) != NULL)
        {
            creationOnglets(*m_race, *m_onglets);
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Le fichiers Races.txt ne s'est pas ouvert correctement !");
    }

}

void FenetreAnimaux::creationOnglets(QString race, QTabWidget &onglets)
{
    QWidget *tabWidget = new QWidget();
    m_supprimer = new QPushButton("Supprimer");
    m_modifier = new QPushButton("Modifier");
    QHBoxLayout *supprimerLayout = new QHBoxLayout();
    QVBoxLayout *tabLayout = new QVBoxLayout();

    QSqlQueryModel *maTable = new QSqlQueryModel();
    maTable = GestionAnimal::afficherAnimaux(race);

    view = new QTableView();

    view->setModel(maTable);

    view->show();
    view->hideColumn(0);
    view->hideColumn(1);

    supprimerLayout->addSpacing(100);
    supprimerLayout->addWidget(m_modifier);
    supprimerLayout->addWidget(m_supprimer);
    supprimerLayout->addSpacing(100);
    tabLayout->addWidget(view);
    tabLayout->addLayout(supprimerLayout);

    tabWidget->setLayout(tabLayout);
    onglets.addTab(tabWidget, race);

    QObject::connect(m_supprimer, SIGNAL(clicked()), this, SLOT(ongletSupprimer()));
    QObject::connect(m_modifier, SIGNAL(clicked()), this, SLOT(ongletModifier()));
}

void FenetreAnimaux::ouvrirFenetreAjout()
{

    try
    {
        m_fenetreAjout->show();
    }
    catch (std::exception &e)
    {
        QMessageBox::critical(nullptr,"Yo",QString(e.what()));
    }
    catch ( const std::out_of_range & )
    {
        QMessageBox::critical(nullptr,"Yo","Erreur : débordement de mémoire.\n");
    }
    catch ( const std::bad_alloc & )
    {
        QMessageBox::critical(nullptr,"Yo","Erreur allocation mémoire");
    }
    catch (...)
    {
        QMessageBox::critical(nullptr,"Yo","Echec instanciation page wizard");
    }
}

void FenetreAnimaux::ouvrirFenetreModification()
{

    try
    {
        m_fenetreModification->show();
    }
    catch (std::exception &e)
    {
        QMessageBox::critical(nullptr,"Yo",QString(e.what()));
    }
    catch ( const std::out_of_range & )
    {
        QMessageBox::critical(nullptr,"Yo","Erreur : débordement de mémoire.\n");
    }
    catch ( const std::bad_alloc & )
    {
        QMessageBox::critical(nullptr,"Yo","Erreur allocation mémoire");
    }
    catch (...)
    {
        QMessageBox::critical(nullptr,"Yo","Echec instanciation page wizard");
    }

}
