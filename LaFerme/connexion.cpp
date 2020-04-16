#include "connexion.h"

Connexion::Connexion()
{}

bool Connexion::ouvrirConnexion()
{
bool test=false;
   db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("oracle");//inserer nom de l'utilisateur
db.setPassword("oracle");//inserer mot de passe de cet utilisateur


if (db.open()) test = true;


return test;

}
void Connexion::fermerConnexion()
{db.close();}
