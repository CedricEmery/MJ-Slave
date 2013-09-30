#include "creatPerso.h"

creatPerso::creatPerso(personage* newPerso, QDialog  *parent) :
    QDialog (parent)
{
    m_informationsView = new infoTabView(this);

    m_validateButton = new QPushButton(this);
    m_cancelButton = new QPushButton(this);

    m_personage = newPerso;

    this->init();
}

void creatPerso::init()
{
    // definition de la taille de base de la fenettre
    QSize baseSize;
    baseSize.setHeight(300);
    baseSize.setWidth(700);
    this->resize(baseSize);

    // definition de la taille minimale de la fenettre
    QSize minSize;
    minSize.setHeight(300);
    minSize.setWidth(400);
    this->setMinimumSize(minSize);

    // definition du texte des boutons
    m_validateButton->setText("Valider");
    m_cancelButton->setText("Annuler");

    //branchement des boutons
    QObject::connect(m_cancelButton, SIGNAL(clicked()), this, SLOT(close()));
    QObject::connect(m_validateButton, SIGNAL(clicked()), this, SLOT(accept()));
}

void creatPerso::resize(QSize newSize)
{
    QDialog::resize(newSize);

    int x = 10, y = 10;

    // deplacement et redimention des tab
    QSize informationsViewSize;
    informationsViewSize.setHeight(newSize.height() - 60);
    informationsViewSize.setWidth(newSize.width() - 20);

    m_informationsView->move(x, y);
    m_informationsView->resize(informationsViewSize);

    // deplacement et redimention des bouton
    QSize buttonSize;
    buttonSize.setHeight(30);
    buttonSize.setWidth(80);

    y = informationsViewSize.height() + 20;
    m_validateButton->move(x, y);
    m_validateButton->resize(buttonSize);

    x = newSize.width() - 90;
    m_cancelButton->move(x, y);
    m_cancelButton->resize(buttonSize);
}

void creatPerso::resizeEvent(QResizeEvent * event)
{
    QDialog::resizeEvent(event);

    QSize windowSize = this->size();
    this->resize(windowSize);
}
