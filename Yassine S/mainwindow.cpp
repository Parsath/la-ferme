#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include "achats.h"
#include "ventes.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap *mypix = new QPixmap("C:\\Users\\dell\\Desktop\\ttt\\back.jpg");
      ui->label->setPixmap(*mypix);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Achats a;
    a.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    Ventes v;
    v.exec();
}
