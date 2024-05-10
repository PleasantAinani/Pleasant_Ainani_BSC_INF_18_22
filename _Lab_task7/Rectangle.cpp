# include "Rectangle.h"
Rectangle::Rectangle(){
    length = 0;
    width = 0;
}
Rectangle::Rectangle(float len, float wid){
    length =len;
    width =wid;
}
void Rectangle::setLength(float len){
    length = len;
}
void Rectangle::setWidth(float wid){
    width = wid;
}
double Rectangle::getLength() const{
    return length;
}
double Rectangle::getWidth() const{
    return width;
}
double Rectangle::calculateArea() const{
    return length*width;
}
Rectangle::~Rectangle(){};