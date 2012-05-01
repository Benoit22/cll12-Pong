#include <QtGui/QApplication>
#include "pong.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    pong w;
    w.show();
    
    return a.exec();
}
