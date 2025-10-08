#include <iostream>

using namespace std;

void func(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            break;
        }
        func(n);
    }
    return 0;
}