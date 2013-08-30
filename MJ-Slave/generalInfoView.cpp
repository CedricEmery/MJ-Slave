#include "generalInfoView.h"

generalInfoView::generalInfoView(QWidget *parent)
    : QWidget(parent)
{
    //m_avatarImg = new QPixmap();
    //QLabel label;
    //label.setText("test");
    //this->setL;
    //label.setPixmap(m_avatarImg);

    QVBoxLayout *layout = new QVBoxLayout();
    QLabel *image = new QLabel(this);
    image->setPixmap(QPixmap("icone.jpg"));
    layout->addWidget(image);
    this->setLayout(layout);
}
