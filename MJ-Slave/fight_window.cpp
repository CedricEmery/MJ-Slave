#include "fight_window.h"

fight_Window::fight_Window()
{

    m_bBaseSize.setHeight(600);
    m_bBaseSize.setWidth(800);

    m_informationsView = new QTabWidget(this);
    m_personageView = new QTabWidget(this);

    m_addButton = new QPushButton(this);
    m_modifyButton = new QPushButton(this);
    m_delButton = new QPushButton(this);
    m_duplicateButton = new QPushButton(this);

    m_initiativeOrderGrid = new QTableWidget(this);

    m_attackButton = new QPushButton(this);
    m_nextButton = new QPushButton(this);

    this->resize(m_bBaseSize);
}

fight_Window::~fight_Window()
{
    /*
    if(m_personageView != NULL)
        delete m_personageView;

    if(m_informationsView != NULL)
        delete m_informationsView;
    */
}

void fight_Window::resize(QSize newSize)
{
    QMainWindow::resize(newSize);

    int x = 10, y = 10;

    // deplacement et redimention des tab
    QSize informationsViewSize;
    informationsViewSize.setHeight((newSize.height()/100)*65); //60% de la fenetre de combat
    informationsViewSize.setWidth((newSize.width()/100)*60); //75% de la fenetre de combat

    m_informationsView->move(x, y);
    m_informationsView->resize(informationsViewSize);

    x += informationsViewSize.width() + 45;
    QSize personageViewSize;
    personageViewSize.setHeight((newSize.height()/100)*65);
    personageViewSize.setWidth(newSize.width()- x - 10);

    m_personageView->move(x, y);
    m_personageView->resize(personageViewSize);

    // deplacement et redimention des boutons supperieur
    QSize buttonSize;
    buttonSize.setHeight(25);
    buttonSize.setWidth(25);

    x = informationsViewSize.width() + 20;
    y += 5;

    m_addButton->move(x, y);
    m_addButton->resize(buttonSize);

    y += 35;

    m_modifyButton->move(x, y);
    m_modifyButton->resize(buttonSize);

    y += 35;

    m_delButton->move(x, y);
    m_delButton->resize(buttonSize);

    y += 35;

    m_duplicateButton->move(x, y);
    m_duplicateButton->resize(buttonSize);

    // deplacement et redimention de la grille d'initiative

    x = 10;
    y = personageViewSize.height() + 20;
    QSize initiativeOrderGridSize;
    initiativeOrderGridSize.setHeight(newSize.height()- personageViewSize.height() - 30 - 35);
    initiativeOrderGridSize.setWidth(newSize.width() - 20);
    m_initiativeOrderGrid->move(x, y);
    m_initiativeOrderGrid->resize(initiativeOrderGridSize);

    // deplacement et redimention des boutons inferieur
    buttonSize.setWidth(80);
    x = (newSize.width() / 4) - (buttonSize.width() / 2);
    y = personageViewSize.height() + 20 + initiativeOrderGridSize.height() + 10;
    m_attackButton->move(x, y);
    m_attackButton->resize(buttonSize);

    x += newSize.width() / 2;
    m_nextButton->move(x, y);
    m_nextButton->resize(buttonSize);
}
