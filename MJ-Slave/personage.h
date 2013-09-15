#ifndef PERSONAGE_H
#define PERSONAGE_H

#include <QString>
#include <QList>

#include "gift.h"
#include "spell.h"
#include "specialSkill.h"
#include "skill.h"
#include "attaque.h"

class personage
{
public:
    personage(QList<gift> gift, QList<spell> spell, QList<skill> skill, QList<specialSkill> specialSkill, QList<attaque> attaque
              , QList<QString> langue, QList<QString> particularite, QList<QString> sens, QList<QString> environement
              , QList<QString> organisationSociale, QList<QString> tresor, QList<QString> region, QString nom, QString type
              , QString sousType, QString sauvegarde, int xp, int initiative, int resistanceFisique, int vigueur, int volontee
              , int CA, int CAContact, int CADepourvu, int PVMax, int PV, int deplacement, int force, int dexterite
              , int constitution, int intelligence, int sagesse, int charisme, int BBA, int BMO, int DMD);

    void addGift(gift gift);
    void delGift(int idTab);
    void setGift(int idTab, gift gift);
    gift getSpecificGift(int idTab);
    QList<gift> getGift();

    void addSpell(spell spell);
    void delSpell(int idTab);
    void setSpell(int idTab, spell spell);
    spell getSpecificSpell(int idTab);
    QList<spell> getSpell();

    void addSkill(skill skill);
    void delSkill(int idTab);
    void setSkill(int idTab, skill skill);
    skill getSpecificSkill(int idTab);
    QList<skill> getSkill();

    void addSpecialSkill(specialSkill specialSkill);
    void delSpecialSkill(int idTab);
    void setSpecialSkill(int idTab, specialSkill specialSkill);
    specialSkill getSpecificSpecialSkill(int idTab);
    QList<specialSkill> getSpecialSkill();

    void addAttaque(attaque attaque);
    void delAttaque(int idTab);
    void setAttaque(int idTab, attaque attaque);
    attaque getSpecificAttaque(int idTab);
    QList<attaque> getAttaque();

    void addLangue(QString langue);
    void delLangue(int idTab);
    void setLangue(int idTab, QString langue);
    QString getSpecificLangue(int idTab);
    QList<QString> getLangue();

    void addParticularite(QString particularite);
    void delParticularite(int idTab);
    void setParticularite(int idTab, QString particularite);
    QString getSpecificParticularite(int idTab);
    QList<QString> getParticularite();

    void addSens(QString sens);
    void delSens(int idTab);
    void setSens(int idTab, QString sens);
    QString getSpecificSens(int idTab);
    QList<QString> getSens();

    void addEnvironement(QString environement);
    void delEnvironement(int idTab);
    void setEnvironement(int idTab, QString environement);
    QString getSpecificEnvironement(int idTab);
    QList<QString> getEnvironement();

    void addOrganisationSociale(QString organisationSociale);
    void delOrganisationSociale(int idTab);
    void setOrganisationSociale(int idTab, QString organisationSociale);
    QString getSpecificOrganisationSociale(int idTab);
    QList<QString> getOrganisationSociale();

    void addTresor(QString tresor);
    void delTresor(int idTab);
    void setTresor(int idTab, QString tresor);
    QString getSpecificTresor(int idTab);
    QList<QString> getTresor();

    void addRegion(QString region);
    void delRegion(int idTab);
    void setRegion(int idTab, QString region);
    QString getSpecificRegion(int idTab);
    QList<QString> getRegion();

    void setNom(QString nom);
    QString getNom();

    void setType(QString type);
    QString getType();

    void setSousType(QString sousType);
    QString getSousType();

    void setSauvegarde(QString sauvegarde);
    QString getSauvegarde();

    void setXP(int xp);
    int getXP();

    void setInitiative(int initiative);
    int getInitiative();

    void setResistanceFisique(int resistanceFisique);
    int getResistanceFisique();

    void setVigueur(int vigueur);
    int getVigueur();

    void setVolontee(int volontee);
    int getVolontee();

    void setCA(int CA);
    int getCA();

    void setCAContact(int CAContact);
    int getCAContact();

    void setCADepourvu(int CADepourvu);
    int getCADepourvu();

    void setPVMax(int PVMax);
    int getPVMax();

    void setPV(int PV);
    int getPV();

    void setDeplacement(int deplacement);
    int getDeplacement();

    void setForce(int force);
    int getForce();

    void setDexterite(int dexterite);
    int getDexterite();

    void setConstitution(int constitution);
    int getConstitution();

    void setIntelligence(int intelligence);
    int getIntelligence();

    void setSagesse(int sagesse);
    int getSagesse();

    void setCharisme(int charisme);
    int getCharisme();

    void setBBA(int BBA);
    int getBBA();

    void setBMO(int BMO);
    int getBMO();

    void setDMD(int DMD);
    int getDMD();

    int blesser(int nbDegas);

private:
    QList<gift> m_gift;

    QList<spell> m_spell;

    QList<skill> m_skill;

    QList<specialSkill> m_specialSkill;

    QList<attaque> m_attaque;

    QList<QString> m_langue;
    QList<QString> m_particularite;
    QList<QString> m_sens;
    QList<QString> m_environement;
    QList<QString> m_organisationSociale;
    QList<QString> m_tresor;
    QList<QString> m_region;

    QString m_nom;
    QString m_type;
    QString m_sousType;
    QString m_sauvegarde;

    int m_xp;
    int m_initiative;
    int m_resistanceFisique;
    int m_vigueur;
    int m_volontee;
    int m_CA;
    int m_CAContact;
    int m_CADepourvu;
    int m_PVMax;
    int m_PV;
    int m_deplacement;
    int m_force;
    int m_dexterite;
    int m_constitution;
    int m_intelligence;
    int m_sagesse;
    int m_charisme;
    int m_BBA;
    int m_BMO;
    int m_DMD;
};

#endif // PERSONAGE_H
