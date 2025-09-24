#include <iostream>
using namespace std;

void func(int num1, int num2) {
    int carry = 0;
    int count = 0;

    while (num1 > 0 || num2 > 0 || carry > 0) {
        int digit1 = num1 % 10;
        int digit2 = num2 % 10;
        int sum = digit1 + digit2 + carry;

        if (sum >= 10) {
            count++;
            carry = 1; 
        } else {
            carry = 0; 
        }

        num1 /= 10;
        num2 /= 10;
    }

    if (count == 0) {
        cout << "No carry operation." << endl;
    } else if (count == 1) {
        cout << count << " carry operation." << endl;
    } else {
        cout << count << " carry operations." << endl;
    }
}

int main() {
    int num1, num2;

    while (cin >> num1 >> num2) {
        if (num1 == 0 && num2 == 0) {
            break;
        }
        func(num1, num2);
    }

    return 0;
}