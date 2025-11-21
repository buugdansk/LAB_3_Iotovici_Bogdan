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

    float greal() {
        return real;
    }

    float gimag() {
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

    cout << "suma: " << sum.greal() << " + " << sum.gimag() << "i" << endl;
    cout << "produs: " << product.greal() << " + " << product.gimag() << "i" << endl;

    return 0;
}