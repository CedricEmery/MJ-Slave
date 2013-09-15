#include "specialSkill.h"

specialSkill::specialSkill(QString nom, QString description)
{
    setNom(nom);
    setDescription(description);
}

void specialSkill::setNom(QString nom)
{
    m_nom = nom;
}
QString specialSkill::getNom()
{
    return m_nom;
}

void specialSkill::setDescription(QString description)
{
    m_description = description;
}
QString specialSkill::getDescription()
{
    return m_description;
}
