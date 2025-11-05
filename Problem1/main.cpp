#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }
    double getArea() const {
        return length * width;
    }
    double getPerimeter() const {
        return 2 * (length + width);
    }
    double getLength() const {
        return length;
    }
    double getWidth() const {
        return width;
    }
};

int main(){
    double len1, wid1, len2, wid2;

    cout << "length rectangle 1: ";
    cin >> len1;
    cout << "width rectangle 1: ";
    cin >> wid1;
    
    cout << "length rectangle 2: ";
    cin >> len2;
    cout << "width rectangle 2: ";
    cin >> wid2;

    Rectangle rect1(len1, wid1);
    Rectangle rect2(len2, wid2);

    double p1 = rect1.getPerimeter();
    double a1 = rect1.getArea();
    double p2 = rect2.getPerimeter();
    double a2 = rect2.getArea();

    cout << "area of rect1 is " << a1 << " and perimeter of rect 1 is " << p1 << endl;
    cout << "area of rect2 is " << a2 << " and perimeter of rect 2 is " << p2 << endl;

    if (p1 > p2) {
        cout << "rect1 perimeter is larger." << endl;
    } else if (p2 > p1) {
        cout << "rect2 perimeter is larger." << endl;
    } else {
        cout << "both rectangles have the same perimeter." << endl;
    }
    if (a1 > a2) {
        cout << "rect1 area is larger." << endl;
    } else if (a2 > a1) {
        cout << "rect2 area is larger." << endl;
    } else {
        cout << "both rectangles have the same area." << endl;
    }

    return 0;
}