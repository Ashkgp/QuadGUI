#include "backlayout.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BackLayout w;
    w.show();

    return a.exec();
}
