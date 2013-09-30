#include "personageTabView.h"

personageTabView::personageTabView(QWidget *parent)
    : QTabWidget(parent)
{
    m_pnjGrid = new QTableWidget();
    m_pjGrid = new QTableWidget();

    this->addTab(m_pnjGrid,"Personnages non-joueur");
    this->addTab(m_pjGrid,"Joueurs");

    chargementListePerso();
}

void personageTabView::chargementListePerso()
{
    m_pjGrid->clear();
    m_pnjGrid->clear();

    for(int i = 0; i < m_personageListe.size(); i++)
    {
        if(m_personageListe[i].getIsPJ() == PJ)
        {
            int row = m_pjGrid->rowCount();
            m_pjGrid->insertRow(row); //insérer une ligne vide
            m_pjGrid->setItem(row, 0, new QTableWidgetItem(m_personageListe[i].getNom()));
        }
        else
        {
            int row = m_pnjGrid->rowCount();
            m_pnjGrid->insertRow(row); //insérer une ligne vide
            m_pnjGrid->setItem(row, 0, new QTableWidgetItem(m_personageListe[i].getNom()));
        }
    }
}

void personageTabView::attack()
{

}

void personageTabView::next()
{

}
void personageTabView::addPersonage(personage newPerso)
{
    if (newPerso.getNom() != "Nouveau Personnage")
        m_personageListe.append(newPerso);
}
void personageTabView::modifyPersonage(int idPerso)
{
    if(idPerso < 0 && idPerso < m_personageListe.size())
        return;

}
void personageTabView::delPersonage(int idPerso)
{
    if(idPerso < 0 && idPerso < m_personageListe.size())
        return;

}
void personageTabView::duplicatePersonage(int idPerso)
{
    if(idPerso < 0 && idPerso < m_personageListe.size())
        return;

}
