#include "Triangle.h"

shapes::Triangle::Triangle() {
        radius = 0;
    }

    shapes::Triangle::Triangle(double length){
        radius=length;
    }

    double shapes::Triangle::getRadius()const {
        return radius;
    }

