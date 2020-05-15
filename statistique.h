#ifndef STATISTIQUE_H
#define STATISTIQUE_H
#include <QtCharts>
#include <QPieSeries>
#include <QPieSlice>
#include <QBarSeries>
#include <QSqlQuery>
#include <QString>
QT_CHARTS_USE_NAMESPACE
class Statistique
{
    QChart *chart;
    QChartView *chartView;
public:
    Statistique();
    QChartView * Preparechart(QString);
};

#endif // STAT_H
