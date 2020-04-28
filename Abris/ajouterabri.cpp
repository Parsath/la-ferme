#include "ajouterabri.h"

AjouterAbri::AjouterAbri(QWidget *parent) : QWizard(parent)
{
    addPage(new PageUne);

    setWindowTitle(tr("Ajouter Abri"));
}

void AjouterAbri::accept()
{
    int capacite = field("capacite").toInt();
    QString etat = field("etat").toString();
    QString foyer = field("foyer").toString();

    m_abri = new GestionAbri(etat, foyer, capacite);

    if(m_abri->ajouterAbri())
    {
        QMessageBox::information(nullptr,"Ajout","Votre ajout a été effectué avec succès.");
    }
    else
    {
        QMessageBox::critical(nullptr,"Erreur","Votre ajout a échoué");
    }

    GestionAbri::afficherAbris(foyer);

    QDialog::accept();
}



//          Page Une d'ajout            //

PageUne::PageUne(QWidget *parent) : QWizardPage(parent)
{
    setTitle("Ajout d'abri");
    setSubTitle("Veuillez remplir tous les champs pour ajouter votre nouvel abri.");

    m_interfaceAjoutPageUne = new QGroupBox("Ajouter un Abri", this);

    m_capacite = new QSpinBox(this);
    m_capaciteLabel = new QLabel("&Capacité : ",this);
    m_capaciteLabel->setBuddy(m_capacite);

    m_etat = new QComboBox(this);
    m_etatLabel = new QLabel("&Etats : ", this);
    m_etatLabel->setBuddy(m_etat);

    m_foyer = new QComboBox(this);
    m_foyerLabel = new QLabel("&Foyer : ",this);
    m_foyerLabel->setBuddy(m_foyer);
    m_foyerAdd = new QPushButton("Aj.", this);

    registerField("capacite*",m_capacite);
    registerField("etat",m_etat,"currentText","currentTextChanged");
    registerField("foyer",m_foyer,"currentText","currentTextChanged");

    QHBoxLayout *m_capaciteLayout = new QHBoxLayout();
    m_etatLayout = new QHBoxLayout();
    m_foyerLayout = new QHBoxLayout();
    m_mainLayoutPageUn = new QVBoxLayout();

    m_etatLayout->addWidget(m_etatLabel);
    m_etatLayout->addWidget(m_etat);

    QFile *m_fichierEtat = new QFile("Textes/etats.txt");
    QString *m_etatString = new QString();
    QTextStream out(m_fichierEtat);

    if(m_fichierEtat->open(QIODevice::ReadOnly))
    {
        while( (*m_etatString = out.readLine()) != NULL)
        {
            m_etat->addItem(*m_etatString);
        }
    }
    else
    {
        QMessageBox::critical(this, "Erreur", "Le fichiers Etats.txt ne s'est pas ouvert correctement !");
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

    m_capaciteLayout->addWidget(m_capaciteLabel);
    m_capaciteLayout->addWidget(m_capacite);

    m_mainLayoutPageUn->addLayout(m_capaciteLayout);
    m_mainLayoutPageUn->addLayout(m_etatLayout);
    m_mainLayoutPageUn->addLayout(m_foyerLayout);

    m_interfaceAjoutPageUne->setLayout(m_mainLayoutPageUn);

    QVBoxLayout *pageUneLayout = new QVBoxLayout();
    pageUneLayout->addWidget(m_interfaceAjoutPageUne);
    setLayout(pageUneLayout);

    QObject::connect(m_foyerAdd, SIGNAL(clicked()), this, SLOT(ajouterFoyer()));
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
