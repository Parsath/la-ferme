#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    son=new QSound(":/sons/button.mp3");

   // ui->stackedWidget->addWidget(&mat);
    ui->stackedWidget->insertWidget(2,&mat);
    ui->stackedWidget->insertWidget(3,&ouv);
    ui->stackedWidget->insertWidget(4,&ani);
    connect(&mat, SIGNAL(HomeClicked()), this, SLOT(moveHome()));
    connect(&ouv, SIGNAL(HomeClicked()), this, SLOT(moveHome()));
    connect(&ani, SIGNAL(HomeClicked()), this, SLOT(moveHome()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_connexion_clicked()
{
    son->play();
    ui->stackedWidget->setCurrentIndex(1);

}

void MainWindow::on_pushButton_materiels_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::moveHome()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_ouvriers_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_animaux_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
