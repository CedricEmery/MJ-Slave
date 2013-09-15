#include "attaque.h"

attaque::attaque(QString nom, int valeur)
{
    setNom(nom);
    setValeur(valeur);
}

void attaque::setNom(QString nom)
{
    m_nom = nom;
}

QString attaque::getNom()
{
    return m_nom;
}

void attaque::setValeur(int valeur)
{
    m_valeur = valeur;
}

int attaque::getValeur()
{
    return m_valeur;
}

void attaque::setTypeAttaque(int typeAttaque)
{
    m_typeAttaque = typeAttaque;
}

int attaque::getTypeAttaque()
{
    return m_typeAttaque;
}
