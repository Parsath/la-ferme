#include "ouvrier.h"

Ouvrier::Ouvrier()
{
 id_ouvrier=0;
 nom=" ";
 prenom=" ";
 password=" ";
 contact=0;
 rue=0;
 code_postal=0;
 ville=" ";
}

Ouvrier::~Ouvrier()
{

}

Ouvrier::Ouvrier(int id,QString nom,QString prenom,QString pwd,int C,int R,int CP,QString V)
{
    this->id_ouvrier=id;
    this->nom=nom;
    this->prenom=prenom;
    this->password=pwd;
    this->contact=C;
    this->rue=R;
    this->code_postal=CP;
    this->ville=V;
}

QString Ouvrier::get_nom()
{
    return nom;
}

QString Ouvrier:: get_prenom()
{
    return prenom;
}

QString Ouvrier::get_ville()
{
    return ville;
}

QString Ouvrier:: get_password()
{
    return password;
}

int Ouvrier:: get_id()
{
    return id_ouvrier;
}

int Ouvrier:: get_rue()
{
    return rue;
}

int Ouvrier:: get_contact()
{
    return contact;
}

int Ouvrier:: get_code()
{
    return code_postal;
}

bool Ouvrier::ajouter()
{
    QSqlQuery query;
    QString  res=QString ::number(id_ouvrier);
    QString  res1=QString ::number(contact);
    QString  res2=QString ::number(rue);
    QString  code=QString ::number(code_postal);
    query.prepare("INSERT INTO ouvrier (id_ouvrier, nom, prenom, mot_de_passe, contact, rue, code_postal, ville) VALUES (:id, :nom, :prenom, :pwd, :contact, :rue, :code, :ville)");
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":contact",res1);
    query.bindValue(":rue",res2);
    query.bindValue(":code",code);
    query.bindValue(":ville",ville);
    query.bindValue(":pwd",password);
    return query.exec();
}

QSqlQueryModel * Ouvrier::afficher()
{
  QSqlQueryModel *model= new QSqlQueryModel();
  model->setQuery("select * from ouvrier") ;
          model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1,Qt::Horizontal, QObject::tr("NOM"));
          model->setHeaderData(2,Qt::Horizontal, QObject::tr("PRENOM"));
          model->setHeaderData(3,Qt::Horizontal, QObject::tr("PASSWORD"));
          model->setHeaderData(4,Qt::Horizontal, QObject::tr("CONTACT"));
          model->setHeaderData(5,Qt::Horizontal, QObject::tr("RUE"));
          model->setHeaderData(6,Qt::Horizontal, QObject::tr("CODE POSTAL"));
          model->setHeaderData(7,Qt::Horizontal, QObject::tr("VILLE"));
          return model;
}

bool Ouvrier::supprimer(int idd)
{
    QSqlQuery query;
    QString  res=QString ::number(idd);
    query.prepare("Delete from ouvrier where ID_OUVRIER = :id");
    query.bindValue(":id",res);
    return query.exec();
}

//modifier
bool Ouvrier:: modifier(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);

query.prepare("UPDATE ouvrier set id_ouvrier=:id_ouvrier, nom=:nom, contact=:contact, rue=:rue, mot_de_passe=:password, code_postal=:code  where id_ouvrier=:id_ouvrier");
query.bindValue(":nom", nom);
query.bindValue(":prenom", prenom);
query.bindValue(":id_ouvrier", res);
query.bindValue(":contact", contact);
query.bindValue(":rue", rue);
query.bindValue(":ville", ville);
query.bindValue(":password", password);
query.bindValue(":code", code_postal);

return  query.exec();
}
//fin modifier


QSqlQueryModel * Ouvrier::afficher_ouvrier_comboBox()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select id_ouvrier from ouvrier");
    return model;
}
