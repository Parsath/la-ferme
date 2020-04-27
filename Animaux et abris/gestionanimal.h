#ifndef GESTIONANIMAL_H
#define GESTIONANIMAL_H

#include <QWidget>
#include <QApplication>
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDialog>
#include <QTableView>
#include <QSqlTableModel>
#include <QTableWidget>
#include <QPushButton>
#include <QDir>
#include <QPainter>
#include <QPrinter>

class GestionAnimal
{

    public:
        GestionAnimal(QString surnom, QString race, QString qualite, QString objectif, int valeur, QString foyer, int age);
        static bool verifierExistenceSurnom(const QString &surnom);
        static bool verifierFoyerValide(const QString &race,const QString &foyer);
        static bool supprimerAnimal(QString surnom);
        static void fichierAnimal(QString const &race, QString const& surnom, QString const& qualite, int const& valeur, QString const& objectif, QString const& foyer, int const& age);
        bool ajouterAnimal();
        static QSqlQueryModel * afficherAnimaux(const QString &race);


    private:
        int m_idAnimal;
        QString m_surnomAnimal;
        QString m_raceAnimal;
        QString m_qualiteAnimal;
        int m_valeurAnimal;
        QString m_objectifAnimal;
        QString m_foyerAnimal;
        int m_ageAnimal;

    protected:
        int setId();



};

#endif // GESTIONANIMAL_H
