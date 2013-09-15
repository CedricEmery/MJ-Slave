#ifndef SPELL_H
#define SPELL_H

#include <QList>
#include <QString>

class spell
{
public:
    spell(QString ecole, QString niveau, QString composante, QString portee, QString nom, QString cible, QString tempInvovation
          , QString duree, QString description, QString jetSauvegarde,bool resMagie);

    void addEcole(QString ecole);
    void delEcole(int idTab);
    void setEcole(int idTab, QString ecole);
    QString getSpecificEcole(int idTab);
    QList<QString> getEcole();

    void addNiveau(QString niveau);
    void delNiveau(int idTab);
    void setNiveau(int idTab, QString niveau);
    QString getSpecificNiveau(int idTab);
    QList<QString> getNiveau();

    void addComposante(QString composante);
    void delComposante(int idTab);
    void setComposante(int idTab, QString composante);
    QString getSpecificComposante(int idTab);
    QList<QString> getComposante();

    void addPortee(QString portee);
    void delPortee(int idTab);
    void setPortee(int idTab, QString portee);
    QString getSpecificPortee(int idTab);
    QList<QString> getPortee();

    void setNom(QString nom);
    QString getNom();

    void setCible(QString cible);
    QString getCible();

    void setTempInvovation(QString tempsInvoc);
    QString getTempInvovation();

    void setDuree(QString duree);
    QString getDuree();

    void setDescription(QString description);
    QString getDescription();

    void setJetSauvegarde(QString jetSauvegarde);
    QString getJetSauvegarde();

    void setResMagie(bool resMagie);
    bool getResMagie();

private:
    QList<QString> m_ecole;
    QList<QString> m_niveau;
    QList<QString> m_composante;
    QList<QString> m_portee;

    QString m_nom;
    QString m_cible;
    QString m_tempInvovation;
    QString m_duree;
    QString m_description;
    QString m_jetSauvegarde;

    bool m_resMagie;
};

#endif // SPELL_H
