#include<iostream>
#include "Person.h"
#include <string>
using namespace std;

Person::Person()
{
    float mWeight = 0.0f;
    string mFirstName = " ";
    int mAge = 0;
    }
    Person::Person(const string& name, float newWeight)
    {
        mWeight = newWeight;
        mFirstName = name;
        mAge = 0;
    }
    Person::Person(float newWeight){
        mWeight = newWeight;
        mFirstName = " ";
        mAge = 0;

    }

    Person::~Person(){ }

    float Person::operator+(const Person &otherPerson){
        return this->mWeight + otherPerson.mWeight;
}
    float Person::operator ==(const Person &otherPerson)
{
    return this->mWeight == otherPerson.mWeight;
}
    float Person::operator != (const Person &otherPerson)
{
    return this->mWeight != otherPerson.mWeight;
}
Person::operator int(){
return mAge;
}
string Person::operator = (const Person &)
{
    return this->mFirstName;
}