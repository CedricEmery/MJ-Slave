#ifndef INFO_TAB_VIEW_H
#define INFO_TAB_VIEW_H

#include <QTabWidget>
#include <QTableWidget>

#include "generalInfoView.h"
#include "spellInfoView.h"
#include "skillInfoView.h"
#include "fightInfoView.h"

class infoTabView : public QTabWidget
{
public:
    infoTabView(QWidget *parent = 0);

private:
    generalInfoView* m_principalGrid;
    fightInfoView* m_fightGrid;
    spellInfoView* m_spellGrid;
    skillInfoView* m_skillGrid;
    skillInfoView* m_spetialGrid;
};

#endif // INFO_TAB_VIEW_H
