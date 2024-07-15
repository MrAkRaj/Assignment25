#include <iostream>
using namespace std;

class Square {
private:
    static int count;

public:
    int findSquare(int n) {
        ++count;
        return n * n;
    }

    static int getCount() {
        return count;
    }
};

int Square::count = 0;

int main() {
    Square s;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Square of " << num << " is " << s.findSquare(num) << endl;
    cout << "Function called " << Square::getCount() << " times" << endl;

    cout << "Enter another number: ";
    cin >> num;
    cout << "Square of " << num << " is " << s.findSquare(num) << endl;
    cout << "Function called " << Square::getCount() << " times" << endl;

    return 0;
}
