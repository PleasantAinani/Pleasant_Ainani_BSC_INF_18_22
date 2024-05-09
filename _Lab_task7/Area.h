#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
using namespace shapes;
    class Area {
    public:
        static Square calculateArea(const Square& square) {
            double area = square.getSideLength() * square.getSideLength();
            return Square(area);
        }

        static double calculateArea(const Triangle& triangle) {
            return 0.5 * triangle.getBase() * triangle.getHeight();
        }

        static double calculateArea(const Circle& circle) {
            return 0.5 * circle.getRadius() * circle.getRadius();
        }
    };