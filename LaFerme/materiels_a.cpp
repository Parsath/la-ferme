#include "materiels_a.h"
#include <QDebug>
#include "connexion.h"

//*****Les constructeurs
Materiels_A::Materiels_A()
{
    id=0;
    qte=0;
    date="";
    nom="";
}

Materiels_A::~Materiels_A()
{

}

Materiels_A::Materiels_A(int id,int qte, QString nom, QString date)
{
this->id=id;
this->qte=qte;
this->nom=nom;
this->date=date;
}
//***fin des constructeurs ***

// **Les getters ***
QString Materiels_A::get_nom(){return  nom;}
QString Materiels_A::get_date(){return date;}
int Materiels_A::get_id(){return  id;}
int Materiels_A::get_Qte(){return qte;}
// **Fin getters ***


//Les methodes crud ***

//ajout
bool Materiels_A::ajouter_mat_a()
{
QSqlQuery query;
QString res_id= QString::number(id);
QString res_qte= QString::number(qte);

query.prepare("INSERT INTO mat_a (ID_MAT, NOM, ETAT, DATE_AJOUT) VALUES (:id, :nom, :qte, :date)");
query.bindValue(":id", res_id);
query.bindValue(":qte", res_qte);
query.bindValue(":nom", nom);
query.bindValue(":date", date);

return    query.exec();
}
//fin ajout

//supprimer
bool Materiels_A::supprimer_mat_a(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from mat_a where ID_MAT = :id ");
query.bindValue(":id", res);
return    query.exec();
}
//fin supprimer

//afficher
QSqlQueryModel * Materiels_A::afficher_mat_a()
{
QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from mat_a");

model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("ETAT"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE_AJOUT"));

return model;
}
//fin afficher

//modifier
bool Materiels_A:: modifier_mat_a(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);

query.prepare("UPDATE mat_a set ID_MAT=:id,NOM=:nom,ETAT=:qte, DATE_AJOUT=:date where ID_MAT=:id");
query.bindValue(":nom", nom);
query.bindValue(":qte", qte);
query.bindValue(":id", res);
query.bindValue(":date", date);

return  query.exec();
}
//fin modifier

//rechercher
bool  Materiels_A:: rechercher_mat_a(int idd)//mettre dans aller au slot
{
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select * from mat_a where(id="+res+")");
if(id==res)
return  true;

return  false;
}

//fin rechercher

//afficher recherche
QSqlQueryModel* Materiels_A::afficher_recherche_mat_a()
{
int idd=0;
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select id_mat,upper(nom),etat,upper(date_ajout) from mat_a where(id="+res+")");
if(rechercher_mat_a(idd))
{
tab->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
tab->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM "));
tab->setHeaderData(2, Qt::Horizontal, QObject::tr("DATE_AJOUT"));
tab->setHeaderData(3, Qt::Horizontal, QObject::tr("ETAT"));
}
return tab;
}

//fin afficher recherche


//trier


//fin trie

