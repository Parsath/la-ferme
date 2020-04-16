#ifndef MATERIELS_A_H
#define MATERIELS_A_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Materiels_A
{
public:
    Materiels_A();
    Materiels_A(int,int,QString,QString);
    ~Materiels_A();
    QString get_nom();
    QString get_date();
    int get_id();
    int get_Qte();

  //Les fonctions crud
    QSqlQueryModel * afficher_mat_a();
    QSqlQueryModel *afficher_recherche_mat_a();
            //*****
    bool ajouter_mat_a();
    bool modifier_mat_a(int idd);
    bool  rechercher_mat_a(int id);
    bool supprimer_mat_a(int);


private:
    QString nom,date;
    int id,qte;

};


#endif // MATERIELS_A_H
