#include "generalInfoView.h"

generalInfoView::generalInfoView(QWidget *parent, bool isPNJ)
    : QWidget(parent)
{
    m_formulaire = new QGridLayout(this);

    m_nomLabel = new QLabel(this);
    m_xpLabel = new QLabel(this);
    m_typeLabel = new QLabel(this);
    m_sousTypeLabel = new QLabel(this);
    m_regionLabel = new QLabel(this);
    m_PVLabel = new QLabel(this);
    m_sauvegardeLabel = new QLabel(this);
    m_deplacementnomLabel = new QLabel(this);
    m_forceLabel = new QLabel(this);
    m_dexteriteLabel = new QLabel(this);
    m_constitutionLabel = new QLabel(this);
    m_intelligenceLabel = new QLabel(this);
    m_sagesseLabel = new QLabel(this);
    m_charismeLabel = new QLabel(this);
    m_BBALabel = new QLabel(this);
    m_BMOLabel = new QLabel(this);
    m_DMDLabel = new QLabel(this);


    m_nomEdit = new QLineEdit(this);
    m_xpEdit = new QLineEdit(this);
    m_typeEdit = new QLineEdit(this);
    m_sousTypeEdit = new QLineEdit(this);
    m_regionEdit = new QLineEdit(this);
    m_PVEdit = new QLineEdit(this);
    m_sauvegardeEdit = new QLineEdit(this);
    m_deplacementnomEdit = new QLineEdit(this);
    m_forceEdit = new QLineEdit(this);
    m_dexteriteEdit = new QLineEdit(this);
    m_constitutionEdit = new QLineEdit(this);
    m_intelligenceEdit = new QLineEdit(this);
    m_sagesseEdit = new QLineEdit(this);
    m_charismeEdit = new QLineEdit(this);
    m_BBAEdit = new QLineEdit(this);
    m_BMOEdit = new QLineEdit(this);
    m_DMDEdit = new QLineEdit(this);

    m_isPNJ = isPNJ;

    this->init();
}

void generalInfoView::initFormulaire()
{
    m_formulaire->addWidget(m_nomLabel, 0, 0, Qt::AlignCenter);
    m_formulaire->addWidget(m_nomEdit, 0, 1, 1, 3);
    m_formulaire->addWidget(m_xpLabel, 0, 4, Qt::AlignCenter);
    m_formulaire->addWidget(m_xpEdit, 0, 5);

    m_formulaire->addWidget(m_typeLabel, 1, 0, Qt::AlignCenter);
    m_formulaire->addWidget(m_typeEdit, 1, 1);
    m_formulaire->addWidget(m_sousTypeLabel, 1, 2, Qt::AlignCenter);
    m_formulaire->addWidget(m_sousTypeEdit, 1, 3);
    m_formulaire->addWidget(m_regionLabel, 1, 4, Qt::AlignCenter);
    m_formulaire->addWidget(m_regionEdit, 1, 5);

    m_formulaire->addWidget(m_PVLabel, 3, 0, Qt::AlignCenter);
    m_formulaire->addWidget(m_PVEdit, 3, 1);
    m_formulaire->addWidget(m_sauvegardeLabel,3, 2, Qt::AlignCenter);
    m_formulaire->addWidget(m_sauvegardeEdit, 3, 3);
    m_formulaire->addWidget(m_deplacementnomLabel, 3, 4, Qt::AlignCenter);
    m_formulaire->addWidget(m_deplacementnomEdit, 3, 5);

    m_formulaire->addWidget(m_forceLabel, 5, 0, Qt::AlignCenter);
    m_formulaire->addWidget(m_forceEdit, 5, 1);
    m_formulaire->addWidget(m_dexteriteLabel,5, 2, Qt::AlignCenter);
    m_formulaire->addWidget(m_dexteriteEdit, 5, 3);
    m_formulaire->addWidget(m_constitutionLabel, 5, 4, Qt::AlignCenter);
    m_formulaire->addWidget(m_constitutionEdit, 5, 5);

    m_formulaire->addWidget(m_intelligenceLabel, 6, 0, Qt::AlignCenter);
    m_formulaire->addWidget(m_intelligenceEdit, 6, 1);
    m_formulaire->addWidget(m_sagesseLabel,6, 2, Qt::AlignCenter);
    m_formulaire->addWidget(m_sagesseEdit, 6, 3);
    m_formulaire->addWidget(m_charismeLabel, 6, 4, Qt::AlignCenter);
    m_formulaire->addWidget(m_charismeEdit, 6, 5);

    m_formulaire->addWidget(m_BBALabel, 7, 0, Qt::AlignCenter);
    m_formulaire->addWidget(m_BBAEdit, 7, 1);
    m_formulaire->addWidget(m_BMOLabel, 7, 2, Qt::AlignCenter);
    m_formulaire->addWidget(m_BMOEdit, 7, 3);
    m_formulaire->addWidget(m_DMDLabel, 7, 4, Qt::AlignCenter);
    m_formulaire->addWidget(m_DMDEdit, 7, 5);
}

void generalInfoView::init()
{
    m_nomLabel->setText("Nom :");
    m_xpLabel->setText("XP :");
    m_typeLabel->setText("Type :");
    m_sousTypeLabel->setText("Sous-type :");
    m_regionLabel->setText("Région :");
    m_PVLabel->setText("PV :");
    m_sauvegardeLabel->setText("Jet de sauvegarde :");
    m_deplacementnomLabel->setText("Déplacement :");
    m_forceLabel->setText("Force :");
    m_dexteriteLabel->setText("Dexterité :");
    m_constitutionLabel->setText("Constitution :");
    m_intelligenceLabel->setText("Intelligence :");
    m_sagesseLabel->setText("Sagesse :");
    m_charismeLabel->setText("Charisme :");
    m_BBALabel->setText("BBA :");
    m_BMOLabel->setText("BMO :");
    if(m_isPNJ)
        m_DMDLabel->setText("DMD :");
    else
        m_DMDLabel->setText("BMD :");

    this->initFormulaire();
}


void generalInfoView::setIsPNJ(bool isPNJ)
{
    m_isPNJ = isPNJ;
}
