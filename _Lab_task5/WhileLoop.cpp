#include<iostream>
#include<string>
#include <limits>
using namespace std;

int main (){
    int num;
    cout<<"Enter an integer value between 5 and 10"<<endl;
    cin>>num;
    while (cin.fail()||( num<5 ) || ( num>10 ))
    {
        cout<<"Sorry, you have entered an invalid number please try again"<<endl;

        //clears the fail state, without this the code enters an infinite loop
        cin.clear();
        //this is used to ignore any invalid output
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin>>num;
    }
    cout<<"your input value("<< num <<") has been accepted."<<endl;
    return 0;
}