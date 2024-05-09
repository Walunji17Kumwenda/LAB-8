//QUESTION2A
#pragma once
#include <string>
using namespace std;
class Person
{
    public:
    Person();//default constructor
    Person(float newWeight );// overloaded constructor for initialising weights
    Person(string newFirstName, float newWeight); //overloaded constructor for initializing name and weight
    int setAge(int newAge);// setter method for age 
    ~Person();//destructor
    operator int();// declare convertion type int
    //convertion type string
    operator string();
    //convert to float
    operator float();
    //overload the add operator 
    float operator + (const Person& otherPerson);
    //overload the equal to operator
    bool operator ==(const Person& otherPerson);
    //overload the not equal to operator
    bool operator != (const Person& otherPerson);
    //overload the < operator
    bool operator <(const Person& otherPerson);
    //overload the > operator
    bool operator >(const Person& otherPerson);

    private://declaring private member variables 
    float mWeight;
    string mFirstName;
    int mAge;
};