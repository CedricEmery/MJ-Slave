#ifndef CREATPERSO_H
#define CREATPERSO_H

#include <QDialog >

#include "personage.h"
#include "infoTabView.h"

class creatPerso : public QDialog
{
    Q_OBJECT
public:
    explicit creatPerso(personage* newPerso, QDialog  *parent = 0);

    void init();
    void resize(QSize newSize);
    void resizeEvent(QResizeEvent * event);

private:
    infoTabView* m_informationsView;
    personage* m_personage;

    QPushButton* m_validateButton;
    QPushButton* m_cancelButton;
    
signals:
    
public slots:
    
};

#endif // CREATPERSO_H
