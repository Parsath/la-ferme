#include "gestionanimal.h"

GestionAnimal::GestionAnimal(QString surnom, QString race, QString qualite, QString objectif, int valeur, QString foyer, int age)
    : m_surnomAnimal(surnom), m_raceAnimal(race), m_qualiteAnimal(qualite),
      m_valeurAnimal(valeur), m_objectifAnimal(objectif), m_foyerAnimal(foyer), m_ageAnimal(age)
{
    m_idAnimal = this->setId();
}

int GestionAnimal::setId()
{
    int total(0);
    int recNum(0);
    QSqlQuery query;
    query.prepare("SELECT * from ANIMAUX");
    if(query.exec())
    {
         while(query.next())
        {
            recNum = query.value(0).toInt();
            total = total + recNum;
        }


        /*QString res = QString::number(total);
        QMessageBox::information(nullptr,"This",res);*/


    }
    query.clear();
    return total+1;
}

bool GestionAnimal::verifierExistenceSurnom(const QString &surnom)
{
    QSqlQuery query;
    query.prepare("SELECT * from ANIMAUX");
    if(query.exec())
    {
         while(query.next())
        {
            if(surnom == query.value(7).toString())
                return true;
        }
    }

    return false;
}

// CRUD //

/*
 * Ajout
 */

bool GestionAnimal::ajouterAnimal()
{
    QSqlQuery query;
    query.prepare("INSERT INTO ANIMAUX (ID_ANI, RACE_ANI, QUALITE, VALEUR, OBJECTIF, FOYER, ÂGE, SURNOM) VALUES (:id, :race, :qualite, :valeur, :objectif, :foyer, :age, :surnom)");
    query.bindValue(":id", m_idAnimal);
    query.bindValue(":race", m_raceAnimal);
    query.bindValue(":qualite", m_qualiteAnimal);
    query.bindValue(":valeur", m_valeurAnimal);
    query.bindValue(":objectif", m_objectifAnimal);
    query.bindValue(":foyer", m_foyerAnimal);
    query.bindValue(":age", m_ageAnimal);
    query.bindValue(":surnom", m_surnomAnimal);
    return query.exec();
}

/*
 * Suppression
 */

bool GestionAnimal::supprimerAnimal(QString surnom)
{
    QSqlQuery query;
    query.prepare("Delete from ANIMAUX where SURNOM = :surnom");
    query.bindValue(":surnom",surnom);
    return query.exec();
}

/*
 * Affichage
 */

QTableView * GestionAnimal::afficherAnimaux(const QString &race)
{
    QSqlQuery query;
    query.prepare("select * from ANIMAUX WHERE RACE_ANI = :race");
    query.bindValue(":race",race);
    query.exec();

    QSqlQueryModel *model= new QSqlQueryModel();
    model->setQuery(query);
          model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1,Qt::Horizontal, QObject::tr("RACE"));
          model->setHeaderData(2,Qt::Horizontal, QObject::tr("QUALITE"));
          model->setHeaderData(3,Qt::Horizontal, QObject::tr("VALEUR"));
          model->setHeaderData(4,Qt::Horizontal, QObject::tr("OBJECTIF"));
          model->setHeaderData(5,Qt::Horizontal, QObject::tr("FOYER"));
          model->setHeaderData(6,Qt::Horizontal, QObject::tr("ÂGE"));
          model->setHeaderData(7,Qt::Horizontal, QObject::tr("SURNOM"));

    QTableView *view = new QTableView();
    QPushButton *bouton = new QPushButton("help");

    view->setModel(model);
    view->setIndexWidget(model->index(1,9),bouton);

    view->show();
    view->hideColumn(0);
    view->hideColumn(1);


    return view;
}

/*
 * Modification
 */


