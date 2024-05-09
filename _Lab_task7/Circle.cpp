#include "Circle.h"


    shapes::Circle::Circle(){
        radius = 1;
    }
    shapes::Circle::Circle(double newRadius){
        radius= newRadius;
    }

    double shapes::Circle::getRadius() const{
        return radius*radius*3.14159;
    }

    shapes::Circle::~Circle(){ }
  
