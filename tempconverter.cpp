#include "tempconverter.h"

TempConverter::TempConverter(QObject *parent) : QObject(parent)
{

}

int TempConverter::celsiusToFahrenheit(int value)
{
    auto o = (value * 9.0) / 5.0 + 32;
    return o;
}

int TempConverter::fahrenheitToCelsius(int value)
{
    auto o = (value - 32) * 5.0 / 9.0;
    return o;
}
