#include "Square.h"

shapes::Square::Square() {
        sideLength = 0;
    }

    shapes::Square::Square(double length){
        sideLength = length;
    }

    double shapes::Square::getSideLength()const {
        return sideLength;
    }

    shapes::Square::~Square(){ }

