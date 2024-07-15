#include <iostream>
using namespace std;

class LargestNumber {
public:
    int findLargest(int a, int b, int c) {
        if (a >= b && a >= c)
            return a;
        else if (b >= a && b >= c)
            return b;
        else
            return c;
    }
};

int main() {
    LargestNumber ln;
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Largest number is: " << ln.findLargest(a, b, c) << endl;
    return 0;
}
