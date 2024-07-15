#include <iostream>
using namespace std;

class Greatest {
public:
    int findGreatest(int a, int b, int c) {
        if (a >= b && a >= c)
            return a;
        else if (b >= a && b >= c)
            return b;
        else
            return c;
    }
};

int main() {
    Greatest g;
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Greatest number is: " << g.findGreatest(a, b, c) << endl;
    return 0;
}
