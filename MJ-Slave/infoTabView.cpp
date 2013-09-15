#include "infoTabView.h"

infoTabView::infoTabView(QWidget *parent)
    : QTabWidget(parent)
{
    m_principalGrid = new generalInfoView(this);
    m_fightGrid = new fightInfoView(this, NULL, false);
    m_spellGrid = new spellInfoView(this);
    m_skillGrid = new skillInfoView(this);
    m_spetialGrid = new skillInfoView(this);

    this->addTab(m_principalGrid,"Général");
    this->addTab(m_fightGrid,"Combat");
    this->addTab(m_spellGrid,"Sors");
    this->addTab(m_skillGrid,"Compétences");
    this->addTab(m_spetialGrid,"Spétial");
}
