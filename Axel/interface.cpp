#include "interface.h"
#include "conges.h"
#include "ouvrier.h"
#include "ui_interface.h"
#include <QMessageBox>
#include <QWidget>
#include <QRegExpValidator>
#include <QPrinter>
#include <QPrintDialog>
#include <QDate>
#include <QTextStream>
#include <QTextDocument>


#define NOM "^[a-zA-Z '.-]*$"
#define ID "^[0-9]+$"
#define DATE "^(0[1-9]|[12][0-9]|3[01])[- /.](0[1-9]|1[012])[- /.](19|20)\\d\\d$"
#define PWD "^.{4,8}$"


Interface::Interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Interface)
{
    ui->setupUi(this);
    ui->tab_conges->setModel(tmp_cong.afficher());
    ui->tab_ouvrier->setModel(tmp_ouv.afficher());
   /* ui->comboBox_con->setModel(tmp_cong.afficher_conges_comboBox());
    ui->comboBox_ouv->setModel(tmp_ouv.afficher_ouvrier_comboBox());*/

    QRegExp  rxNom(NOM), rxId(ID), rxDate(DATE), rxPwd(PWD);
    QRegExpValidator * nom = new QRegExpValidator(rxNom,this);
    QRegExpValidator * id = new QRegExpValidator(rxId,this);
    QRegExpValidator * date = new QRegExpValidator(rxDate,this);
    QRegExpValidator * pwd = new QRegExpValidator(rxPwd,this);

    ui->lineEdit_ajout_con_id->setValidator(id);
    ui->lineEdit_ajout_con_id_adm->setValidator(id);
    ui->lineEdit_ajout_con_id_ouv->setValidator(id);
    ui->lineEdit_ajout_con_sc->setValidator(id);
    ui->lineEdit_ajout_con_date_d->setValidator(date);
    ui->lineEdit_ajout_con_date_r->setValidator(date);

    ui->lineEdit_ajout_ouv_id->setValidator(id);
    ui->lineEdit_ajout_ouv_nom->setValidator(nom);
    ui->lineEdit_ajout_ouv_prenom->setValidator(nom);
    ui->lineEdit_ajout_ouv_pwd->setValidator(pwd);
    ui->lineEdit_ajout_ouv_contact->setValidator(id);
    ui->lineEdit_ajout_ouv_ville->setValidator(nom);
    ui->lineEdit_ajout_ouv_rue->setValidator(id);
    ui->lineEdit_ajout_ouv_cp->setValidator(id);

}

Interface::~Interface()
{
    delete ui;
}

void Interface::on_pushButton_ajout_con_clicked()
{
    int id = ui->lineEdit_ajout_con_id->text().toInt();
    int id_admin = ui->lineEdit_ajout_con_id_adm->text().toInt();
    int id_ouv = ui->lineEdit_ajout_con_id_ouv->text().toInt();
    int solde= ui->lineEdit_ajout_con_sc->text().toInt();

    QString date_dep= ui->lineEdit_ajout_con_date_d->text();
    QString date_retour =ui->lineEdit_ajout_con_date_r->text();
   Conges cong(id,id_admin,id_ouv,solde,date_dep,date_retour);
  bool test= cong.ajouter();
  if(test)
{
      ui->tab_conges->setModel(tmp_cong.afficher()); //refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Materiels ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

//ui->statusBar->showMessage("Materiels ajouté");
  }
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un materiels"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

void Interface::on_pushButton_modif_con_clicked()
{
    int id = ui->lineEdit_ajout_con_id->text().toInt();
    int id_admin = ui->lineEdit_ajout_con_id_adm->text().toInt();
    int id_ouv = ui->lineEdit_ajout_con_id_ouv->text().toInt();
    int solde= ui->lineEdit_ajout_con_sc->text().toInt();
    QString date_dep= ui->lineEdit_ajout_con_date_d->text();
    QString date_retour =ui->lineEdit_ajout_con_date_r->text();

   Conges cong(id,id_admin,id_ouv,solde,date_dep,date_retour);
  bool test= cong.modifier(id);
   if(test)
 {
       ui->tab_conges->setModel(tmp_cong.afficher()); //refresh

 QMessageBox::information(nullptr, QObject::tr("Modification Réussi"),
                   QObject::tr("Ajouté.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

 //ui->statusBar->showMessage(" ajouté");
   }
   else
       QMessageBox::critical(nullptr, QObject::tr("Echec Modification"),
                   QObject::tr("Erreur !.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);
 //ui->statusBar->showMessage("Erreur");
}

void Interface::on_pushButton_supp_con_clicked()
{
    int id = ui->lineEdit_ajout_con_id->text().toInt();
    bool test=tmp_cong.supprimer(id);
    if(test)

   {
        ui->tab_conges->setModel(tmp_cong.afficher()); //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Matériels supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void Interface::on_lineEdit_rech_con_id_textChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from conges where id_conges like :test");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tab_conges->setModel(model);
   // ui->tableView_rech_conges->setModel(tmp_cong.afficher_recherche());
}

void Interface::on_pushButton_tri_con_clicked()
{
    QSqlQuery query;
    Conges con;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from conges order by id_conges");
    query.exec();
    model->setQuery(query);
    ui->tab_conges->setModel(model);
}

void Interface::on_comboBox_con_currentIndexChanged(const QString &arg1)
{
     QSqlQuery query;
     QSqlQueryModel *model=new QSqlQueryModel;
     query.prepare("Select * from conges where id_conges like :test ");
     query.bindValue(":test", arg1+"%");
     if (query.exec())
     {
         while(query.next())
         {
             ui->lineEdit_ajout_con_id->setText(query.value(4).toString());
             ui->lineEdit_ajout_con_id_adm->setText(query.value(3).toString());
             ui->lineEdit_ajout_con_id_ouv->setText(query.value(2).toString());
             ui->lineEdit_ajout_con_date_d->setText(query.value(0).toString());
             ui->lineEdit_ajout_con_date_r->setText(query.value(1).toString());
             ui->lineEdit_ajout_con_sc->setText(query.value(5).toString());
             model->setQuery(query);

         }
     }
}

void Interface::on_pushButton_17_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);//0
}

void Interface::on_pushButton_15_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);//3
}

void Interface::on_pushButton_16_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

//retour conges
void Interface::on_pushButton_retour_con_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
//retour admin
void Interface::on_pushButton_retour_ad_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

//retour ouvrier
void Interface::on_pushButton_retour_ouv_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}


void Interface::on_tab_conges_activated(const QModelIndex &index)
{
    QString val = ui->tab_conges->model()->data(index).toString();
     QSqlQuery query;
     query.prepare("Select * from conges where id_conges= '"+val+"' or date_retour= '"+val+"' or date_depart= '"+val+"' or solde_conges= '"+val+"' or id_admin= '"+val+"' or id_ouvrier= '"+val+"' ");

     if (query.exec())
     {
         while(query.next())
         {
             ui->lineEdit_ajout_con_id->setText(query.value(4).toString());
             ui->lineEdit_ajout_con_id_adm->setText(query.value(3).toString());
             ui->lineEdit_ajout_con_id_ouv->setText(query.value(2).toString());
             ui->lineEdit_ajout_con_date_d->setText(query.value(0).toString());
             ui->lineEdit_ajout_con_date_r->setText(query.value(1).toString());
             ui->lineEdit_ajout_con_sc->setText(query.value(5).toString());
         }
     }
     else
         QMessageBox::critical(nullptr, QObject::tr("Supprimer matériels"),
                     QObject::tr("Erreur !.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);

}

void Interface::on_pushButton_actu_con_clicked()
{
    ui->tab_conges->setModel(tmp_cong.afficher());
    ui->comboBox_con->setModel(tmp_cong.afficher_conges_comboBox());

    ui->lineEdit_ajout_con_id->setText(0);
    ui->lineEdit_ajout_con_id_adm->setText(0);
    ui->lineEdit_ajout_con_id_ouv->setText(0);
    ui->lineEdit_ajout_con_date_d->setText(0);
    ui->lineEdit_ajout_con_date_r->setText(0);
    ui->lineEdit_ajout_con_sc->setText(0);
}

//****************OUVRIER***********************************//

//BOUTTON  AJOUTER


void Interface::on_pushButton_ajout_ouv_clicked()
{
    int id = ui->lineEdit_ajout_ouv_id->text().toInt();
    int rue = ui->lineEdit_ajout_ouv_rue->text().toInt();
    int code_postal = ui->lineEdit_ajout_ouv_cp->text().toInt();
    int contact= ui->lineEdit_ajout_ouv_contact->text().toInt();
    QString password= ui->lineEdit_ajout_ouv_pwd->text();
    QString ville =ui->lineEdit_ajout_ouv_ville->text();
    QString nom= ui->lineEdit_ajout_ouv_nom->text();
    QString prenom=ui->lineEdit_ajout_ouv_prenom->text();
   Ouvrier ouv(id,nom,prenom,password,contact,rue,code_postal,ville);
  bool test= ouv.ajouter();
  if(test)
{
      ui->tab_ouvrier->setModel(tmp_ouv.afficher()); //refresh
QMessageBox::information(nullptr, QObject::tr("Ajouter un Ouvrier"),
                  QObject::tr("Ouvrier ajouté.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);

//ui->statusBar->showMessage("Ouvrier ajouté");
  }
  else
      QMessageBox::critical(nullptr, QObject::tr("Ajouter un Ouvrier"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);
}

//BOUTTON SUPPRESSION


void Interface::on_pushButton_supp_ouv_clicked()
{
    int id = ui->lineEdit_ajout_ouv_id->text().toInt();
    bool test=tmp_ouv.supprimer(id);
    if(test)

   {
        ui->tab_ouvrier->setModel(tmp_ouv.afficher()); //refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Ouvrier supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


//BOUTTON MODIF

void Interface::on_pushButton_modif_ouv_clicked()
{
        int id = ui->lineEdit_ajout_ouv_id->text().toInt();
        int rue = ui->lineEdit_ajout_ouv_rue->text().toInt();
        int code_postal = ui->lineEdit_ajout_ouv_cp->text().toInt();
        int contact= ui->lineEdit_ajout_ouv_contact->text().toInt();
        QString password= ui->lineEdit_ajout_ouv_pwd->text();
        QString ville =ui->lineEdit_ajout_ouv_ville->text();
        QString nom= ui->lineEdit_ajout_ouv_nom->text();
        QString prenom=ui->lineEdit_ajout_ouv_prenom->text();
       Ouvrier ouv(id,nom,prenom,password,contact,rue,code_postal,ville);
      bool test= ouv.modifier(id);
      if(test)
    {
          ui->tab_ouvrier->setModel(tmp_ouv.afficher()); //refresh
    QMessageBox::information(nullptr, QObject::tr("Ajouter un Ouvrier"),
                      QObject::tr("Ouvrier ajouté.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);

    //ui->statusBar->showMessage("Ouvrier ajouté");
      }
      else
          QMessageBox::critical(nullptr, QObject::tr("Ajouter un Ouvrier"),
                      QObject::tr("Erreur !.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
    }


//BOUTTON RECHERCHE

void Interface::on_lineEdit_rech_ouv_id_textChanged(const QString &arg1)
{
    QSqlQuery query;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from ouvrier where id_ouvrier like :test");
    query.bindValue(":test", arg1+"%");
    query.exec();
    model->setQuery(query);
    ui->tab_ouvrier->setModel(model);
   // ui->tableView_rech_conges->setModel(tmp_cong.afficher_recherche());
}

//BOUTTON TRI


void Interface::on_pushButton_tri_ouv_clicked()
{
    QSqlQuery query;
    Conges con;
    QSqlQueryModel *model=new QSqlQueryModel;
    query.prepare("Select * from ouvrier order by id_ouvrier");
    query.exec();
    model->setQuery(query);
    ui->tab_ouvrier->setModel(model);
}


//BOUTTON COMBOBOX
void Interface::on_comboBox_ouv_currentIndexChanged(const QString &arg1)
{
    {
         QSqlQuery query;
         QSqlQueryModel *model=new QSqlQueryModel;
         query.prepare("Select * from ouvrier where id_ouvrier like :test ");
         query.bindValue(":test", arg1+"%");
         if (query.exec())
         {
             while(query.next())
             {
                 ui->lineEdit_ajout_ouv_id->setText(query.value(0).toString());
                 ui->lineEdit_ajout_ouv_nom->setText(query.value(1).toString());
                 ui->lineEdit_ajout_ouv_prenom->setText(query.value(2).toString());
                 ui->lineEdit_ajout_ouv_pwd->setText(query.value(3).toString());
                 ui->lineEdit_ajout_ouv_contact->setText(query.value(4).toString());
                 ui->lineEdit_ajout_ouv_ville->setText(query.value(5).toString());
                 ui->lineEdit_ajout_ouv_rue->setText(query.value(6).toString());
                 ui->lineEdit_ajout_ouv_cp->setText(query.value(7).toString());
                 model->setQuery(query);

             }
         }
    }
}

void Interface::on_tab_ouvrier_activated(const QModelIndex &index)
{
    {
        QString val = ui->tab_ouvrier->model()->data(index).toString();
         QSqlQuery query;
         query.prepare("Select * from ouvrier where id_ouvrier= '"+val+"' or nom= '"+val+"' or prenom= '"+val+"' or contact= '"+val+"' or ville= '"+val+"' or rue= '"+val+"' or mot_de_passe= '"+val+"' or ville= '"+val+"' or code_postal= '"+val+"' ");

         if (query.exec())
         {
             while(query.next())
             {
                 ui->lineEdit_ajout_ouv_id->setText(query.value(0).toString());
                 ui->lineEdit_ajout_ouv_nom->setText(query.value(1).toString());
                 ui->lineEdit_ajout_ouv_prenom->setText(query.value(2).toString());
                 ui->lineEdit_ajout_ouv_pwd->setText(query.value(3).toString());
                 ui->lineEdit_ajout_ouv_contact->setText(query.value(4).toString());
                 ui->lineEdit_ajout_ouv_ville->setText(query.value(5).toString());
                 ui->lineEdit_ajout_ouv_rue->setText(query.value(6).toString());
                 ui->lineEdit_ajout_ouv_cp->setText(query.value(7).toString());
             }
         }
         else
             QMessageBox::critical(nullptr, QObject::tr("Supprimer matériels"),
                         QObject::tr("Erreur !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

    }
}
// BOUTTON ACTUALISER
void Interface::on_pushButton_actu_ouv_clicked()
{
    ui->tab_ouvrier->setModel(tmp_ouv.afficher());
    ui->comboBox_ouv->setModel(tmp_ouv.afficher_ouvrier_comboBox());

    ui->lineEdit_ajout_ouv_id->setText(0);
    ui->lineEdit_ajout_ouv_nom->setText(0);
    ui->lineEdit_ajout_ouv_prenom->setText(0);
    ui->lineEdit_ajout_ouv_pwd->setText(0);
    ui->lineEdit_ajout_ouv_contact->setText(0);
    ui->lineEdit_ajout_ouv_ville->setText(0);
    ui->lineEdit_ajout_ouv_rue->setText(0);
     ui->lineEdit_ajout_ouv_cp->setText(0);
}

void Interface::on_pushButton_printer_ouv_clicked()
{
   /* QPrinter printer;
    printer.setPrinterName("nom imprimante");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec() == QDialog::Rejected) return;
   // ui->textEdit->print(&printer);
    //ui->textEdit_ouvrier->setText(ui->tab_ouvrier->setModel(tmp_ouv.afficher()));
    //ui->textEdit_ouvrier->setText(ui->tab_ouvrier.toString())*/

    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tab_ouvrier->model()->rowCount();
    const int columnCount = ui->tab_ouvrier->model()->columnCount();
    QString TT = QDate::currentDate().toString("dd/MM/yyyy");
    out <<"<html>\n"
          "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << "<title>Liste des Ouvriers <title>\n "
        << "</head>\n"
           "<img src=\"la_ferme.png height=400px width=400px; position=fixed; right=10px; top=10px; \" />"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<h1 style=\"text-align: center;\"><strong> Liste des Ouvriers "+TT+"</strong></h1>"
        "<table style=\"text-align: center; font-size: 20px;\" border=1>\n "
          "</br> </br>";
    // headers
    out << "<thead><tr bgcolor=#d6e5ff>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tab_ouvrier->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tab_ouvrier->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tab_ouvrier->isColumnHidden(column)) {
                QString data =ui->tab_ouvrier->model()->data(ui->tab_ouvrier->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
    if (dialog->exec() == QDialog::Accepted) {
        document->print(&printer);
    }

    delete document;
}

void Interface::on_pushButton_printer_con_clicked()
{
    QString strStream;
    QTextStream out(&strStream);

    const int rowCount = ui->tab_conges->model()->rowCount();
    const int columnCount = ui->tab_conges->model()->columnCount();
    QString TT = QDate::currentDate().toString("dd/MM/yyyy");
    out <<"<html>\n"
          "<head>\n"
           "<meta Content=\"Text/html; charset=Windows-1251\">\n"
        << "<title>Information sur les Conges<title>\n "
        << "</head>\n"
           "<img src=\"la_ferme.png\" height=400px width=400px; position=fixed; right=10px; top=10px; />"
        "<body bgcolor=#ffffff link=#5000A0>\n"
        "<h1 style=\"text-align: center;\"><strong> Information sur les Conges "+TT+"</strong></h1>"
        "<table style=\"text-align: center; font-size: 20px;\" border=1>\n "
          "</br> </br>";
    // headers
    out << "<thead><tr bgcolor=#d6e5ff>";
    for (int column = 0; column < columnCount; column++)
        if (!ui->tab_conges->isColumnHidden(column))
            out << QString("<th>%1</th>").arg(ui->tab_conges->model()->headerData(column, Qt::Horizontal).toString());
    out << "</tr></thead>\n";

    // data table
    for (int row = 0; row < rowCount; row++) {
        out << "<tr>";
        for (int column = 0; column < columnCount; column++) {
            if (!ui->tab_conges->isColumnHidden(column)) {
                QString data =ui->tab_conges->model()->data(ui->tab_conges->model()->index(row, column)).toString().simplified();
                out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
            }
        }
        out << "</tr>\n";
    }
    out <<  "</table>\n"
        "</body>\n"
        "</html>\n";

    QTextDocument *document = new QTextDocument();
    document->setHtml(strStream);

    QPrinter printer;

    QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
    if (dialog->exec() == QDialog::Accepted) {
        document->print(&printer);
    }

    delete document;
}
