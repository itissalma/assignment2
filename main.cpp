#include "hangman.h"

#include <QApplication>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    hangman w;
    w.show();
    return a.exec();
}
