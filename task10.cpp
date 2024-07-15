#include <iostream>
using namespace std;

class Area {
private:
    const double PI = 3.14159;

public:
    double square(double side) {
        return side * side;
    }

    double rectangle(double length, double width) {
        return length * width;
    }

    double circle(double radius) {
        return PI * radius * radius;
    }
};

int main() {
    Area a;
    double side, length, width, radius;
    
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of the square: " << a.square(side) << endl;
    
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << a.rectangle(length, width) << endl;
    
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << a.circle(radius) << endl;

    return 0;
}
