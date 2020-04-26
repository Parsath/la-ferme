#ifndef NOURRITURE_H
#define NOURRITURE_H
#include <QString>
#include <QtWidgets>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>


class nourriture
{
private:
    int id;
    QString aliment;
    QString animal;
    QString type;
    int qt;

public:
    nourriture();
    nourriture(int, QString, QString, QString, int);
    int get_id();
    QString get_aliment();
    QString get_animal();
    QString get_type();
    int get_qt();
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * afficher_id();
    bool modifier(int);
    bool supprimer(int);
    QSqlQueryModel * trieQt();
    QSqlQueryModel * trieId();

    static bool controle_id(const int);
};

#endif // NOURRITURE_H
