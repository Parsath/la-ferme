#include "ajouteranimal.h"

AjouterAnimal::AjouterAnimal(QWidget *parent) : QWizard(parent)
{
    addPage(new PageUne);
    addPage(new PageDeux);

    setWindowTitle(tr("Ajouter Animal"));
}

void AjouterAnimal::accept()
{
    QString surnom = field("surnom").toString();
    QString race = field("race").toString();
    QString foyer = field("foyer").toString();
    QString qualites = field("qualites").toString();
    int age = field("age").toInt();
    QString objectifs = field("objectifs").toString();
    int valeur = field("valeur").toInt();

    if( GestionAnimal::verifierExistenceSurnom(surnom) )
    {
        QMessageBox::critical(nullptr,"Erreur","Surnom déjà existant! <br>Veuillez change de surnom.");
        return;
    }

    m_animal = new GestionAnimal(surnom, race, qualites, objectifs, valeur, foyer, age);

    if(m_animal->ajouterAnimal())
    {
        QMessageBox::information(nullptr,"Ajout","Votre ajout a été effectué avec succès et un pdf a été créé contenant les informations qui concernent votre animal.");
    }
    else
    {
        QMessageBox::critical(nullptr,"Ajout","Votre ajout a échoué");
    }

    GestionAnimal::afficherAnimaux(race);

    QDialog::accept();
}



//          Page Une d'ajout            //

PageUne::PageUne(QWidget *parent) : QWizardPage(parent)
{
    setTitle("Première page d'ajout de votre Animal");
    setSubTitle("Veuillez remplir tous les champs.");

    m_interfaceAjoutPageUne = new QGroupBox("Ajouter un animal", this);

    m_surnom = new QLineEdit(this);
    m_surnomLabel = new QLabel("&Surnom : ",this);
    m_surnomLabel->setBuddy(m_surnom);

    m_race = new QComboBox(this);
    m_raceLabel = new QLabel("&Race : ", this);
    m_raceLabel->setBuddy(m_race);
    m_raceAdd = new QPushButton("Aj.", this);

    m_foyer = new QComboBox(this);
    m_foyerLabel = new QLabel("&Foyer : ",this);
    m_foyerLabel->setBuddy(m_foyer);
    m_foyerAdd = new QPushButton("Aj.", this);

    registerField("surnom*",m_surnom);
    registerField("race",m_race,"currentText","currentTextChanged");
    registerField("foyer",m_foyer,"currentText","currentTextChanged");

    QHBoxLayout *m_surnomLayout = new QHBoxLayout();
    m_raceLayout = new QHBoxLayout();
    m_foyerLayout = new QHBoxLayout();
    m_mainLayoutPageUn = new QVBoxLayout();

    m_raceLayout->addWidget(m_raceLabel);
    m_raceLayout->addWidget(m_race);
    m_raceLayout->addWidget(m_raceAdd);

    QFile *m_fichierRace = new QFile("Textes/races.txt");
    QString *m_raceString = new QString();
    QTextStream out(m_fichierRace);

    if(m_fichierRace->open(QIODevice::ReadOnly))
    {
        while( (*m_raceString = out.readLine()) != NULL)
        {
            m_race->addItem(*m_raceString);
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Le fichiers Races.txt ne s'est pas ouvert correctement !");
    }

    m_foyerLayout->addWidget(m_foyerLabel);
    m_foyerLayout->addWidget(m_foyer);
    m_foyerLayout->addWidget(m_foyerAdd);

    QFile *m_fichierFoyer = new QFile("Textes/foyers.txt");
    QString *m_foyerString = new QString();
    QTextStream outFoyer(m_fichierFoyer);

    if(m_fichierFoyer->open(QIODevice::ReadOnly))
    {
        while( (*m_foyerString = outFoyer.readLine()) != NULL)
        {
            m_foyer->addItem(*m_foyerString);
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Le fichiers foyers.txt ne s'est pas ouvert correctement !");
    }

    m_surnomLayout->addWidget(m_surnomLabel);
    m_surnomLayout->addWidget(m_surnom);

    m_mainLayoutPageUn->addLayout(m_surnomLayout);
    m_mainLayoutPageUn->addLayout(m_raceLayout);
    m_mainLayoutPageUn->addLayout(m_foyerLayout);

    m_interfaceAjoutPageUne->setLayout(m_mainLayoutPageUn);

    QVBoxLayout *pageUneLayout = new QVBoxLayout();
    pageUneLayout->addWidget(m_interfaceAjoutPageUne);
    setLayout(pageUneLayout);

    QObject::connect(m_raceAdd, SIGNAL(clicked()), this, SLOT(ajouterRace()));
    QObject::connect(m_foyerAdd, SIGNAL(clicked()), this, SLOT(ajouterFoyer()));
    //QObject::connect(m_ajoutRace, SIGNAL(accepted()), this, SLOT(update()));
}

void PageUne::ajouterRace()
{
    m_ajoutRace = new QDialog(this);
    m_nomRace = new QLineEdit(m_ajoutRace);
    QLabel *m_nomRaceLabel = new QLabel("Race : ");
    QHBoxLayout *m_raceAjoutLayout = new QHBoxLayout();
    QVBoxLayout *m_raceAjoutMainLayout = new QVBoxLayout();
    QPushButton *m_ajouterRace = new QPushButton("Valider",m_ajoutRace);

    m_raceAjoutLayout->addWidget(m_nomRaceLabel);
    m_raceAjoutLayout->addWidget(m_nomRace);

    m_raceAjoutMainLayout->addLayout(m_raceAjoutLayout);
    m_raceAjoutMainLayout->addWidget(m_ajouterRace);

    m_ajoutRace->setWindowTitle("Ajouter une Race");
    m_ajoutRace->setLayout(m_raceAjoutMainLayout);


    m_ajoutRace->show();

    QObject::connect(m_ajouterRace, SIGNAL(clicked()), this, SLOT(validerRace()));
}

void PageUne::validerRace()
{

    if( !m_nomRace->text().isEmpty() )
    {
        QFile *m_fichierRace = new QFile("Textes/races.txt");
        QTextStream out(m_fichierRace);
        QString *nomRace = new QString();
        *nomRace = m_nomRace->text();

        if(m_fichierRace->open(QIODevice::WriteOnly | QIODevice::Append))
        {
            out << endl << *nomRace;
        }
        else
        {
            QMessageBox::critical(this, "Erreur", "Le fichiers Races.txt ne s'est pas ouvert correctement !");
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Vous n'avez pas mis de nom de races.");
    }

    m_ajoutRace->accept();
}

void PageUne::ajouterFoyer()
{
    m_ajoutFoyer = new QDialog(this);
    m_nomFoyer = new QLineEdit(m_ajoutFoyer);
    QLabel *m_nomFoyerLabel = new QLabel("Foyer : ");
    QHBoxLayout *m_foyerAjoutLayout = new QHBoxLayout();
    QVBoxLayout *m_foyerAjoutMainLayout = new QVBoxLayout();
    QPushButton *m_ajouterFoyer = new QPushButton("Valider",m_ajoutFoyer);

    m_foyerAjoutLayout->addWidget(m_nomFoyerLabel);
    m_foyerAjoutLayout->addWidget(m_nomFoyer);

    m_foyerAjoutMainLayout->addLayout(m_foyerAjoutLayout);
    m_foyerAjoutMainLayout->addWidget(m_ajouterFoyer);

    m_ajoutFoyer->setWindowTitle("Ajouter un Foyer");
    m_ajoutFoyer->setLayout(m_foyerAjoutMainLayout);


    m_ajoutFoyer->show();

    QObject::connect(m_ajouterFoyer, SIGNAL(clicked()), this, SLOT(validerFoyer()));
}

void PageUne::validerFoyer()
{

    if( !m_nomFoyer->text().isEmpty() )
    {
        QFile *m_fichierFoyer = new QFile("Textes/foyers.txt");
        QTextStream out(m_fichierFoyer);
        QString *nomFoyer = new QString();
        *nomFoyer = m_nomFoyer->text();

        if(m_fichierFoyer->open(QIODevice::WriteOnly | QIODevice::Append))
        {
            out << endl << *nomFoyer;
        }
        else
        {
            QMessageBox::critical(this, "Erreur", "Le fichiers Foyers.txt ne s'est pas ouvert correctement !");
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Vous n'avez pas mis de nom de foyers.");
    }

    m_ajoutFoyer->accept();
}



//          Page Deux d'ajout            //

PageDeux::PageDeux(QWidget *parent) : QWizardPage(parent)
{
    setTitle("Deuxième page d'ajout de votre Animal");
    setSubTitle("Veuillez remplir tous les champs.");

    m_interfaceAjoutPageDeux = new QGroupBox("Ajouter un animal",this);

    m_qualites = new QComboBox(this);
    m_qualitesLabel = new QLabel("Qualités : ",this);
    m_qualitesLabel->setBuddy(m_qualites);
    QHBoxLayout *m_qualitesLayout = new QHBoxLayout();

    QFile *m_fichierQualites = new QFile("Textes/qualites.txt");
    QString *m_qualitesString = new QString();
    QTextStream outQualite(m_fichierQualites);

    if(m_fichierQualites->open(QIODevice::ReadOnly))
    {
        while( (*m_qualitesString = outQualite.readLine()) != NULL)
        {
            m_qualites->addItem(*m_qualitesString);
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Le fichiers qualites.txt ne s'est pas ouvert correctement !");
    }


    m_age = new QSpinBox(this);
    m_ageLabel = new QLabel("Age (en années) : ",this);
    m_ageLabel->setBuddy(m_age);
    QHBoxLayout *m_ageLayout = new QHBoxLayout();

    m_objectifs = new QComboBox(this);
    m_objectifsLabel = new QLabel("Objectifs : ",this);
    m_objectifsLabel->setBuddy(m_objectifs);
    QHBoxLayout *m_objectifsLayout = new QHBoxLayout();

    QFile *m_fichierObjectif = new QFile("Textes/objectifs.txt");
    QString *m_objectifString = new QString();
    QTextStream outObjectif(m_fichierObjectif);

    if(m_fichierObjectif->open(QIODevice::ReadOnly))
    {
        while( (*m_objectifString = outObjectif.readLine()) != NULL)
        {
            m_objectifs->addItem(*m_objectifString);
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Le fichiers Objectifs.txt ne s'est pas ouvert correctement !");
    }


    m_valeur = new QSpinBox(this);
    m_valeurLabel = new QLabel("Valeur : ",this);
    m_valeurLabel->setBuddy(m_valeur);
    QHBoxLayout *m_valeurLayout = new QHBoxLayout();

    m_valeur->setMaximum(99999);

    registerField("qualites",m_qualites,"currentText","currentTextChanged");
    registerField("age*",m_age);
    registerField("objectifs",m_objectifs,"currentText","currentTextChanged");
    registerField("valeur*",m_valeur);

    m_mainLayoutPageDeux = new QVBoxLayout();

    m_qualitesLayout->addWidget(m_qualitesLabel);
    m_qualitesLayout->addWidget(m_qualites);

    m_ageLayout->addWidget(m_ageLabel);
    m_ageLayout->addWidget(m_age);

    m_objectifsLayout->addWidget(m_objectifsLabel);
    m_objectifsLayout->addWidget(m_objectifs);

    m_valeurLayout->addWidget(m_valeurLabel);
    m_valeurLayout->addWidget(m_valeur);

    m_mainLayoutPageDeux->addLayout(m_qualitesLayout);
    m_mainLayoutPageDeux->addLayout(m_ageLayout);
    m_mainLayoutPageDeux->addLayout(m_objectifsLayout);
    m_mainLayoutPageDeux->addLayout(m_valeurLayout);

    m_interfaceAjoutPageDeux->setLayout(m_mainLayoutPageDeux);

    QVBoxLayout *pageDeuxLayout = new QVBoxLayout();
    pageDeuxLayout->addWidget(m_interfaceAjoutPageDeux);
    setLayout(pageDeuxLayout);
}
