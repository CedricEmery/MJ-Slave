#include "personage.h"

personage::personage(QList<gift> gift, QList<spell> spell, QList<skill> skill, QList<specialSkill> specialSkill, QList<attaque> attaque
                     , QList<QString> langue, QList<QString> particularite, QList<QString> sens, QList<QString> environement
                     , QList<QString> organisationSociale, QList<QString> tresor, QList<QString> region, QString nom, QString type
                     , QString sousType, QString sauvegarde, int xp, int initiative, int resistanceFisique, int vigueur, int volontee
                     , int CA, int CAContact, int CADepourvu, int PVMax, int PV, int deplacement, int force, int dexterite
                     , int constitution, int intelligence, int sagesse, int charisme, int BBA, int BMO, int DMD)
{
    for(int i = 0; i < gift.size(); i++)
    {
        addGift(gift[i]);
    }
    for(int i = 0; i < spell.size(); i++)
    {
        addSpell(spell[i]);
    }
    for(int i = 0; i < skill.size(); i++)
    {
        addSkill(skill[i]);
    }
    for(int i = 0; i < specialSkill.size(); i++)
    {
        addSpecialSkill(specialSkill[i]);
    }
    for(int i = 0; i < attaque.size(); i++)
    {
        addAttaque(attaque[i]);
    }
    for(int i = 0; i < langue.size(); i++)
    {
        addLangue(langue[i]);
    }
    for(int i = 0; i < particularite.size(); i++)
    {
        addParticularite(particularite[i]);
    }
    for(int i = 0; i < sens.size(); i++)
    {
        addSens(sens[i]);
    }
    for(int i = 0; i < environement.size(); i++)
    {
        addEnvironement(environement[i]);
    }
    for(int i = 0; i < organisationSociale.size(); i++)
    {
        addOrganisationSociale(organisationSociale[i]);
    }
    for(int i = 0; i < tresor.size(); i++)
    {
        addTresor(tresor[i]);
    }
    for(int i = 0; i < region.size(); i++)
    {
        addRegion(region[i]);
    }
    setNom(nom);
    setType(type);
    setSousType(sousType);
    setSauvegarde(sauvegarde);
    setXP(xp);
    setInitiative(initiative);
    setResistanceFisique(resistanceFisique);
    setVigueur(vigueur);
    setVolontee(volontee);
    setCA(CA);
    setCAContact(CAContact);
    setCADepourvu(CADepourvu);
    setPVMax(PVMax);
    setPV(PV);
    setDeplacement(deplacement);
    setForce(force);
    setDexterite(dexterite);
    setConstitution(constitution);
    setIntelligence(intelligence);
    setSagesse(sagesse);
    setCharisme(charisme);
    setBBA(BBA);
    setBMO(BMO);
    setDMD(DMD);
}


void personage::addGift(gift gift)
{
    m_gift.append(gift);
}

void personage::delGift(int idTab)
{
    if (idTab >= 0 && idTab < m_gift.size())
        m_gift.removeAt(idTab);
}

void personage::setGift(int idTab, gift gift)
{
    if (idTab >= 0 && idTab < m_gift.size())
        m_gift[idTab] = gift;
}

gift personage::getSpecificGift(int idTab)
{
    if (idTab >= 0 && idTab < m_gift.size())
        return m_gift[idTab];
}

QList<gift> personage::getGift()
{
    return m_gift;
}

void personage::addSpell(spell spell)
{
    m_spell.append(spell);
}

void personage::delSpell(int idTab)
{
    if (idTab >= 0 && idTab < m_spell.size())
        m_spell.removeAt(idTab);
}

void personage::setSpell(int idTab, spell spell)
{
    if (idTab >= 0 && idTab < m_spell.size())
        m_spell[idTab] = spell;
}

spell personage::getSpecificSpell(int idTab)
{
    if (idTab >= 0 && idTab < m_spell.size())
        return m_spell[idTab];
}

QList<spell> personage::getSpell()
{
    return m_spell;
}

void personage::addSkill(skill skill)
{
    m_skill.append(skill);
}

void personage::delSkill(int idTab)
{
    if (idTab >= 0 && idTab < m_skill.size())
        m_skill.removeAt(idTab);
}

void personage::setSkill(int idTab, skill skill)
{
    if (idTab >= 0 && idTab < m_skill.size())
        m_skill[idTab] = skill;
}

skill personage::getSpecificSkill(int idTab)
{
    if (idTab >= 0 && idTab < m_skill.size())
        return m_skill[idTab];
}

QList<skill> personage::getSkill()
{
    return m_skill;
}

void personage::addSpecialSkill(specialSkill specialSkill)
{
    m_specialSkill.append(specialSkill);
}

void personage::delSpecialSkill(int idTab)
{
    if (idTab >= 0 && idTab < m_specialSkill.size())
        m_specialSkill.removeAt(idTab);
}

void personage::setSpecialSkill(int idTab, specialSkill specialSkill)
{
    if (idTab >= 0 && idTab < m_specialSkill.size())
        m_specialSkill[idTab] = specialSkill;
}

specialSkill personage::getSpecificSpecialSkill(int idTab)
{
    if (idTab >= 0 && idTab < m_specialSkill.size())
        return m_specialSkill[idTab];
}

QList<specialSkill> personage::getSpecialSkill()
{
    return m_specialSkill;
}

void personage::addAttaque(attaque attaque)
{
    m_attaque.append(attaque);
}

void personage::delAttaque(int idTab)
{
    if (idTab >= 0 && idTab < m_attaque.size())
        m_attaque.removeAt(idTab);
}

void personage::setAttaque(int idTab, attaque attaque)
{
    if (idTab >= 0 && idTab < m_attaque.size())
        m_attaque[idTab] = attaque;
}

attaque personage::getSpecificAttaque(int idTab)
{
    if (idTab >= 0 && idTab < m_attaque.size())
        return m_attaque[idTab];
}

QList<attaque> personage::getAttaque()
{
    return m_attaque;
}

void personage::addLangue(QString langue)
{
    m_langue.append(langue);
}

void personage::delLangue(int idTab)
{
    if (idTab >= 0 && idTab < m_langue.size())
        m_langue.removeAt(idTab);
}

void personage::setLangue(int idTab, QString langue)
{
    if (idTab >= 0 && idTab < m_langue.size())
        m_langue[idTab] = langue;
}

QString personage::getSpecificLangue(int idTab)
{
    if (idTab >= 0 && idTab < m_langue.size())
        return m_langue[idTab];
}

QList<QString> personage::getLangue()
{
    return m_langue;
}

void personage::addParticularite(QString particularite)
{
    m_particularite.append(particularite);
}

void personage::delParticularite(int idTab)
{
    if (idTab >= 0 && idTab < m_particularite.size())
        m_particularite.removeAt(idTab);
}

void personage::setParticularite(int idTab, QString particularite)
{
    if (idTab >= 0 && idTab < m_particularite.size())
        m_particularite[idTab] = particularite;
}

QString personage::getSpecificParticularite(int idTab)
{
    if (idTab >= 0 && idTab < m_particularite.size())
        return m_particularite[idTab];
}

QList<QString> personage::getParticularite()
{
    return m_particularite;
}

void personage::addSens(QString sens)
{
    m_sens.append(sens);
}

void personage::delSens(int idTab)
{
    if (idTab >= 0 && idTab < m_sens.size())
        m_sens.removeAt(idTab);
}

void personage::setSens(int idTab, QString sens)
{
    if (idTab >= 0 && idTab < m_sens.size())
        m_sens[idTab] = sens;
}

QString personage::getSpecificSens(int idTab)
{
    if (idTab >= 0 && idTab < m_sens.size())
        return m_sens[idTab];
}

QList<QString> personage::getSens()
{
    return m_sens;
}

void personage::addEnvironement(QString environement)
{
    m_environement.append(environement);
}

void personage::delEnvironement(int idTab)
{
    if (idTab >= 0 && idTab < m_environement.size())
        m_environement.removeAt(idTab);
}

void personage::setEnvironement(int idTab, QString environement)
{
    if (idTab >= 0 && idTab < m_environement.size())
        m_environement[idTab] = environement;
}

QString personage::getSpecificEnvironement(int idTab)
{
    if (idTab >= 0 && idTab < m_environement.size())
        return m_environement[idTab];
}

QList<QString> personage::getEnvironement()
{
    return m_environement;
}

void personage::addOrganisationSociale(QString organisationSociale)
{
    m_organisationSociale.append(organisationSociale);
}

void personage::delOrganisationSociale(int idTab)
{
    if (idTab >= 0 && idTab < m_organisationSociale.size())
        m_organisationSociale.removeAt(idTab);
}

void personage::setOrganisationSociale(int idTab, QString organisationSociale)
{
    if (idTab >= 0 && idTab < m_organisationSociale.size())
        m_organisationSociale[idTab] = organisationSociale;
}

QString personage::getSpecificOrganisationSociale(int idTab)
{
    if (idTab >= 0 && idTab < m_organisationSociale.size())
        return m_organisationSociale[idTab];
}

QList<QString> personage::getOrganisationSociale()
{
    return m_organisationSociale;
}

void personage::addTresor(QString tresor)
{
    m_tresor.append(tresor);
}

void personage::delTresor(int idTab)
{
    if (idTab >= 0 && idTab < m_tresor.size())
        m_tresor.removeAt(idTab);
}

void personage::setTresor(int idTab, QString tresor)
{
    if (idTab >= 0 && idTab < m_tresor.size())
        m_tresor[idTab] = tresor;
}

QString personage::getSpecificTresor(int idTab)
{
    if (idTab >= 0 && idTab < m_tresor.size())
        return m_tresor[idTab];
}

QList<QString> personage::getTresor()
{
    return m_tresor;
}

void personage::addRegion(QString region)
{
    m_region.append(region);
}

void personage::delRegion(int idTab)
{
    if (idTab >= 0 && idTab < m_region.size())
        m_region.removeAt(idTab);
}

void personage::setRegion(int idTab, QString region)
{
    if (idTab >= 0 && idTab < m_region.size())
        m_region[idTab] = region;
}

QString personage::getSpecificRegion(int idTab)
{
    if (idTab >= 0 && idTab < m_region.size())
        return m_region[idTab];
}

QList<QString> personage::getRegion()
{
    return m_region;
}

void personage::setNom(QString nom)
{
    m_nom = nom;
}

QString personage::getNom()
{
    return m_nom;
}

void personage::setType(QString type)
{
    m_type = type;
}

QString personage::getType()
{
    return m_type;
}

void personage::setSousType(QString sousType)
{
    m_sousType = sousType;
}

QString personage::getSousType()
{
    return m_sousType;
}

void personage::setSauvegarde(QString sauvegarde)
{
    m_sauvegarde = sauvegarde;
}

QString personage::getSauvegarde()
{
    return m_sauvegarde;
}

void personage::setXP(int xp)
{
    m_xp = xp;
}

int personage::getXP()
{
    return m_xp;
}

void personage::setInitiative(int initiative)
{
    m_initiative = initiative;
}

int personage::getInitiative()
{
    return m_initiative;
}

void personage::setResistanceFisique(int resistanceFisique)
{
    m_resistanceFisique = resistanceFisique;
}

int personage::getResistanceFisique()
{
    return m_resistanceFisique;
}

void personage::setVigueur(int vigueur)
{
    m_vigueur = vigueur;
}

int personage::getVigueur()
{
    return m_vigueur;
}

void personage::setVolontee(int volontee)
{
    m_volontee = volontee;
}

int personage::getVolontee()
{
    return m_volontee;
}

void personage::setCA(int CA)
{
    m_CA = CA;
}

int personage::getCA()
{
    return m_CA;
}

void personage::setCAContact(int CAContact)
{
    m_CAContact = CAContact;
}

int personage::getCAContact()
{
    return m_CAContact;
}

void personage::setCADepourvu(int CADepourvu)
{
    m_CADepourvu = CADepourvu;
}

int personage::getCADepourvu()
{
    return m_CADepourvu;
}

void personage::setPVMax(int PVMax)
{
    m_PVMax = PVMax;
}

int personage::getPVMax()
{
    return m_PVMax;
}

void personage::setPV(int PV)
{
    m_PV = PV;
}

int personage::getPV()
{
    return m_PV;
}

void personage::setDeplacement(int deplacement)
{
    m_deplacement = deplacement;
}

int personage::getDeplacement()
{
    return m_deplacement;
}

void personage::setForce(int force)
{
    m_force = force;
}

int personage::getForce()
{
    return m_force;
}

void personage::setDexterite(int dexterite)
{
    m_dexterite = dexterite;
}

int personage::getDexterite()
{
    return m_dexterite;
}

void personage::setConstitution(int constitution)
{
    m_constitution = constitution;
}

int personage::getConstitution()
{
    return m_constitution;
}

void personage::setIntelligence(int intelligence)
{
    m_intelligence = intelligence;
}

int personage::getIntelligence()
{
    return m_intelligence;
}

void personage::setSagesse(int sagesse)
{
    m_sagesse = sagesse;
}

int personage::getSagesse()
{
    return m_sagesse;
}

void personage::setCharisme(int charisme)
{
    m_charisme = charisme;
}

int personage::getCharisme()
{
    return m_charisme;
}

void personage::setBBA(int BBA)
{
    m_BBA = BBA;
}

int personage::getBBA()
{
    return m_BBA;
}

void personage::setBMO(int BMO)
{
    m_BMO = BMO;
}

int personage::getBMO()
{
    return m_BMO;
}

void personage::setDMD(int DMD)
{
    m_DMD = DMD;
}

int personage::getDMD()
{
    return m_DMD;
}

int personage::blesser(int nbDegas)
{
    setPV(getPV()-nbDegas);
    return getPV();
}
