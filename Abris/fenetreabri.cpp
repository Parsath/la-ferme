#include "fenetreabri.h"

FenetreAbri::FenetreAbri(QWidget *parent) : QWidget(parent)
{
    m_onglets = new QTabWidget(this);
    m_foyer = new QString();
    m_supprimer = new QPushButton();
    m_modifier = new QPushButton();
    m_mainLayout = new QVBoxLayout();
    m_validatingLayout = new QHBoxLayout();
    m_fenetreAjout = new AjouterAbri(this);
    m_fenetreModification = new ModifierAbri(this);
    QHBoxLayout *retourLayout = new QHBoxLayout();

    m_onglets->setFixedSize(641,500);

    QPushButton *retourEnArriere = new QPushButton("Retour",this);
    QPushButton *ajouter = new QPushButton("Ajouter",this);
    QPushButton *quitter = new QPushButton("Terminer",this);

    this->setAttribute(Qt::WA_DeleteOnClose);

    afficherOnglet();

    this->setWindowTitle("Abris");

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

void FenetreAbri::ongletSupprimer()
{
    dialogSuppression = new QDialog(this);
    idAbri = new QSpinBox(dialogSuppression);
    QLabel *idAbriLabel = new QLabel("ID : ");
    QHBoxLayout *supprimerAbriLayout = new QHBoxLayout();
    QVBoxLayout *supprimerAbriMainLayout = new QVBoxLayout();
    QPushButton *validerSuppression = new QPushButton("Valider",dialogSuppression);

    idAbri->setFixedSize(100,30);
    supprimerAbriLayout->addWidget(idAbriLabel);
    supprimerAbriLayout->addSpacing(100);
    supprimerAbriLayout->addWidget(idAbri);

    supprimerAbriMainLayout->addLayout(supprimerAbriLayout);
    supprimerAbriMainLayout->addWidget(validerSuppression);

    dialogSuppression->setWindowTitle("Supprimer Animal");
    dialogSuppression->setLayout(supprimerAbriMainLayout);


    dialogSuppression->show();

    QObject::connect(validerSuppression, SIGNAL(clicked()), this, SLOT(validerSuppression()));
}

void FenetreAbri::validerSuppression()
{

    if( !idAbri->text().isEmpty() )
    {
        if(GestionAbri::supprimerFoyer( idAbri->text().toInt() ))
        {
            QMessageBox::information(this, "Suppression", "Le foyer n°" + idAbri->text() +  " a été supprimé de la Base de Donnée." );
            afficherOnglet();
        }
        else
        {
            QMessageBox::critical(this, "Erreur", "La suppression n'a pas été effectué." );

        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Vous n'avez pas indiqué d'ID.");
    }

    dialogSuppression->accept();
}

void FenetreAbri::ongletModifier()
{
    dialogModification = new QDialog(this);
    idAbri = new QSpinBox(dialogModification);
    QLabel *idAbriLabel = new QLabel("ID : ");
    QHBoxLayout *modifierAbriLayout = new QHBoxLayout();
    QVBoxLayout *modifierAbriMainLayout = new QVBoxLayout();
    QPushButton *validerModificationBouton = new QPushButton("Valider",dialogModification);

    modifierAbriLayout->addWidget(idAbriLabel);
    modifierAbriLayout->addWidget(idAbri);

    modifierAbriMainLayout->addLayout(modifierAbriLayout);
    modifierAbriMainLayout->addWidget(validerModificationBouton);

    dialogModification->setWindowTitle("Modifier Animal");
    dialogModification->setLayout(modifierAbriMainLayout);


    dialogModification->show();

    QObject::connect(validerModificationBouton, SIGNAL(clicked()), this, SLOT(validerModification()));
}

void FenetreAbri::validerModification()
{

    if( !idAbri->text().isEmpty() )
    {
            ouvrirFenetreModification();
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Vous n'avez pas mis d'ID.");
    }

    dialogModification->accept();
}

void FenetreAbri::afficherOnglet()
{

    m_onglets->clear();

    m_fichierFoyers = new QFile("Textes/foyers.txt");

    QTextStream out(m_fichierFoyers);

    if(m_fichierFoyers->open(QIODevice::ReadOnly))
    {
        while( (*m_foyer = out.readLine()) != NULL)
        {
            creationOnglets(*m_foyer, *m_onglets);
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Le fichiers Foyers ne s'est pas ouvert correctement !");
    }

}

void FenetreAbri::creationOnglets(QString foyer, QTabWidget &onglets)
{
    QWidget *tabWidget = new QWidget();
    m_supprimer = new QPushButton("Supprimer");
    m_modifier = new QPushButton("Modifier");
    QHBoxLayout *supprimerLayout = new QHBoxLayout();
    QVBoxLayout *tabLayout = new QVBoxLayout();

    QSqlQueryModel *maTable = new QSqlQueryModel();
    maTable = GestionAbri::afficherAbris(foyer);

    view = new QTableView();

    view->setModel(maTable);

    view->show();
    view->hideColumn(2);

    supprimerLayout->addSpacing(100);
    supprimerLayout->addWidget(m_modifier);
    supprimerLayout->addWidget(m_supprimer);
    supprimerLayout->addSpacing(100);
    tabLayout->addWidget(view);
    tabLayout->addLayout(supprimerLayout);

    tabWidget->setLayout(tabLayout);
    onglets.addTab(tabWidget, foyer);

    QObject::connect(m_supprimer, SIGNAL(clicked()), this, SLOT(ongletSupprimer()));
    QObject::connect(m_modifier, SIGNAL(clicked()), this, SLOT(ongletModifier()));
}

void FenetreAbri::ouvrirFenetreAjout()
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

void FenetreAbri::ouvrirFenetreModification()
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
