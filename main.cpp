#include <iostream>
#include "Box.h"
using namespace std;
//Main function for the program
int main()
{
    Box box1;//Declare Box1 of type Box
    Box box2;//Declare  box2 of type Box
    Box box3;//declare box3 of type Box
    double volume = 0.0;//store  the volume of a box here
    //box 1 specification
    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);
    //box 2 specification
    box2.setLength(12.0);
    box2.setBreadth(13.0);
    box2.setHeight(10.0);
    //volume of box 1
    volume =box1.getVolume();
    cout << "Volume of box1: " << volume << "\n\n";
    //volume of box 2
    volume =box2.getVolume();
    cout<< "Volume of box2: " << volume << "\n\n";
    //Add two object as follows:
    box3 = box1 + box2;
    //volume of box 3
    volume = box3.getVolume();
    cout <<  "Volume of box3: "<< volume << "\n\n";
    return 0;
}