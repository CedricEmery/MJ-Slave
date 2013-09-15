#ifndef ATTAQUE_H
#define ATTAQUE_H

#include <QString>

#define ATTAQUE_CAC 1
#define ATTAQUE_DIST 2

class attaque
{
public:
    attaque(QString nom, int valeur = 0);

    void setNom(QString nom);
    QString getNom();
    void setValeur(int valeur);
    int getValeur();
    void setTypeAttaque(int typeAttaque);
    int getTypeAttaque();

private:
    QString m_nom;
    int m_valeur;
    int m_typeAttaque;
};

#endif // ATTAQUE_H
