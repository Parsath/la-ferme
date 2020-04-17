#include "fenetreanimaux.h"

FenetreAnimaux::FenetreAnimaux() : QWidget()
{
    m_onglets = new QTabWidget(this);
    m_race = new QString();
    m_mainLayout = new QVBoxLayout();
    m_validatingLayout = new QHBoxLayout();


    QPushButton *retourEnArriere = new QPushButton("Retour",this);
    QPushButton *ajouter = new QPushButton("Ajouter",this);
    QPushButton *quitter = new QPushButton("Terminer",this);


    this->setAttribute(Qt::WA_DeleteOnClose);
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

    this->setWindowTitle("Animaux");

    m_validatingLayout->addWidget(ajouter);
    m_validatingLayout->addWidget(quitter);
    m_mainLayout->addWidget(retourEnArriere);
    m_mainLayout->addWidget(m_onglets);
    m_mainLayout->addLayout(m_validatingLayout);

    this->setLayout(m_mainLayout);

    QObject::connect(quitter, SIGNAL(clicked()), this, SLOT(close()));
}

void FenetreAnimaux::creationOnglets(QString race, QTabWidget &onglets)
{
    QWidget *fenetre = new QWidget();
    QPushButton *bouton = new QPushButton(race, fenetre);

    onglets.addTab(fenetre, race);
}
