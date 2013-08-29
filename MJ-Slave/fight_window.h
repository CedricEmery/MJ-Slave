#ifndef FIGHT_WINDOW_H
#define FIGHT_WINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QTabWidget>
#include <QPushButton>
#include <QTableWidget>

class fight_Window : public QMainWindow
{
public:
    fight_Window();
    ~fight_Window();

    void resize(QSize newSize);

private:
    QTabWidget* m_personageView;
    QTabWidget* m_informationsView;

    QPushButton* m_addButton;
    QPushButton* m_modifyButton;
    QPushButton* m_delButton;
    QPushButton* m_duplicateButton;
    QPushButton* m_attackButton;
    QPushButton* m_nextButton;

    QTableWidget* m_initiativeOrderGrid;


    QSize m_bBaseSize;
};

#endif // FIGHT_WINDOW_H
