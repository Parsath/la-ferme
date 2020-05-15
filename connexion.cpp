#include "connexion.h"

Connexion::Connexion()
{

}
bool Connexion::ouvrirconnexion(){
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("Source_Project2A");
    db.setUserName("Omar");
    db.setPassword("stanger");
   if (db.open()){
       return true ;
   }
   return false ;
}

void Connexion::fermerconnexion(){
    db.close();
}
