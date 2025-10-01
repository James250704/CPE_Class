#include <cmath>
#include <iostream>

using namespace std;

void func(int num) {
    double result = 0;
    num = abs(num);
    result = (sqrt((sqrt(num)) * 10)) * 10;
    result = ceil(result * 10) / 10;
    if (result > 100) {
        cout << "100.0" << endl;
    } else {
        cout << result << endl;
    }
}

int main() {
    int num;

    while (1) {
        cin >> num;
        if (num == 0)
            break;
        func(num);
    }

    return 0;
}