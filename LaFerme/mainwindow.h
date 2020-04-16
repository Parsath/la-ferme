#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "materiels.h"
#include "ouvriers.h"
#include "g_animaux.h"
#include <QSound>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_connexion_clicked();
    void on_pushButton_materiels_clicked();

    void moveHome();

    void on_pushButton_ouvriers_clicked();

    void on_pushButton_animaux_clicked();

private:
    Ui::MainWindow *ui;
    QSound *son;

    Materiels mat;
    ouvriers ouv;
    G_animaux ani;
};
#endif // MAINWINDOW_H
