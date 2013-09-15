#ifndef SPECIALSKILL_H
#define SPECIALSKILL_H

#include <QList>
#include <QString>

class specialSkill
{
public:
    specialSkill(QString nom, QString description);

    void setNom(QString nom);
    QString getNom();

    void setDescription(QString description);
    QString getDescription();

private:
    QString m_nom;
    QString m_description;
};

#endif // SPECIALSKILL_H
