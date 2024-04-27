#include <iostream>

using namespace std;

/*int main(){
    int num = 60;
    int nim = 20;

    cout << num / nim<<endl;
    cout << num * nim<<endl;
    cout << num + nim<<endl;
    cout << num - nim<<endl;
    
}*/

int factorial(int);

int main(){
int i,val;
cout << "Enter any positive integer."<<endl;
cin >>i; 
val=factorial(i);
cout <<val;
return 0;
}

int factorial(int n){
if (n > 1){
	   return n * factorial(n-1);
} else {
	   return 1;
}
}

