
#include "Box.h"
Box::Box()
{
    length = 0.0;
    breadth = 0.0;
    height = 0.0;
}
Box::Box(const double newlength, const  double newBreadth,const double newHeight)
{
    length= newlength;
    breadth = newBreadth;
    height = newHeight;
}
Box::~Box()
{
    // empty destructor
}

double Box::getVolume()
{
    return length*height*breadth;
}
void Box::setLength(double len)
{
    length = len;
}
void Box::setBreadth(double bre)
{
    breadth = bre;
}
void Box::setHeight(double hei)
{
    height = hei;
}
//Overload+ operator to add two Box objects
Box Box::operator+(const Box& b)
{
    Box box;
    box.length = length + b.length;
    box.breadth = breadth + b.breadth;
    box.height = height + b.height;
    return box;
}
