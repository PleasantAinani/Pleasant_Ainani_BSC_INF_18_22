#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rectangle1;

    double len;
    cout<<"Enter length:"<<endl;
    cin>>len;
    rectangle1.setLength(len);

    double wid;
    cout<<"Enter width:"<<endl;
    cin>>wid;
    rectangle1.setWidth(wid);

    cout<<"The length is :"<<rectangle1.getLength()<<endl;
    cout<<"The width is :"<<rectangle1.getWidth()<<endl;
    cout<<"The area is :"<<rectangle1.calculateArea()<<endl;

    double length;
    cout<<"Enter length:"<<endl;
    cin>>length;

    double width;
    cout<<"Enter width:"<<endl;
    cin>>len;

    Rectangle rectangle2(length,width);
    cout<<"the area is: "<<rectangle2.calculateArea()<<endl;


    return 0;
}