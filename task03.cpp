#include <iostream>
using namespace std;

class Factorial {
public:
    int findFactorial(int n) {
        int result = 1;
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
};

int main() {
    Factorial f;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << f.findFactorial(num) << endl;
    return 0;
}
