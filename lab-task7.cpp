#include<iostream>
using namespace std;

int swapNumbers(int *a, int *b);

int main( )
{
int varA = 25;
int varB = 100;

cout<< "varA before swap: "<< varA<< endl;
cout<< "varB before swap: "<< varB<< endl;
		
	swapNumbers(&varA, &varB);
cout<<"varA after swap : "<<varA<<endl;
cout<<"varB after swap: "<<varB<<endl;

return 0;
}

int swapNumbers(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    
    return *a, *b;
}
