#ifndef FIGHT_WINDOW_H
#define FIGHT_WINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QTabWidget>
#include <QPushButton>

class fight_Window : public QMainWindow
{
public:
    fight_Window();

private:
    QTabWidget* m_personageView;
    QTabWidget* m_informationsView;

    QSize m_bBaseSize;
};

#endif // FIGHT_WINDOW_H
