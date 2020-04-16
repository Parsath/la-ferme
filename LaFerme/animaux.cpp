#include "animaux.h"
#include <QDebug>
#include "connexion.h"

//*****Les constructeurs
animaux::animaux()
{
    id_ani=0;
    prix=0;
    type_ani="";
    qualite="";
}

animaux::~animaux()
{

}

animaux::animaux(int id_ani,int prix, QString type_ani, QString qualite)
{
this->id_ani=id_ani;
this->prix=prix;
this->type_ani=type_ani;
this->qualite=qualite;
}
//***fin des constructeurs ***

// **Les getters ***
QString animaux::get_type_ani(){return  type_ani;}
QString animaux::get_qualite(){return qualite;}
int animaux::get_id_ani(){return  id_ani;}
int animaux::get_prix(){return prix;}
// **Fin getters ***


//Les methodes crud ***

//ajout
bool animaux::ajouter()
{
QSqlQuery query;
QString res_id= QString::number(id_ani);
QString res_prix= QString::number(prix);

query.prepare("INSERT INTO animaux (ID_ANI, TYPE_ANI, QUALITE, PRIX) VALUES (:id_ani, :type_ani, :qualite, :prix)");
query.bindValue(":id_ani", res_id);
query.bindValue(":prix", res_prix);
query.bindValue(":qualite", qualite);
query.bindValue(":type_ani", type_ani);

return    query.exec();
}
//fin ajout

//supprimer
bool animaux::supprimer(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from animaux where ID_ANI = :id_ani ");
query.bindValue(":id_ani", res);
return    query.exec();
}
//fin supprimer

//afficher
QSqlQueryModel * animaux::afficher()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from animaux");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("QUALITE"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX"));

return model;
}
//fin afficher

//modifier
bool animaux:: modifier(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);

query.prepare("UPDATE animaux set ID_ANI=:id_ani,TYPE_ANI=:type_ani,QUALITE=:qualite, PRIX=:prix where ID_ANI=:id_ani");
query.bindValue(":id_ani", res);
query.bindValue(":prix", prix);
query.bindValue(":qualite", qualite);
query.bindValue(":type_ani", type_ani);
return  query.exec();
}
//fin modifier

//rechercher
bool  animaux:: rechercher(int idd)//mettre dans aller au slot
{
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select * from animaux where(id_ani="+res+")");
if(id_ani==res)
return  true;

return  false;
}

//fin rechercher

//afficher recherche
QSqlQueryModel* animaux::afficher_recherche()
{
int idd=0;
QSqlQueryModel *tab=new QSqlQueryModel;
QString res= QString::number(idd);
tab->setQuery("Select id_ani,upper(type_ani),upper(qualite),prix from animaux where(id_ani="+res+")");
if(rechercher(idd))
{
tab->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
tab->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE "));
tab->setHeaderData(2, Qt::Horizontal, QObject::tr("QUALITE"));
tab->setHeaderData(3, Qt::Horizontal, QObject::tr("PRIX"));
}
return tab;
}

//fin afficher recherche


//trier


//fin trie


