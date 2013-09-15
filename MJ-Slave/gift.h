#ifndef GIFT_H
#define GIFT_H

#include <QList>
#include <QString>

class gift
{
public:
    gift(QString categorie, QString condition, QString avantage, QString normal, QString special);

    void addCategorie(QString categorie);
    void delCategorie(int idTab);
    void setCategorie(int idTab, QString categorie);
    QString getSpecificCategorie(int idTab);
    QList<QString> getCategorie();

    void addCondition(QString condition);
    void delCondition(int idTab);
    void setCondition(int idTab, QString condition);
    QString getSpecificCondition(int idTab);
    QList<QString> getConditions();

    void setNom(QString nom);
    QString getNom();

    void setAvantage(QString avantage);
    QString getAvantage();

    void setNormal(QString normal);
    QString getNormal();

    void setSpecial(QString special);
    QString getSpecial();

private:
    QList<QString> m_categorie;
    QList<QString> m_conditions;
    QString m_nom;
    QString m_avantage;
    QString m_normal;
    QString m_special;
};

#endif // GIFT_H
