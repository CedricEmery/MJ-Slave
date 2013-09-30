#ifndef FIGHTWINDOW_H
#define FIGHTWINDOW_H

#include "personage.h"

class fightWindow
{
public:
    fightWindow();

    void attack();
    void next();
    void addPersonage(personage newPerso);
    void modifyPersonage(int idPerso);
    void delPersonage(int idPerso);
    void duplicatePersonage(int idPerso);


private :

    QList<personage> m_personageListe;
};

#endif // FIGHTWINDOW_H
