#include "jogo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    jogo w;
    w.show();

    return a.exec();
}
