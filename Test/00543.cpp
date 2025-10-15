#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

bool isOdd(int num) {
    if(num % 2 == 0) {
        return false;
    } else {
        return true;
    }
}

void func(int num) {
    int a, b;
    bool flag = false;
    for(int i = 0; i < num / 2 + 1; i++) {
        if(isPrime(i) && isOdd(i)) {
            a = i;
            b = num - i;
            if(isPrime(b) && isOdd(b)) {
                cout << num << " = " << a << " + " << b << endl;
                flag = true;
                break;
            }
        }
    }

    if(!flag) {
        cout << "Goldbach's conjecture is wrong." << endl;
    }
}

int main() {
    int n;
    while(cin >> n) {
        if(n == 0)
            break;
        func(n);
    }

    return 0;
}