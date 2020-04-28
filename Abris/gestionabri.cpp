#include "gestionabri.h"

GestionAbri::GestionAbri(QString etat, QString foyer, int capacite, int id)
    : m_capaciteAbri(capacite), m_foyerAnimal(foyer), m_etatAbri(etat)
{
    if(this->setId(m_idAbri))
        m_idAbri = id;
    else
        m_idAbri = NULL;
}

bool GestionAbri::setId(int id)
{
    if( id == 0 )
        return false;



    m_idAbri = id;

    return true;
}

// CRUD //

/*
 * Ajout
 */

bool GestionAbri::ajouterAbri()
{

    QSqlQuery query;
    query.prepare("INSERT INTO ABRIS (ID_ABRIS, ETAT, TYPE_ABRI, CAPACITE) VALUES (:id, :etat, :foyer, :capacite)");
    query.bindValue(":id", m_idAbri);
    query.bindValue(":etat", m_etatAbri);
    query.bindValue(":capacite", m_capaciteAbri);
    query.bindValue(":foyer", m_foyerAnimal);
    return query.exec();
}

/*
 * Suppression
 */

bool GestionAbri::supprimerFoyer(int id)
{
    QSqlQuery query;
    query.prepare("Delete from ABRIS where ID_ABRIS = :id");
    query.bindValue(":id",id);
    return query.exec();
}

/*
 * Affichage
 */

QSqlQueryModel * GestionAbri::afficherAbris(const QString &foyer)
{
    QSqlQuery query;
    query.prepare("select * from ABRIS WHERE TYPE_ABRI = :foyer");
    query.bindValue(":foyer",foyer);
    query.exec();

    QSqlQueryModel *model= new QSqlQueryModel();
    model->setQuery(query);
          model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1,Qt::Horizontal, QObject::tr("ETAT"));
          model->setHeaderData(2,Qt::Horizontal, QObject::tr("FOYER"));
          model->setHeaderData(3,Qt::Horizontal, QObject::tr("CAPACITE"));

    return model;
}


