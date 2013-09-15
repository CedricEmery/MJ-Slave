#ifndef FIGHT_WINDOW_VIEW_H
#define FIGHT_WINDOW_VIEW_H

#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QTableWidget>
#include <QResizeEvent>

#include "infoTabView.h"
#include "personageTabView.h"


class fightWindowView : public QMainWindow
{
public:
    fightWindowView();
    ~fightWindowView();

    void init();
    void resize(QSize newSize);

    void resizeEvent(QResizeEvent * event);

private:
    personageTabView* m_personageView;

    infoTabView* m_informationsView;

    QPushButton* m_addButton;
    QPushButton* m_modifyButton;
    QPushButton* m_delButton;
    QPushButton* m_duplicateButton;
    QPushButton* m_attackButton;
    QPushButton* m_nextButton;

    QTableWidget* m_initiativeOrderGrid;
};

#endif // FIGHT_WINDOW_VIEW_H
