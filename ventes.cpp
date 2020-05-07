#include "ventes.h"
#include "ui_ventes.h"
#include <QDate>
#include <QMessageBox>

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
