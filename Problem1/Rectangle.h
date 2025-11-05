#pragma once

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double length, double width);
    double getArea() const;
    double getPerimeter() const;
    double getLength() const;
    double getWidth() const;
};