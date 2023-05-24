#include "view.h"

#include <QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    try {
        QApplication a(argc, argv);
        View view;
        view.setWindowTitle("Pow number");
        view.setFixedSize(306, 212);
        view.show();

        return a.exec();
    }
    catch (const std::bad_alloc&)
    {
        std::cout << "Error in allocate memory";
    };
}
