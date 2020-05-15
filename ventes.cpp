#include "ventes.h"
#include "ui_ventes.h"
#include <QDate>
#include <QMessageBox>
#include "modif.h"

#include <QPrinter>
#include <QPrintDialog>
#include<QFileDialog>


Ventes::Ventes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ventes)
{
    ui->setupUi(this);
    QPixmap *mypix = new QPixmap("C:\\Users\\dell\\Desktop\\ttt\\back.jpg");
      ui->label->setPixmap(*mypix);
      ui->label_5->setPixmap(*mypix);
      ui->label_16->setPixmap(*mypix);
      ui->label_17->setPixmap(*mypix);
      ui->label_18->setPixmap(*mypix);
   ui->ventes->setModel(V.afficher());
   mainLayout=new QVBoxLayout ;
   mainLayout->addWidget(stat.Preparechart(ui->types->currentText()));
   ui->wid_2->setLayout(mainLayout);
ui->testt->hide();
}

Ventes::~Ventes()
{
    delete ui;
}

void Ventes::on_pb_ajouter_clicked()
{
    Vente V1(ui->id->text().toUInt(),ui->date->date(),ui->quantite->text().toUInt(),ui->prix->text().toFloat());
  if  (V1.Ajouter()){
     QMessageBox::information(this,"info","succes");
     ui->ventes->setModel(V.afficher());

  }else {
  QMessageBox::warning(this,"info","fail");
}
}

void Ventes::on_pb_supprimer_clicked()
{
    QModelIndexList selection = ui->ventes->selectionModel()->selectedRows();
        QString q ;
        QModelIndex index ;
       for (int i =0;i<selection.count();i++){
              index  = selection.at(i);
              q = QVariant(ui->ventes->model()->index(index.row(),0).data()).toString();

       if ( V.Supprimer(q)){
        QMessageBox::information(this,"INFO","succes");
            ui->ventes->setModel(V.afficher());
}else {
             QMessageBox::warning(this,"info","fail");
       }
}
}



void Ventes::on_lineEdit_3_textChanged(const QString &arg1)
{
    ui->ventes->setModel(V.Recherche(ui->comboBox_4->currentText(),arg1));

}

void Ventes::on_comboBox_activated(const QString &arg1)
{
    if (arg1!=' '){
        ui->ventes->setModel(V.tri(arg1));

    }
}

void Ventes::on_pushButton_clicked()
{
    Modif m ;
    int res ;
    QModelIndexList selection = ui->ventes->selectionModel()->selectedIndexes();
        int q ;
        QModelIndex index ;
       for (int i =0;i<selection.count();i++){
              index  = selection.at(i);
              q = QVariant(ui->ventes->model()->index(index.row(),0).data()).toInt();
                   m.setid(q);
                   m.setnomc(ui->ventes->model()->headerData(index.column(),Qt::Horizontal).toString());
 m.setnomt("vente");
 res = m.exec() ;
  if (res == QDialog::Accepted){
      ui->ventes->setModel(V.afficher());
      delete mainLayout;

      mainLayout=new QVBoxLayout ;
      mainLayout->addWidget(stat.Preparechart(ui->types->currentText()));
      ui->wid_2->setLayout(mainLayout);
}
       }
}

void Ventes::on_Imprimer_clicked()
{
    QString text ;
    QPrinter printer;
    printer.setPrinterName("desierd printer name");
    QPrintDialog dialog(&printer,this);
    if(dialog.exec()== QDialog::Rejected) return;
    int n = ui->ventes->model()->rowCount();
   text += ui->ventes->model()->headerData(0,Qt::Horizontal).toString()+ "   | ";
   text += ui->ventes->model()->headerData(1,Qt::Horizontal).toString()+ "   | ";
   text += ui->ventes->model()->headerData(2,Qt::Horizontal).toString()+ "   | ";
   text += ui->ventes->model()->headerData(3,Qt::Horizontal).toString();
   text +="\n";
   for(int i =0; i<n;i++){
for (int j=0;j<4;j++){

    text += ui->ventes->model()->index(i,j).data().toString();
    if (j!=3)
    text += " | ";

}
text +="\n";

}
   ui->testt->setText(text);
ui->testt->print(&printer);
}


void Ventes::on_types_currentTextChanged(const QString &arg1)
{
    delete mainLayout;

    mainLayout=new QVBoxLayout ;
    mainLayout->addWidget(stat.Preparechart(arg1));
    ui->wid_2->setLayout(mainLayout);
}
