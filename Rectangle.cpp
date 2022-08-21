#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle (double w, double len)
{
    Width = w;
    Length = len;
}

void Rectangle::setWidth(double w)
{
    if (w > 0)
    {
        Width = w;
    }
    else
    {
        cout << "Enter a valid width !" << endl;
        cin >> w;
    }
}

void Rectangle::setLength(double len)
 {
    if (len > 0)
    {
        Length = len;
    }
    else
    {
        cout << "Enter a valid length !" << endl;
        cin >> len;
    }
}

double Rectangle::getWidth()
{
    return Width;
}

double Rectangle::getLength()
{
    return Length;
};

void Rectangle::area ()
{
    cout << "You've entered" << endl;
}

