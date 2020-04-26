#include "nourriture.h"

nourriture::nourriture()
{
    id=0;
    aliment="";
    animal="";
    type="";
    qt=0;
}

nourriture::nourriture(int id, QString aliment, QString animal, QString type, int qt)
{
    this->id=id;
    this->aliment=aliment;
    this->animal=animal;
    this->type=type;
    this->qt=qt;
}

int nourriture::get_id()
{return id;}

QString nourriture::get_aliment()
{return aliment;}

QString nourriture::get_animal()
{return animal;}

QString nourriture::get_type()
{return type;}

int nourriture::get_qt()
{return qt;}

bool nourriture::ajouter()
{
    QSqlQuery query;
    QString res= QString::number(id);
    QString des= QString::number(qt);
    query.prepare("INSERT INTO nourriture (id, aliment, animal, type, qt) VALUES (:id, :aliment, :animal, :type, :qt)" );
    query.bindValue(":id", res);
    query.bindValue(":aliment", aliment);
    query.bindValue(":animal", animal);
    query.bindValue(":type", type);
    query.bindValue(":qt", des);
    return    query.exec();
}



QSqlQueryModel * nourriture::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM nourriture");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Aliment"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Animal"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type de l'Aliment"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    return  model;
}

QSqlQueryModel * nourriture::afficher_id()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT id FROM nourriture");
    return  model;
}

bool nourriture::modifier(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    QString des= QString::number(qt);
    query.prepare("UPDATE nourriture SET ALIMENT= :aliment , ANIMAL= :animal , TYPE= :type , QT= :qt WHERE ID = :id" );
    query.bindValue(":id", res);
    query.bindValue(":aliment", aliment);
    query.bindValue(":animal", animal);
    query.bindValue(":type", type);
    query.bindValue(":qt", des);
    return    query.exec();
}

bool nourriture::supprimer(int idd)
{
   QSqlQuery query;
   QString res= QString::number(idd);
   query.prepare("DELETE FROM nourriture WHERE ID =:id ");
   query.bindValue(":id", res);
   return    query.exec();
}

QSqlQueryModel * nourriture::trieQt()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM nourriture ORDER BY qt ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Aliment"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Animal"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type de l'Aliment"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    return  model;
}

QSqlQueryModel * nourriture::trieId()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM nourriture ORDER BY id ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Aliment"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Animal"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type de l'Aliment"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    return  model;
}

bool nourriture::controle_id(const int idd)
{  
    QSqlQuery query;
    query.prepare("SELECT * FROM nourriture");
    if(query.exec())
    {
        while(query.next())
        {
            if(idd == query.value(0).toInt())
            {
                return true;
            }
        }
        return false;
    }
}


