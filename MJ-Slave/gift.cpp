#include "gift.h"

gift::gift(QString categorie, QString condition, QString avantage, QString normal, QString special)
{
    addCategorie(categorie);
    addCondition(condition);
    setAvantage(avantage);
    setNormal(normal);
    setSpecial(special);
}

void gift::addCategorie(QString categorie)
{
    m_categorie.append(categorie);
}

void gift::delCategorie(int idTab)
{
    if (idTab >= 0 && idTab < m_categorie.size())
        m_categorie.removeAt(idTab);
}

void gift::setCategorie(int idTab, QString categorie)
{
    if (idTab >= 0 && idTab < m_categorie.size())
        m_categorie[idTab] = categorie;
}

QString gift::getSpecificCategorie(int idTab)
{
    if (idTab >= 0 && idTab < m_categorie.size())
        return m_categorie[idTab];
}

QList<QString> gift::getCategorie()
{
    return m_categorie;
}

void gift::addCondition(QString condition)
{
    m_conditions.append(condition);
}

void gift::delCondition(int idTab)
{
    if (idTab >= 0 && idTab < m_conditions.size())
        m_conditions.removeAt(idTab);
}

void gift::setCondition(int idTab, QString condition)
{
    if (idTab >= 0 && idTab < m_conditions.size())
        m_conditions[idTab] = condition;
}

QString gift::getSpecificCondition(int idTab)
{
    if (idTab >= 0 && idTab < m_conditions.size())
        return m_conditions[idTab];
}

QList<QString> gift::getConditions()
{
        return m_conditions;
}

void gift::setNom(QString nom)
{
    m_nom = nom;
}
QString gift::getNom()
{
    return m_nom;
}

void gift::setAvantage(QString avantage)
{
    m_avantage = avantage;
}

QString gift::getAvantage()
{
    return m_avantage;
}

void gift::setNormal(QString normal)
{
    m_normal = normal;
}

QString gift::getNormal()
{
    return m_normal;
}

void gift::setSpecial(QString special)
{
    m_special = special;
}

QString gift::getSpecial()
{
    return m_special;
}
