#include "nourriture_v.h"

nourriture_v::nourriture_v()
{
    id=0;
    aliment="";
    plante="";
    type="";
    qt=0;
}

nourriture_v::nourriture_v(int id, QString aliment, QString plante, QString type, int qt)
{
    this->id=id;
    this->aliment=aliment;
    this->plante=plante;
    this->type=type;
    this->qt=qt;
}

int nourriture_v::get_id()
{return id;}

QString nourriture_v::get_aliment()
{return aliment;}

QString nourriture_v::get_plante()
{return plante;}

QString nourriture_v::get_type()
{return type;}

int nourriture_v::get_qt()
{return qt;}

bool nourriture_v::ajouter()
{
    QSqlQuery query;
    QString res= QString::number(id);
    QString des= QString::number(qt);
    query.prepare("INSERT INTO nourriture_v (id, aliment, plante, type, qt) VALUES (:id, :aliment, :plante, :type, :qt)" );
    query.bindValue(":id", res);
    query.bindValue(":aliment", aliment);
    query.bindValue(":plante", plante);
    query.bindValue(":type", type);
    query.bindValue(":qt", des);
    return    query.exec();
}



QSqlQueryModel * nourriture_v::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM nourriture_v");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Aliment"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Plante"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type de l'Aliment"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    return  model;
}

QSqlQueryModel * nourriture_v::afficher_id()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT id FROM nourriture_v");
    return  model;
}

bool nourriture_v::modifier(int idd)
{
    QSqlQuery query;
    QString res= QString::number(idd);
    QString des= QString::number(qt);
    query.prepare("UPDATE nourriture_v SET ALIMENT= :aliment , PLANTE= :plante , TYPE= :type , QT= :qt WHERE ID = :id" );
    query.bindValue(":id", res);
    query.bindValue(":aliment", aliment);
    query.bindValue(":plante", plante);
    query.bindValue(":type", type);
    query.bindValue(":qt", des);
    return    query.exec();
}

bool nourriture_v::supprimer(int idd)
{
   QSqlQuery query;
   QString res= QString::number(idd);
   query.prepare("DELETE FROM nourriture_v WHERE ID =:id ");
   query.bindValue(":id", res);
   return    query.exec();
}

QSqlQueryModel * nourriture_v::trieQt()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM nourriture_v ORDER BY qt ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Aliment"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Plante"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type de l'Aliment"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    return  model;
}

QSqlQueryModel * nourriture_v::trieId()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM nourriture_v ORDER BY id ASC");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Aliment"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Plante"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type de l'Aliment"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantité"));
    return  model;
}

bool nourriture_v::controle_id(int idd)
{
  /* QSqlQueryModel *model= new QSqlQueryModel;
   QString res= QString::number(idd);
   model->setQuery("SELECT id FROM nourriture WHERE id="+res+" ");
   if (model)
      return false;

   return true;*/

   /*QSqlQuery query;
   QString res= QString::number(idd);
   query.prepare("SELECT id FROM nourriture WHERE id="+res+" ");
   query.bindValue(":id", res);
   if(    query.exec())
       return false;

   return true;

  /// QSqlQueryModel *model;
   QSqlQuery query;
   QString res= QString::number(idd);
   query.prepare("SELECT id FROM nourriture WHERE ID like :test ");
   query.bindValue(":test", res+"%");
   query.exec();
   model->setQuery(query);
   if (model == res)*/
}
