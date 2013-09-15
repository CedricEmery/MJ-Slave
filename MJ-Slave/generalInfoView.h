#ifndef GENERALINFOVIEW_H
#define GENERALINFOVIEW_H

#include <QtWidgets>

class generalInfoView : public QWidget
{
public:
    generalInfoView(QWidget *parent = 0, bool isPNJ = 1);

    void init();
    void initFormulaire();
    void setIsPNJ(bool isPNJ);

private:
    QGridLayout* m_formulaire;

    QLabel* m_nomLabel;
    QLabel* m_xpLabel;
    QLabel* m_typeLabel;
    QLabel* m_sousTypeLabel;
    QLabel* m_regionLabel;
    QLabel* m_PVLabel;
    QLabel* m_sauvegardeLabel;
    QLabel* m_deplacementnomLabel;
    QLabel* m_forceLabel;
    QLabel* m_dexteriteLabel;
    QLabel* m_constitutionLabel;
    QLabel* m_intelligenceLabel;
    QLabel* m_sagesseLabel;
    QLabel* m_charismeLabel;
    QLabel* m_BBALabel;
    QLabel* m_BMOLabel;
    QLabel* m_DMDLabel;


    QLineEdit* m_nomEdit;
    QLineEdit* m_xpEdit;
    QLineEdit* m_typeEdit;
    QLineEdit* m_sousTypeEdit;
    QLineEdit* m_regionEdit;
    QLineEdit* m_PVEdit;
    QLineEdit* m_sauvegardeEdit;
    QLineEdit* m_deplacementnomEdit;
    QLineEdit* m_forceEdit;
    QLineEdit* m_dexteriteEdit;
    QLineEdit* m_constitutionEdit;
    QLineEdit* m_intelligenceEdit;
    QLineEdit* m_sagesseEdit;
    QLineEdit* m_charismeEdit;
    QLineEdit* m_BBAEdit;
    QLineEdit* m_BMOEdit;
    QLineEdit* m_DMDEdit;

    bool m_isPNJ;
};

#endif // GENERALINFOVIEW_H
