#include <cmath>
#include <iostream>

using namespace std;

int isPower(long long int n, long long int m) {
    if (m == 1) {
        return n == 1;
    }
    if (n < 1 || m < 1) {
        return 0;
    }
    int temp = 1;
    while (temp < n) {
        temp *= m;
    }
    return temp == n;
}

void func(long long int n, long long int m) {
    if (m <= 1 || n < 1) {
        cout << "Boring!\n";
        return;
    }

    if (isPower(n, m)) {
        while (n > 1) {
            cout << n << " ";
            n /= m;
        }
        cout << "1\n";
    } else {
        cout << "Boring!\n";
    }
}

int main() {
    long long int n, m;
    while (cin >> n >> m) {
        func(n, m);
    }
    return 0;
}