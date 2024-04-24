#include <iostream>
using namespace std;

//function prototypes
void square();

void rectangle();

void triangle();

int main(){
    
int num;
cout<<"Please select the area of the shape to calculate"<<endl;
cout<<"1.Square\n 2.Rectangle \n3.Triangle\n 4.Quit program \nEnter selection :"<<endl;
cin>>num;

while(num > 4){
    cout<<"Your output was "<< num << ",please enter valid input :"<<endl;
    cin>>num;
    }

    switch (num)
    {
    case 1:
        square();
        break;
    case 2:
        rectangle();
        break;
    case 3:
        triangle();
        break;
    case 4:
        cout<<"Quiting program..."<<endl;
        break;
    }
    
return 0;
}

void square(){
    int length;
    cout<<"Please enter the length:"<<endl;
    cin>>length;
    cout<<"The area of the square is:"<<length*length<<endl;
}

void rectangle(){
    int length,height;
    cout<<"Please enter the length:"<<endl;
    cin>>length;
    cout<<"Please enter the height:"<<endl;
    cin>>height;
    cout<<"The area of the rectangle is:"<<length*height<<endl;
    
}

void triangle(){
  int height,base;
    cout<<"Please enter the base:"<<endl;
    cin>>height;
    cout<<"Please enter the height:"<<endl;
    cin>>base;
    int val= (base/2 )* height;
    cout<<"The area of the triangle is:"<<val<<endl; 
     
}