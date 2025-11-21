#include <iostream>

using namespace std;

class ComplexNumber {
    float real;
    float imag;

public:
    ComplexNumber(float r, float i) {
        real = r;
        imag = i;
    }

    float getReal() {
        return real;
    }

    float getImag() {
        return imag;
    }

    ComplexNumber add(ComplexNumber other) {
        return ComplexNumber(real + other.real, imag + other.imag);
    }

    ComplexNumber multiply(ComplexNumber other) {
        float r = (real * other.real) - (imag * other.imag);
        float i = (real * other.imag) + (imag * other.real);
        return ComplexNumber(r, i);
    }
};

int main() {
    float r1, i1, r2, i2;
    cin >> r1 >> i1 >> r2 >> i2;

    ComplexNumber c1(r1, i1);
    ComplexNumber c2(r2, i2);

    ComplexNumber sum = c1.add(c2);
    ComplexNumber product = c1.multiply(c2);

    cout << "suma: " << sum.getReal() << " + " << sum.getImag() << "i" << endl;
    cout << "produs: " << product.getReal() << " + " << product.getImag() << "i" << endl;

    return 0;
}