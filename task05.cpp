#include <iostream>
using namespace std;

class ReverseNumber {
public:
    int findReverse(int n) {
        int reverse = 0;
        while (n != 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        return reverse;
    }
};

int main() {
    ReverseNumber rn;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reverse of " << num << " is " << rn.findReverse(num) << endl;
    return 0;
}
