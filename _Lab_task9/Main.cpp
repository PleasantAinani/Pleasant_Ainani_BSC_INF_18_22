#include <iostream>
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rect;
    Triangle trgl;
    
    rect.setValues(4,5);
    trgl.setValues(4,5);

    cout<<rect.area()<<'/n';
    cout<<trgl.area()<<'/n';

    return 0;
}