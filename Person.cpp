 #include <string>
 #include "Person.h"//QUESTION 2B

 Person::Person()//default constructor
 {
   mWeight = 0;
   mFirstName ="NULL";
   mAge= 0;
 }
 Person::Person(float newWeight )// overloaded constructor
{
   mWeight = newWeight;

}

int Person::setAge(int newAge)// setter method for age
{
   mAge = newAge;
}
Person::~Person(){};//empty destructor
//implement the convert the type int
Person::operator int()
{
   return mAge;

}
 //convertion type string
   Person:: operator string()
    {
      return mFirstName;
    }
    //convert to float
   Person:: operator float()
   {
      return mWeight;
   }
    //overload the add operator 
float Person::operator + (const Person& otherPerson)
{
      return(mWeight + otherPerson.mWeight);//return 

}
   Person::Person(string newFirstName, float newWeight)
   {
      mWeight = newWeight;
      mFirstName= newFirstName;
   }
   //overload the equal to operator
   bool Person::operator ==(const Person& otherPerson)
   {
      return (mFirstName == otherPerson.mFirstName);

   }
    //overload the not equal to operator
    bool Person::operator != (const Person& otherPerson)
    {
      return(mFirstName != otherPerson.mFirstName);
    }
    //overload the < operator
    bool Person::operator <(const Person& otherPerson)
    {
      bool status = false;
      if (mAge <  otherPerson.mAge)
      {
         status = true;
      }
      return status;
    }
    //overload the > operator
    bool Person::operator >(const Person& otherPerson)
    {
      bool status = false;
      if (mAge >  otherPerson.mAge)
      {
         status = true;
      }
      return status;
      
    }