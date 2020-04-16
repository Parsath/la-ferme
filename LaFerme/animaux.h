#ifndef ANIMAUX_H
#define ANIMAUX_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class animaux
{
public:
    animaux();
    animaux(int,int, QString, QString);
    ~animaux();
    int get_id_ani();
    int get_prix();
    QString get_type_ani();
    QString get_qualite();

  //Les fonctions crud
    QSqlQueryModel * afficher();
    QSqlQueryModel *afficher_recherche();
            //*****
    bool ajouter();
    bool supprimer(int idd);
    bool modifier(int idd);
    bool rechercher(int id);


private:
    int id_ani;
    int prix;
    QString type_ani;
    QString qualite;
};
#endif // ANIMAUX_H
