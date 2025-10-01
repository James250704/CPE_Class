#include <cmath>
#include <iostream>

using namespace std;

void func(int hour, int min) {
    int result = 0;

    cout << result << endl;
}

int main() {
    int hour, min;
    char temp;
    while (1) {
        cin >> hour >> temp >> min;
        if (hour == 0 && min == 0)
            break;
        func(hour, min);
    }
    return 0;
}