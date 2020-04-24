#include "connection.h"

Connection::Connection()
{}

bool Connection::ouvrirConnection()
{
bool test=false;
   db=QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test");
db.setUserName("axel");//inserer nom de l'utilisateur
db.setPassword("Maya10");//inserer mot de passe de cet utilisateur


if (db.open()) test = true;


return test;

}
void Connection::fermerConnection()
{db.close();}

