#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) {
    length = length;
    width = width;
}
double Rectangle::getArea() const {
    return length*width;
}
double Rectangle::getPerimeter() const {
    return 2*(length+width);
}
double Rectangle::getLength() const {
    return length;
}
double Rectangle::getWidth() const {
    return width;
}