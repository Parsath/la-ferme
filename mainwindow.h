#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <nourriture.h>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:

    void on_butAjouter_clicked();

    void on_butSupp_clicked();

    void on_butModifier_clicked();

    void on_Nourriture_Animal_tabBarClicked(int index);

    void on_butOK_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_lineEditRecherche_textChanged(const QString &arg1);

    void on_commandLinkButtonQt_clicked();

    void on_commandLinkButtonID_clicked();

private:
    Ui::MainWindow *ui;
    nourriture tmpnourriture;
};
#endif // MAINWINDOW_H
