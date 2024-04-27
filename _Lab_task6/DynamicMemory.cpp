#include <iostream>
using namespace std;

int main(){

int* num= new int;
string* some= new string;

cout<<"Enter an integer :"<<endl;
cin >>*num;
cout<<"Enter a string :"<<endl;
cin >> *some;

cout<<"The number is :"<<*num <<endl;
cout<<"The string is :"<<*some <<endl;

delete num;
delete some;

return 0;
}