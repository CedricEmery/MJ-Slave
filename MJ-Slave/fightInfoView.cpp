#include "fightInfoView.h"

fightInfoView::fightInfoView(QWidget *parent, personage* personage, bool isModif)
    : QWidget(parent)
{
    m_formulaire = new QGridLayout(this);

    m_CALabel = new QLabel(this);
    m_CAContactLabel = new QLabel(this);
    m_CADepourvuLabel = new QLabel(this);

    m_CAEdit = new QLineEdit(this);
    m_CAContactEdit = new QLineEdit(this);
    m_CADepourvuEdit = new QLineEdit(this);

    m_attaque = new QTableWidget(this);
    m_attaqueDistance = new QTableWidget(this);

    m_addAttaque = new QPushButton(this);

    m_personage = personage;

    m_isModif = isModif;

    this->init();
}

void fightInfoView::init()
{
    m_CALabel->setText("CA :");
    m_CAContactLabel->setText("CA de contact :");
    m_CADepourvuLabel->setText("CA pris au dépourvu :");

    m_addAttaque->setText("Ajouter attaque");

    if(m_personage != NULL)
    {
        this->initAttaque(m_personage->getAttaque());
    }
    this->initFormulaire();
}

void fightInfoView::initFormulaire()
{
    m_formulaire->addWidget(m_CALabel, 0, 0, Qt::AlignCenter);
    m_formulaire->addWidget(m_CAEdit, 0, 1);
    m_formulaire->addWidget(m_CAContactLabel,0, 2, Qt::AlignCenter);
    m_formulaire->addWidget(m_CAContactEdit, 0, 3);
    m_formulaire->addWidget(m_CADepourvuLabel, 0, 4, Qt::AlignCenter);
    m_formulaire->addWidget(m_CADepourvuEdit, 0, 5);

    m_formulaire->addWidget(m_attaque, 1, 0, 1, 3);
    if(m_isModif)
    {
        m_formulaire->addWidget(m_addAttaque, 1, 3);
        m_formulaire->addWidget(m_attaqueDistance, 1, 4, 1, 3);
    }
    else
    {
        m_addAttaque->hide();
        m_formulaire->addWidget(m_attaqueDistance, 1, 3, 1, 3);
    }
}

void fightInfoView::setModif(bool isModif)
{
    m_isModif = isModif;
}

void fightInfoView::initAttaque(QList<attaque> tabAttaque)
{
    m_attaque->setColumnCount(2);
    m_attaque->setRowCount(2);

    m_attaque->setItem(0, 0, new QTableWidgetItem("Attaque"));
}
