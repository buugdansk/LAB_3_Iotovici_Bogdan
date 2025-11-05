#include "ComplexNumber.h"

ComplexNumber::ComplexNumber(double r, double i) {
    real = r;
    imag = i;
}
double ComplexNumber::getReal() const {
    return real;
}
double ComplexNumber::getImag() const {
    return imag;
}
ComplexNumber ComplexNumber::add(ComplexNumber other) {
    double newReal = real + other.getReal();
    double newImag = imag + other.getImag();
    return ComplexNumber(newReal, newImag);
}
ComplexNumber ComplexNumber::multiply(ComplexNumber other) {
    double newReal = (real * other.getReal()) - (imag * other.getImag());
    double newImag = (real * other.getImag()) + (imag * other.getReal());
    return ComplexNumber(newReal, newImag);
}