#include "personageTabView.h"

personageTabView::personageTabView(QWidget *parent)
    : QTabWidget(parent)
{
    m_pnjGrid = new QTableWidget();
    m_pjGrid = new QTableWidget();

    this->addTab(m_pnjGrid,"Personnages non-joueur");
    this->addTab(m_pjGrid,"Joueurs");

}
