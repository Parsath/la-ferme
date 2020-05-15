#ifndef ACHAT_H
#define ACHAT_H
#include <QDate>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Achat
{
    int id ;
    QDate date ;
    int quantite ;
    float prix ;
public:
    Achat();
    Achat(int,QDate,int,float);
    bool  Ajouter ();
    QSqlQueryModel * afficher();
    bool  Supprimer(QString id);
    QSqlQueryModel *  Recherche(QString col ,QString val);
    QSqlQueryModel *  tri(QString col);

};

#endif // ACHAT_H
