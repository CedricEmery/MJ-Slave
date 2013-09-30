#ifndef PERSONAGE_TAB_VIEW_H
#define PERSONAGE_TAB_VIEW_H

#include <QTabWidget>
#include <QTableWidget>

#include "personage.h"

class personageTabView : public QTabWidget
{
public:
    personageTabView(QWidget *parent = 0);

    void chargementListePerso();
    void attack();
    void next();
    void addPersonage(personage newPerso);
    void modifyPersonage(int idPerso);
    void delPersonage(int idPerso);
    void duplicatePersonage(int idPerso);

private:
    QTableWidget* m_pjGrid;
    QTableWidget* m_pnjGrid;

    QList<personage> m_personageListe;
};

#endif // PERSONAGE_TAB_VIEW_H
