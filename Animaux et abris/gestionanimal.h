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

class GestionAnimal
{

    public:
        GestionAnimal(QString surnom, QString race, QString qualite, QString objectif, int valeur, QString foyer, int age);
        static bool verifierExistenceSurnom(const QString &surnom);
        static bool verifierFoyerValide(const QString &race,const QString &foyer);
        bool supprimerAnimal(QString surnom);
        bool ajouterAnimal();
        static QTableView * afficherAnimaux(const QString &race);


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
