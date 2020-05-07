#include "achats.h"
#include "ui_achats.h"
#include <QMessageBox>

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
