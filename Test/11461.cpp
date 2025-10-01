#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int func(int a, int b) {
    int count = 0;
    if (a < 0 || b < 0) {
        return 0;
    }
    for (int i = 0; i < sqrt(b) + 1; i++) {
        if (i * i >= a && i * i <= b) {
            count++;
        }
    }
    return count;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0)
            break;

        cout << func(a, b) << endl;
    }
    return 0;
}