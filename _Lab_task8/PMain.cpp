#include <iostream>
#include "./Person.h"
using namespace std;

int main()
{
    Person Jane = Person("Jane", 60.0f);
    Person John = Person("John", 75.0f);

    if(Jane ==John){
        cout<<"This is the same person"<<endl;
    }
    if(Jane !=John){
    cout<<"This is NOT the same person"<<endl;
    }
    float totalWeight = Jane + John;

    cout<<"Total weight : "<<totalWeight<<endl;

int JohnAge =John;
cout<< "John's age :"<<JohnAge<<endl;

//string janeFirstName = Jane;
//cout << "Jane's firstName" << janeFirstName<<endl;

float janeWeight = Jane;
cout << "Jane's Weight" << janeWeight << endl;
return 0;
}