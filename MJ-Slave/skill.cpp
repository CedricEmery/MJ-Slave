#include "skill.h"

skill::skill(QString nom, int valeur)
{
    setNom(nom);
    setValeur(valeur);
}

void skill::setNom(QString nom)
{
    m_nom = nom;
}

QString skill::getNom()
{
    return m_nom;
}

void skill::setValeur(int valeur)
{
    m_valeur = valeur;
}

int skill::getValeur()
{
    return m_valeur;
}
