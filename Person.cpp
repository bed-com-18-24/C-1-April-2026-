#include "Person.h"
//Default contructor
Person::Person()
{
    mAge = 0;
    mWeight = 0.0f;
    mFirstName = "";
}
//Overloaded constructor
Person::Person(float newWeight)
{
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

Person::~Person()
{
}

// Overload + operator to add two Box objexts.
float Person::operator+(const Person& otherPerson)
{
   return this->mWeight + otherPerson.mWeight;
   
}
