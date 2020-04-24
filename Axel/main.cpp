#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include "connection.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   Connection c;
   bool test= c.ouvrirConnection();
   MainWindow w;
   //w.showFullScreen();
   w.show();
   w.setWindowTitle("Smart Farmer");

     if(test)
   {
       w.show();
   }
        else
           QMessageBox::information(nullptr, QObject::tr("database is not open"),
              QObject::tr("Echec de la connexion.\n""Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}
