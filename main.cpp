#include "kuizu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Kuizu w;
    w.show();

    return a.exec();
}
