#include<iostream>
using namespace std;

int main (){
    int num;
    cout<<"Enter an integer value between 5 and 10"<<endl;
    cin>>num;
    while (( num<5 ) || ( num>10 ))
    {
        cout<<"Sorry, you have entered an invalid number please try again"<<endl;
        cin>>num;
    }
    cout<<"your input value("<< num <<") has been accepted."<<endl;
    return 0;
}