#ifndef FIGHTINFOVIEW_H
#define FIGHTINFOVIEW_H

#include <QtWidgets>

#include "attaque.h"
#include "personage.h"

class fightInfoView : public QWidget
{
public:
    fightInfoView(QWidget *parent = 0, personage* personage = NULL, bool isModif = 1);

    void init();
    void initFormulaire();
    void initAttaque(QList<attaque> tabAttaque);
    void setModif(bool isModif);


private:
    QGridLayout* m_formulaire;

    QLabel* m_CALabel;
    QLabel* m_CAContactLabel;
    QLabel* m_CADepourvuLabel;

    QLineEdit* m_CAEdit;
    QLineEdit* m_CAContactEdit;
    QLineEdit* m_CADepourvuEdit;

    QTableWidget* m_attaque;
    QTableWidget* m_attaqueDistance;

    QPushButton* m_addAttaque;

    personage* m_personage;

    bool m_isModif;
};

#endif // FIGHTINFOVIEW_H
