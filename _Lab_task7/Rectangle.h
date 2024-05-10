#pragma once

class Rectangle{
private:
        float length;
        float width;

public:
    Rectangle();
    Rectangle(float len,float wid);

    void setLength(float len);
    void setWidth(float wid);

    double getLength() const;
    double getWidth() const;

    double calculateArea() const;
~Rectangle();
};