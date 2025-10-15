#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool func(string a) {
    string odd;
    string even;
    for(long long i = 0; i < a.length(); i++) {
        int digit = a[i] - '0';
        if(i % 2 != 0) {
            odd.push_back(digit);
        } else {
            even.push_back(digit);
        }
    }
    long long oddtemp = 0;
    long long eventemp = 0;
    for(long long i = 0; i < odd.length(); i++) {
        oddtemp += odd[i];
    }
    for(long long i = 0; i < even.length(); i++) {
        eventemp += even[i];
    }

    int temp = abs(oddtemp - eventemp);
    if(temp % 11 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string a;
    while(cin >> a) {
        if(a == "0") {
            break;
        }
        if(func(a)) {
            cout << a << " is a multiple of 11." << endl;
        } else {
            cout << a << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}