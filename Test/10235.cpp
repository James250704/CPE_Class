#include <cmath>
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n) {
    if(n <= 1)
        return false;
    if(n <= 3)
        return true;
    if(n % 2 == 0)
        return false;
    int r = sqrt(n);
    for(int i = 3; i <= r; i += 2) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int reverseInt(int n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    return stoi(s);
}

int main() {
    int N;
    while((cin >> N)) {
        if(!isPrime(N)) {
            cout << N << " is not prime.\n";
        } else {
            int R = reverseInt(N);
            if(R != N && isPrime(R)) {
                cout << N << " is emirp.\n";
            } else {
                cout << N << " is prime.\n";
            }
        }
    }
    return 0;
}
