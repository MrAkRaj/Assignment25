#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    void setValues(double r, double i) {
        real = r;
        imag = i;
    }

    void printValues() {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c;
    c.setValues(3.5, 2.5);
    c.printValues();
    return 0;
}
