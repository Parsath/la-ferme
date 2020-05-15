#include "modif.h"
#include "ui_modif.h"
#include<QDebug>

Modif::Modif(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modif)
{
    ui->setupUi(this);
}

Modif::~Modif()
{
    delete ui;
}
void Modif::setnomc(QString nc){
    nomc = nc;
    if (nomc=="Date"){
        ui->dvalue->show();
        ui->value->hide();
    }else {
        ui->value->show();
        ui->dvalue->hide();
    }
}

void Modif::setnomt(QString nt){
    type = nt ;
}

void Modif::on_buttonBox_accepted()
{                qDebug()<< id ;
                 qDebug() << nomc;
    if (nomc=="Date"){
            if(type=="achat"){
                qDebug() << "achat Date";

            atmp.modifier(id,ui->dvalue->text(),nomc);
            }else if (type=="vente") {
                qDebug() << "vente Date";

                vtmp.modifier(id,ui->dvalue->text(),nomc);

            }
        }else {
            if(type=="achat"){
                qDebug() << "achat NDate";

            atmp.modifier(id,ui->value->text(),nomc);
            }else if (type=="vente") {
                qDebug() << "vente NDate";

                vtmp.modifier(id,ui->value->text(),nomc);

            }            }
    accept();

}
