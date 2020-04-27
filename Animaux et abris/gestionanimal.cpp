#include "gestionanimal.h"

GestionAnimal::GestionAnimal(QString surnom, QString race, QString qualite, QString objectif, int valeur, QString foyer, int age)
    : m_surnomAnimal(surnom), m_raceAnimal(race), m_qualiteAnimal(qualite),
      m_valeurAnimal(valeur), m_objectifAnimal(objectif), m_foyerAnimal(foyer), m_ageAnimal(age)
{
    m_idAnimal = NULL;
}

/*
int GestionAnimal::setId()
{
    int total(0);
    int recNum(0);
    QSqlQuery query;
    query.prepare("SELECT * from ANIMAUX");
    if(query.exec())
    {
         while(query.next())
        {
            recNum = query.value(0).toInt();
            total = total + recNum;
        }


    }
    query.clear();
    return total+1;
}
*/


bool GestionAnimal::verifierExistenceSurnom(const QString &surnom)
{
    QSqlQuery query;
    query.prepare("SELECT * from ANIMAUX");
    if(query.exec())
    {
         while(query.next())
        {
            if(surnom == query.value(7).toString())
                return true;
        }
    }

    return false;
}

// CRUD //

/*
 * Ajout
 */

bool GestionAnimal::ajouterAnimal()
{
    fichierAnimal( m_raceAnimal, m_surnomAnimal, m_qualiteAnimal, m_valeurAnimal, m_objectifAnimal, m_foyerAnimal, m_ageAnimal);

    QSqlQuery query;
    query.prepare("INSERT INTO ANIMAUX (ID_ANI, RACE_ANI, QUALITE, VALEUR, OBJECTIF, FOYER, ÂGE, SURNOM) VALUES (:id, :race, :qualite, :valeur, :objectif, :foyer, :age, :surnom)");
    query.bindValue(":id", m_idAnimal);
    query.bindValue(":race", m_raceAnimal);
    query.bindValue(":qualite", m_qualiteAnimal);
    query.bindValue(":valeur", m_valeurAnimal);
    query.bindValue(":objectif", m_objectifAnimal);
    query.bindValue(":foyer", m_foyerAnimal);
    query.bindValue(":age", m_ageAnimal);
    query.bindValue(":surnom", m_surnomAnimal);
    return query.exec();
}

/*
 * Suppression
 */

bool GestionAnimal::supprimerAnimal(QString surnom)
{
    QSqlQuery query;
    query.prepare("Delete from ANIMAUX where SURNOM = :surnom");
    query.bindValue(":surnom",surnom);
    return query.exec();
}

/*
 * Affichage
 */

QSqlQueryModel * GestionAnimal::afficherAnimaux(const QString &race)
{
    QSqlQuery query;
    query.prepare("select * from ANIMAUX WHERE RACE_ANI = :race");
    query.bindValue(":race",race);
    query.exec();

    QSqlQueryModel *model= new QSqlQueryModel();
    model->setQuery(query);
          model->setHeaderData(0,Qt::Horizontal, QObject::tr("ID"));
          model->setHeaderData(1,Qt::Horizontal, QObject::tr("RACE"));
          model->setHeaderData(2,Qt::Horizontal, QObject::tr("QUALITE"));
          model->setHeaderData(3,Qt::Horizontal, QObject::tr("VALEUR"));
          model->setHeaderData(4,Qt::Horizontal, QObject::tr("OBJECTIF"));
          model->setHeaderData(5,Qt::Horizontal, QObject::tr("FOYER"));
          model->setHeaderData(6,Qt::Horizontal, QObject::tr("ÂGE"));
          model->setHeaderData(7,Qt::Horizontal, QObject::tr("SURNOM"));


    /*
    QTableView *view = new QTableView();
    QPushButton *bouton = new QPushButton("help");

    view->setModel(model);
    view->setIndexWidget(model->index(1,9),bouton);

    view->show();
    view->hideColumn(0);
    view->hideColumn(1);
    */


    return model;
}


void GestionAnimal::fichierAnimal(QString const &race, QString const& surnom, QString const& qualite,
                                  int const& valeur, QString const& objectif, QString const& foyer, int const& age)
{
    if(!QDir("Animaux").exists())
        QDir().mkdir("Animaux");


    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName("Animaux/" + surnom + ".pdf");
    QString ageString = QString::number(age);
    QString valeurString = QString::number(valeur);

    QPainter painter(&printer);
    QPen contourPen(Qt::black, 2, Qt::SolidLine);

    painter.setPen(contourPen);
    painter.drawRect(20, 20, 735, 1050);

    painter.setPen(Qt::darkBlue);
    painter.setFont(QFont("Arial", 30, 500));
    painter.drawText( 335, 70, " " + surnom);

    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 16, 200));
    painter.drawText( 50, 200, "Race : " + race);
    painter.drawText( 50, 250, "Age : " + ageString + " ans");
    painter.drawText( 50, 300, "Objectif : " + objectif);
    painter.drawText( 50, 350, "Valeur : " + valeurString + " Dt" );
    painter.drawText( 50, 400, "Foyer : " + foyer);
    painter.drawText( 50, 450, "Qualite de l'animal/viande : " + qualite);

    painter.end();


}


