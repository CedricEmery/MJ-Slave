#ifndef PERSONAGE_TAB_VIEW_H
#define PERSONAGE_TAB_VIEW_H

#include <QTabWidget>
#include <QTableWidget>

class personageTabView : public QTabWidget
{
public:
    personageTabView(QWidget *parent = 0);

private:
    QTableWidget* m_pjGrid;
    QTableWidget* m_pnjGrid;
};

#endif // PERSONAGE_TAB_VIEW_H
