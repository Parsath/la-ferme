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
#include "ajouteranimal.h"

class FenetreAnimaux : public QWidget
{
    Q_OBJECT

    public:

        FenetreAnimaux();   //  Le Constructeur va me permettre de créer la fenêtre Animaux
        void creationOnglets(QString race, QTabWidget &onglets);    //  Cette fonction tire les races présentes dans le fichier races.txt et les classe dans le TabWidget

    public slots:
        void ouvrirFenetreAjout();

    signals:

    private:
        QTabWidget *m_onglets;
        QString *m_race;
        QFile *m_fichierRaces;
        QVBoxLayout *m_mainLayout;
        QHBoxLayout *m_validatingLayout;



};

#endif // FENETREANIMAUX_H
