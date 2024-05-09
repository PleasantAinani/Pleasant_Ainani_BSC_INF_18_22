#pragma once
namespace shapes{
class Triangle{
    private:
        double base, height;
    public:
        Triangle();
        Triangle(double a, double b);
        double getBase() const;
        double getHeight() const;
        ~Triangle();
};
};