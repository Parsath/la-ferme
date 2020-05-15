#include "achats.h"
#include "ui_achats.h"
#include <QMessageBox>
#include "modif.h"
#include <QPrinter>
#include <QPrintDialog>
#include<QFileDialog>
Achats::Achats(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Achats)
{
    ui->setupUi(this);
    QPixmap *mypix = new QPixmap("C:\\Users\\dell\\Desktop\\ttt\\back.jpg");
      ui->label_14->setPixmap(*mypix);
      ui->label_37->setPixmap(*mypix);
      ui->label_40->setPixmap(*mypix);
      ui->label_41->setPixmap(*mypix);
      ui->label_42->setPixmap(*mypix);
      ui->label_43->setPixmap(*mypix);
      ui->achats->setModel(A.afficher());
      mainLayout=new QVBoxLayout ;
      mainLayout->addWidget(stat.Preparechart(ui->types->currentText()));
      ui->wid_2->setLayout(mainLayout);
      ui->testt->hide();

}

Achats::~Achats()
{
    delete ui;
}

void Achats::on_pb_ajouter_4_clicked()
{

    Achat V1(ui->id->text().toUInt(),ui->date->date(),ui->quantite->text().toUInt(),ui->prix->text().toFloat());
  if  (V1.Ajouter()){
     QMessageBox::information(this,"info","succes");
           ui->achats->setModel(A.afficher());
  }else {
  QMessageBox::warning(this,"info","fail");

  }
}

void Achats::on_pb_supprimer_4_clicked()
{
    QModelIndexList selection = ui->achats->selectionModel()->selectedRows();
        QString q ;
        QModelIndex index ;
       for (int i =0;i<selection.count();i++){
              index  = selection.at(i);
              q = QVariant(ui->achats->model()->index(index.row(),0).data()).toString();

       if ( A.Supprimer(q)){
        QMessageBox::information(this,"INFO","succes");
            ui->achats->setModel(A.afficher());
}else {
             QMessageBox::warning(this,"info","fail");
       }
}
}

void Achats::on_lineEdit_6_textChanged(const QString &arg1)
{
    ui->achats->setModel(A.Recherche(ui->comboBox_8->currentText(),arg1));
}

void Achats::on_comboBox_7_activated(const QString &arg1)
{
    if (arg1!=' ')
    ui->achats->setModel(A.tri(arg1));

}

void Achats::on_pushButton_4_clicked()
{
    Modif m ;
    int res ;
    QModelIndexList selection = ui->achats->selectionModel()->selectedIndexes();
        int q ;
        QModelIndex index ;
       for (int i =0;i<selection.count();i++){
              index  = selection.at(i);
              q = QVariant(ui->achats->model()->index(index.row(),0).data()).toInt();

                   m.setid(q);
                   m.setnomc(ui->achats->model()->headerData(index.column(),Qt::Horizontal).toString());
 m.setnomt("achat");
 res = m.exec() ;
  if (res == QDialog::Accepted){
      ui->achats->setModel(A.afficher());
      delete mainLayout;

      mainLayout=new QVBoxLayout ;
      mainLayout->addWidget(stat.Preparechart(ui->types->currentText()));
      ui->wid_2->setLayout(mainLayout);
}
       }
}

void Achats::on_types_currentTextChanged(const QString &arg1)
{
    delete mainLayout;

    mainLayout=new QVBoxLayout ;
    mainLayout->addWidget(stat.Preparechart(arg1));
    ui->wid_2->setLayout(mainLayout);
}

void Achats::on_pushButton_clicked()
{
    QString text ;
        QPrinter printer;
        printer.setPrinterName("desierd printer name");
        QPrintDialog dialog(&printer,this);
        if(dialog.exec()== QDialog::Rejected) return;
        int n = ui->achats->model()->rowCount();
       text += ui->achats->model()->headerData(0,Qt::Horizontal).toString()+ "   | ";
       text += ui->achats->model()->headerData(1,Qt::Horizontal).toString()+ "   | ";
       text += ui->achats->model()->headerData(2,Qt::Horizontal).toString()+ "   | ";
       text += ui->achats->model()->headerData(3,Qt::Horizontal).toString();
       text +="\n";
       for(int i =0; i<n;i++){
    for (int j=0;j<4;j++){

        text += ui->achats->model()->index(i,j).data().toString();
        if (j!=3)
        text += " | ";

    }
    text +="\n";

    }
       ui->testt->setText(text);
    ui->testt->print(&printer);
}
