#pragma once
#include <iostream>
using namespace std;
class Box
{
public:
Box();
Box(const double newlength, const  double newBreadth,const double newHeight);
~Box();
double getVolume();
void  setLength(double len);
void setBreadth(double bre);
void setHeight(double hei);
//Overload+ operator to add two Box objects
Box operator+(const Box& b);

private:
double length; //Length of a box
double breadth; //Breadth of a box
double height; // Height of a box
};