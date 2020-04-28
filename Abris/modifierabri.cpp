#include "modifierabri.h"

ModifierAbri::ModifierAbri(QWidget *parent) : QWizard(parent)
{
    addPage(new PageUneModifier);

    setWindowTitle(tr("Modifier Abri"));
}

void ModifierAbri::accept()
{
    int id = field("id").toInt();
    int capacite = field("capacite").toInt();
    QString etat = field("etat").toString();
    QString foyer = field("foyer").toString();

    GestionAbri::supprimerFoyer(id);
    m_abri = new GestionAbri(etat, foyer, capacite, id);

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

PageUneModifier::PageUneModifier(QWidget *parent) : QWizardPage(parent)
{
    setTitle("Modification d'abri");
    setSubTitle("Veuillez choisir l'ID de votre abri et le modifier.");

    m_interfaceAjoutPageUne = new QGroupBox("Modifier un Abri", this);

    m_id = new QSpinBox(this);
    m_idLabel = new QLabel("&ID : ",this);
    m_idLabel->setBuddy(m_id);

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

    registerField("id*",m_id);
    registerField("capacite*",m_capacite);
    registerField("etat",m_etat,"currentText","currentTextChanged");
    registerField("foyer",m_foyer,"currentText","currentTextChanged");

    QHBoxLayout *m_capaciteLayout = new QHBoxLayout();
    QHBoxLayout *m_idLayout = new QHBoxLayout();

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

    m_idLayout->addWidget(m_idLabel);
    m_idLayout->addWidget(m_id);

    m_mainLayoutPageUn->addLayout(m_idLayout);
    m_mainLayoutPageUn->addLayout(m_capaciteLayout);
    m_mainLayoutPageUn->addLayout(m_etatLayout);
    m_mainLayoutPageUn->addLayout(m_foyerLayout);

    m_interfaceAjoutPageUne->setLayout(m_mainLayoutPageUn);

    QVBoxLayout *pageUneLayout = new QVBoxLayout();
    pageUneLayout->addWidget(m_interfaceAjoutPageUne);
    setLayout(pageUneLayout);

    QObject::connect(m_foyerAdd, SIGNAL(clicked()), this, SLOT(ajouterFoyer()));
}

void PageUneModifier::ajouterFoyer()
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

void PageUneModifier::validerFoyer()
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
