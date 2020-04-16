#ifndef G_OUVRIERS_H
#define G_OUVRIERS_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class G_Ouvriers
{
public:
    G_Ouvriers();
    G_Ouvriers(int,QString,QString,QString,int,int,int,QString);
    ~G_Ouvriers();

    QString get_nom();
    QString get_prenom();
    QString get_ville();
    QString get_password();
    int get_id();
    int get_code();
    int get_rue();
    int get_contact();

  //Les fonctions crud
    QSqlQueryModel * afficher();
            //*****
    bool ajouter();
    bool supprimer(int idd);


private:
    int id_ouvrier;
    QString nom;
    QString prenom;
    QString password;
    int contact;
    int rue;
    int code_postal;
    QString ville;
};

#endif // G_OUVRIERS_H
