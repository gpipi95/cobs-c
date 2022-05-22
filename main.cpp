#include <QCoreApplication>
#include <iostream>

#include "test.h"

using namespace std;

int main(int argc, char* argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Hello" << endl;

    test_encode_1();

    cout << "Finished" << endl;
    return a.exec();
}
