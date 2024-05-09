#include <string>
#include <iostream>
#include "Person.h"
using namespace std;
int main()//QUESTION 2C
{
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    float totalWeight = Jane + John;
    cout<< "Total weight: " << totalWeight << endl;
    //QUESTION 2D
    if(Jane == John)
    {
        cout << "This is the same person"<<endl;
    }
    if (Jane != John)
    {
        cout << "This is NOT the same person" << endl;
    }
    //QUESTION 2E
    Jane.setAge(10);
    John.setAge(14);//set ages
    if(Jane < John)
    {
        cout << "Jane is younger than John"<<endl;// check if the condition is true
    }
    if (Jane > John)
    {
        cout << "John is older than Jane" << endl;//check if the condition is true
    }
    //QUESTION 3
    int johnAge = John;
    cout <<"John's age: " << johnAge << endl; // convert to int
    //QUESTION 4
    string janeFirstName = Jane;
    cout<<"Jane's FirstName: " << janeFirstName << endl; //convert to string
    float janeWeight = Jane;
    cout << "Jane's weight: " << janeWeight <<endl;//convert to string
    return 0;
}