#include "infoTabView.h"

infoTabView::infoTabView(QWidget *parent)
    : QTabWidget(parent)
{
    m_principalGrid = new generalInfoView();
    m_spellGrid = new spellInfoView();
    m_skillGrid = new skillInfoView();

    this->addTab(m_principalGrid,"Général");
    this->addTab(m_spellGrid,"Sors");
    this->addTab(m_skillGrid,"Compétences");

}
