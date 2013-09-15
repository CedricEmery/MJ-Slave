#include "spell.h"

spell::spell(QString ecole, QString niveau, QString composante, QString portee, QString nom, QString cible, QString tempInvovation
             , QString duree, QString description, QString jetSauvegarde,bool resMagie)
{
    addEcole(ecole);
    addNiveau(niveau);
    addComposante(composante);
    addPortee(portee);
    setNom(nom);
    setCible(cible);
    setTempInvovation(tempInvovation);
    setDuree(duree);
    setDescription(description);
    setJetSauvegarde(jetSauvegarde);
    setResMagie(resMagie);
}


void spell::addEcole(QString ecole)
{
    m_ecole.append(ecole);
}

void spell::delEcole(int idTab)
{
    if (idTab >= 0 && idTab < m_ecole.size())
        m_ecole.removeAt(idTab);
}

void spell::setEcole(int idTab, QString ecole)
{
    if (idTab >= 0 && idTab < m_ecole.size())
        m_ecole[idTab] = ecole;
}

QString spell::getSpecificEcole(int idTab)
{
    if (idTab >= 0 && idTab < m_ecole.size())
        return m_ecole[idTab];
}

QList<QString> spell::getEcole()
{
    return m_ecole;
}

void spell::addNiveau(QString niveau)
{
    m_niveau.append(niveau);
}

void spell::delNiveau(int idTab)
{
    if (idTab >= 0 && idTab < m_niveau.size())
        m_niveau.removeAt(idTab);
}

void spell::setNiveau(int idTab, QString niveau)
{
    if (idTab >= 0 && idTab < m_niveau.size())
        m_niveau[idTab] = niveau;
}

QString spell::getSpecificNiveau(int idTab)
{
    if (idTab >= 0 && idTab < m_niveau.size())
        return m_niveau[idTab];
}

QList<QString> spell::getNiveau()
{
        return m_niveau;
}

void spell::addComposante(QString composante)
{
    m_composante.append(composante);
}

void spell::delComposante(int idTab)
{
    if (idTab >= 0 && idTab < m_composante.size())
        m_composante.removeAt(idTab);
}

void spell::setComposante(int idTab, QString composante)
{
    if (idTab >= 0 && idTab < m_composante.size())
        m_composante[idTab] = composante;
}

QString spell::getSpecificComposante(int idTab)
{
    if (idTab >= 0 && idTab < m_composante.size())
        return m_composante[idTab];
}

QList<QString> spell::getComposante()
{
    return m_composante;
}

void spell::addPortee(QString portee)
{
    m_portee.append(portee);
}

void spell::delPortee(int idTab)
{
    if (idTab >= 0 && idTab < m_portee.size())
        m_portee.removeAt(idTab);
}

void spell::setPortee(int idTab, QString portee)
{
    if (idTab >= 0 && idTab < m_portee.size())
        m_portee[idTab] = portee;
}

QString spell::getSpecificPortee(int idTab)
{
    if (idTab >= 0 && idTab < m_portee.size())
        return m_portee[idTab];
}

QList<QString> spell::getPortee()
{
    return m_portee;
}

void spell::setNom(QString nom)
{
    m_nom = nom;
}

QString spell::getNom()
{
    return m_nom;
}

void spell::setCible(QString cible)
{
    m_cible = cible;
}

QString spell::getCible()
{
    return m_cible;
}

void spell::setTempInvovation(QString tempsInvoc)
{
    m_tempInvovation = tempsInvoc;
}

QString spell::getTempInvovation()
{
    return m_tempInvovation;
}

void spell::setDuree(QString duree)
{
    m_duree = duree;
}

QString spell::getDuree()
{
    return m_duree;
}

void spell::setDescription(QString description)
{
    m_description = description;
}

QString spell::getDescription()
{
    return m_description;
}

void spell::setJetSauvegarde(QString jetSauvegarde)
{
    m_jetSauvegarde = jetSauvegarde;
}

QString spell::getJetSauvegarde()
{
    return m_jetSauvegarde;
}

void spell::setResMagie(bool resMagie)
{
    m_resMagie = resMagie;
}

bool spell::getResMagie()
{
    return m_resMagie;
}
