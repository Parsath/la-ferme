#ifndef FENETREANIMAUX_H
#define FENETREANIMAUX_H

#include <QApplication>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QPushButton>
#include <QObject>
#include <QWidget>
#include <QStringList>
#include <QVector>
#include <QTabWidget>
#include <QLayout>
#include <QTableView>
#include <QSqlQuery>
#include <QSqlDatabase>
#include "modifieranimal.h"
#include "ajouteranimal.h"

class FenetreAnimaux : public QWidget
{
    Q_OBJECT

    public:

        FenetreAnimaux();   //  Le Constructeur va me permettre de créer la fenêtre Animaux

    public slots:
        void ouvrirFenetreAjout();
        void ouvrirFenetreModification();
        void afficherOnglet();
        void creationOnglets(QString race, QTabWidget &onglets);    //  Cette fonction tire les races présentes dans le fichier races.txt et les classe dans le TabWidget
        void ongletSupprimer();
        void validerSuppression();
        void ongletModifier();
        void validerModification();

    signals:

    private:
        QTabWidget *m_onglets;
        QString *m_race;
        QFile *m_fichierRaces;
        QVBoxLayout *m_mainLayout;
        QHBoxLayout *m_validatingLayout;
        AjouterAnimal *m_fenetreAjout;
        ModifierAnimal *m_fenetreModification;
        QTableView *view;
        QPushButton *m_supprimer;
        QPushButton *m_modifier;
        QLineEdit *surnomAnimal;
        QDialog *dialogSuppression;
        QDialog *dialogModification;



};

#endif // FENETREANIMAUX_H
