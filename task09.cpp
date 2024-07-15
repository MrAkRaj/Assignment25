#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    const double PI = 3.14159;

public:
    void setValues(double r) {
        radius = r;
    }

    double findArea() {
        return PI * radius * radius;
    }
};

int main() {
    Circle c;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    c.setValues(radius);
    cout << "Area of the circle: " << c.findArea() << endl;
    return 0;
}
