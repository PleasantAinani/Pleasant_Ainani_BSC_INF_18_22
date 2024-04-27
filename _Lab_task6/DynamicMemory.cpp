#include <iostream>
using namespace std;

int main(){

/*dynamically allocation of memory to variables*/

int* num= new int;
string* some= new string;

/*getting user input*/
cout<<"Enter an integer :"<<endl;
cin >>*num;
cout<<"Enter a string :"<<endl;
cin >> *some;

/*outputs the input*/
cout<<"The number is :"<<*num <<endl;
cout<<"The string is :"<<*some <<endl;

/*deallocates memory*/
delete num;
delete some;

return 0;
}