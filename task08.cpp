#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setValues(double l, double w) {
        length = l;
        width = w;
    }

    double findArea() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    double length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    r.setValues(length, width);
    cout << "Area of the rectangle: " << r.findArea() << endl;
    return 0;
}
