#pragma once
#include<string>
using namespace std;

class Person{
    public :
    Person();
    explicit Person(float newWeight);
    Person(const string& name, float newWeight);
    Person(float newWeight);

    ~Person();

    float operator + (const Person& otherPerson);
    float operator == (const Person &otherPerson);
    float operator != (const Person &otherPerson);
operator int();

private:
    float mWeight;
    string mFirstName;
    int mAge;
};