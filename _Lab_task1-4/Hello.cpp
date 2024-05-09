#include <iostream>
#include <vector>
#include <string>
using namespace std;

int g;

int main()
{
   /*vector<string> msg{"Hello", "C++" , "world", "from" ,"pleasant!"}; for (const string& word :msg){ 
    cout<< word <<" ";}cout<<endl;

    cout<< "size of char: "<<sizeof(char)<<endl;
    cout<< "size of int: "<<sizeof(int)<<endl;
    cout<< "size of short int: "<<sizeof(short int)<<endl;
    cout<< "size of long int: "<<sizeof(long int)<<endl;
    cout<< "size of float: "<<sizeof(float)<<endl;
    cout<< "size of double: "<<sizeof(double)<<endl;
    cout<< "size of wchar_t: "<<sizeof(wchar_t)<<endl;
    int a = 2; int b = 20; g = a + b; cout<<g;
    const string MACHE = "Racheal"; cout<< MACHE;*/
    
    int a,b;
    cout<< "enter a number :"<<endl;
    cin>> a;
    cout<< "enter another number :"<<endl;
    cin>> b;   
    cout<<"the sum is :"<< a + b ;
    return 0;
}