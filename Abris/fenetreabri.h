#ifndef FENETREABRI_H
#define FENETREABRI_H

#include <QObject>
#include <QWidget>
#include <QApplication>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QPushButton>
#include <QStringList>
#include <QVector>
#include <QTabWidget>
#include <QLayout>
#include <QTableView>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSortFilterProxyModel>
#include "ajouterabri.h"
#include "modifierabri.h"

class FenetreAbri : public QWidget
{
    Q_OBJECT

    public:

        FenetreAbri(QWidget *parent = nullptr);   //  Le Constructeur va me permettre de créer la fenêtre Animaux

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
        QString *m_foyer;
        QFile *m_fichierFoyers;
        QVBoxLayout *m_mainLayout;
        QHBoxLayout *m_validatingLayout;
        AjouterAbri *m_fenetreAjout;
        ModifierAbri *m_fenetreModification;
        QTableView *view;
        QPushButton *m_supprimer;
        QPushButton *m_modifier;

        QSpinBox *idAbri;

        QDialog *dialogSuppression;
        QDialog *dialogModification;


};

#endif // FENETREABRI_H
