#include <QApplication>

#include "fightWindowView.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    fightWindowView FenetreDeCombat;
    FenetreDeCombat.show();

    return app.exec();
}
