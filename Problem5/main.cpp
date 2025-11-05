#include <iostream>
#include "ComplexNumber.h"

using namespace std;

int main() {
    double r1, i1, r2, i2;

    cout << "1st real: ";
    cin >> r1;
    cout << "1st imaginary: ";
    cin >> i1;

    cout << "2nd real: ";
    cin >> r2;
    cout << "2nd imaginary: ";
    cin >> i2;

    ComplexNumber num1(r1, i1);
    ComplexNumber num2(r2, i2);

    ComplexNumber sum = num1.add(num2);
    ComplexNumber product = num1.multiply(num2);
    
    cout << "sum is: " << sum.getReal(); //for real part

    if (sum.getImag() >= 0) {
        cout << "+ " << sum.getImag() << "i" << endl;
    } else {
        cout << "- " << -sum.getImag() << "i" << endl;
    } //for imaginary part
    
    cout << "product is: " << product.getReal(); //for real part

    if (product.getImag() >= 0) {
        cout << "+ " << product.getImag() << "i" << endl;
    } else {
        cout << "- " << -product.getImag() << "i" << endl;
    } //for imaginary part

    return 0;
}