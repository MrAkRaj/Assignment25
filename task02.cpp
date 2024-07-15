#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void setValues(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayValues() {
        cout << "Time: " << hours << " hr " << minutes << " min " << seconds << " sec" << endl;
    }
};

int main() {
    Time t;
    t.setValues(3, 45, 20);
    t.displayValues();
    return 0;
}
