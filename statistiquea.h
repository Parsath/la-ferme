#ifndef STATISTIQUEA_H
#define STATISTIQUEA_H
#include <QtCharts>
#include <QPieSeries>
#include <QPieSlice>
#include <QBarSeries>
#include <QSqlQuery>
#include <QString>
QT_CHARTS_USE_NAMESPACE
class Statistiquea
{
    QChart *chart;
    QChartView *chartView;
public:
    Statistiquea();
    QChartView * Preparechart(QString);
};

#endif // STAT_H
