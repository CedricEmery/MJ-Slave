#ifndef SKILL_H
#define SKILL_H


#include <QString>

class skill
{
public:
    skill(QString nom, int valeur = 0);

    void setNom(QString nom);
    QString getNom();
    void setValeur(int valeur);
    int getValeur();

private:
    QString m_nom;
    int m_valeur;
};

#endif // SKILL_H
