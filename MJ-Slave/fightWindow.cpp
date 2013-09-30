#include "fightWindow.h"

fightWindow::fightWindow()
{
}

void fightWindow::attack()
{

}

void fightWindow::next()
{

}
void fightWindow::addPersonage(personage newPerso)
{
    if (newPerso.getNom() != "Nouveau Personnage")
        m_personageListe.append(newPerso);
}
void fightWindow::modifyPersonage(int idPerso)
{
    if(idPerso < 0 && idPerso < m_personageListe.size())
        return;

}
void fightWindow::delPersonage(int idPerso)
{
    if(idPerso < 0 && idPerso < m_personageListe.size())
        return;

}
void fightWindow::duplicatePersonage(int idPerso)
{
    if(idPerso < 0 && idPerso < m_personageListe.size())
        return;

}
