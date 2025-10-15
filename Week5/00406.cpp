#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isPrime (int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

string func (const vector<int> &arr, int b) {
    string result;
    int size = arr.size ();

    if (size % 2 == 0) {
        b = b * 2;
    } else {
        b = b * 2 - 1;
    }

    if (b > size) {
        for (int i : arr) {
            result += to_string (i) + " ";
        }
    } else {
        int min = (size - b) / 2;
        int max = min + b;

        if (min < 0) {
            min = 0;
        }
        if (max > size) {
            max = size;
        }

        for (int i = min; i < max; i++) {
            result += to_string (arr[i]) + " ";
        }
    }
    return result;
}

int main () {
    int a, b;
    while (cin >> a >> b) {
        vector<int> arr;
        arr.push_back (1);
        for (int i = 1; i <= a; i++) {
            if (isPrime (i)) {
                arr.push_back (i);
            }
        }

        cout << a << " " << b << ": " << func (arr, b) << endl;
    }

    return 0;
}