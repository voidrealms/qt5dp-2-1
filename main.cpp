#include <QCoreApplication>

/*
 SOLID - https://en.wikipedia.org/wiki/SOLID
 Single Responsibility Principle
 Open/Closed Principle
 Liskov Substitution Principle
 Interface Segregation Principle
 Dependency Inversion Principle

 What
 Single Responsible princible

 Define
 A class should only have a single responsibility, that is, only changes to one part of the software's specification should be able to affect the specification of the class.

 Why
 Makes creating, and maintaining the class easier

 Example
 In this case a good example is a temp converter

 */

#include <QDebug>
#include "tempconverter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TempConverter t;

    int value = 32;
    qInfo() << "c to f" << t.celsiusToFahrenheit(value);
    qInfo() << "f to c" << t.fahrenheitToCelsius(value);

    return a.exec();
}
