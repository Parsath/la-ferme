#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connexion.h"
#include "fenetreanimaux.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    Connexion c;
    bool test= c.ouvrirConnexion();

    FenetreAnimaux fenetreAnimaux;

    if(test)
    {
       fenetreAnimaux.show();
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("database is not open"),
        QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);
    }


    /*
     GestionAnimal essai("Fat7i","Cheval","AAA", "Equitation", 123, "Etable", 999);
     if(essai.ajouterAnimal())
     {
        /*QSqlQueryModel *test= new QSqlQueryModel();
        test = GestionAnimal::afficherAnimaux("Cheval");*/


         /*QSqlQuery query;
         query.prepare("select * from ANIMAUX WHERE RACE_ANI = :race");
         query.bindValue(":race","Chien");
         query.exec();

         QSqlQueryModel *model= new QSqlQueryModel();
         model->setQuery(query);
               model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
               model->setHeaderData(1,Qt::Horizontal, QObject::tr("RACE"));
               model->setHeaderData(3,Qt::Horizontal, QObject::tr("QUALITE"));
               model->setHeaderData(4,Qt::Horizontal, QObject::tr("VALEUR"));
               model->setHeaderData(5,Qt::Horizontal, QObject::tr("OBJECTIF"));
               model->setHeaderData(6,Qt::Horizontal, QObject::tr("FOYER"));
               model->setHeaderData(7,Qt::Horizontal, QObject::tr("ÂGE"));
               model->setHeaderData(8,Qt::Horizontal, QObject::tr("SURNOM"));

        QTableView *view = new QTableView(nullptr);

        view->setModel(model);
        view->hideColumn(0);

        view->show();
        //GestionAnimal::afficherAnimaux("Cheval");
     }
     else
     {
         QMessageBox::critical(nullptr,"Erreur", "L'ajout n'a pas marché");
     }
     */
    return a.exec();
}
