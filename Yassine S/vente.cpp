#include "vente.h"

Vente::Vente()
{

}
Vente::Vente(int i,QDate d ,int q,float p)
{
id = i ;
date = d ;
quantite = q ;
prix = p ;
}

bool Vente :: Ajouter (){
    QSqlQuery q;
    QString p ;
      p.setNum(prix);
q.prepare("INSERT INTO Vente (id,datea,quantite,prix) VALUES(:id,TO_DATE(:date, 'MM/DD/YYYY'),:quantite,:prix);");
q.bindValue(":id",QString::number(id));
q.bindValue(":date",date.toString("MM/dd/yyyy "));
q.bindValue(":quantite",QString::number(quantite));
q.bindValue(":prix",p);
return q.exec();
}


QSqlQueryModel *Vente :: afficher(){
QSqlQueryModel *model = new QSqlQueryModel() ;
model->setQuery("SELECT * FROM Vente");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("Quantite"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix"));

return model ;
 }

bool Vente :: Supprimer(QString id){
    QSqlQuery q ;
        q.prepare("DELETE FROM Vente WHERE id = :id ;");
        q.bindValue(":id",id);
        return q.exec();
}
QSqlQueryModel * Vente :: Recherche(QString col,QString val){
QSqlQueryModel *model = new QSqlQueryModel() ;
QString header = "SELECT * FROM Vente WHERE "+col+" LIKE '"+val+"%'";
model->setQuery(header);
model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("Quantite"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix"));
    return model ;
}

QSqlQueryModel * Vente :: tri(QString col){
    QSqlQueryModel *model = new QSqlQueryModel() ;
    QString header = "SELECT * FROM Vente ORDER BY "+col;
    model->setQuery(header);
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("ID"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("Date"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("Quantite"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("Prix"));
        return model ;
}
bool Vente :: modifier(int id,QString nv,QString nomc){
     QString header ;
    QSqlQuery q;
    if (nomc!="Date"){
       header = "UPDATE Vente SET "+nomc+"=:nv WHERE (ID= :id);";
        q.prepare(header);
        q.bindValue(":nv",nv);
        q.bindValue(":id",id);
    }else {
       header =  "UPDATE Vente SET DATEA= TO_DATE(:date, 'MM/DD/YYYY') WHERE (ID= :id);";
       q.prepare(header);
    q.bindValue(":date",nv);
    q.bindValue(":id",id);
    }
    return q.exec();
}

