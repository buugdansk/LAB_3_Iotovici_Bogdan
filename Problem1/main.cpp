#include <iostream>

using namespace std;

class Rectangle {
    float width;
    float height;

public:
    Rectangle(float w, float h) {
        width = w;
        height = h;
    }

    float area() {
        return width * height;
    }

    float perimeter() {
        return 2 * (width + height);
    }
};

int main() {
    float w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    Rectangle r1(w1, h1);
    Rectangle r2(w2, h2);

    cout << r1.perimeter() << endl;
    cout << r1.area() << endl;
    cout << r2.perimeter() << endl;
    cout << r2.area() << endl;

    if (r1.area() > r2.area()) {
        cout << "area r1 larger" << endl;
    } else if (r1.area() < r2.area()) {
        cout << "area r2 larger" << endl;
    } else {
        cout << "same area" << endl;
    }

    if (r1.perimeter() > r2.perimeter()) {
        cout << "perimeter r1 larger" << endl;
    } else if (r1.perimeter() < r2.perimeter()) {
        cout << "perimeter r2 larger" << endl;
    } else {
        cout << "same perimeter" << endl;
    }

    return 0;
}