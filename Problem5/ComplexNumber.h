#pragma once

class ComplexNumber {
private:
    double real;
    double imag;
public:
    ComplexNumber(double r, double i);
    double getReal() const;
    double getImag() const;
    ComplexNumber add(ComplexNumber other);
    ComplexNumber multiply(ComplexNumber other);
};