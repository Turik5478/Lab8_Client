#include "Client.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Client w;
    w.setMaximumHeight(655);
    w.setMaximumWidth(884);
    w.setMinimumHeight(359);
    w.setMinimumWidth(615);
    w.resize(750, 507);
    w.show();
    Client w1;
    w1.setMaximumHeight(655);
    w1.setMaximumWidth(884);
    w1.setMinimumHeight(359);
    w1.setMinimumWidth(615);
    w1.resize(750, 507);
    w1.show();
    return a.exec();
}
