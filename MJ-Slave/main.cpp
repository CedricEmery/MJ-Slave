#include <QApplication>

#include "fight_window.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    fight_Window FenetreDeCombat;
    FenetreDeCombat.show();

    return app.exec();
}
