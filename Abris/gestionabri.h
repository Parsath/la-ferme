#ifndef GESTIONABRI_H
#define GESTIONABRI_H

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


class GestionAbri
{

    public:
        GestionAbri(QString etat, QString foyer, int capacite, int id = 0);
        static bool supprimerFoyer(int id);
        bool ajouterAbri();
        static QSqlQueryModel * afficherAbris(const QString &foyer);
        bool setId(int id = 0);


    private:
        int m_idAbri;
        int m_capaciteAbri;
        QString m_foyerAnimal;
        QString m_etatAbri;

};

#endif // GESTIONABRI_H
