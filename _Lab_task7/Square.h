#pragma once

namespace shapes{
class Square{
    private:
        double sideLength;
    public:
        Square();
        Square(double length);
        double getSideLength() const ;
        ~Square();
};
};
