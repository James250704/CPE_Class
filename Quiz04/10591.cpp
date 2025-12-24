#include <iostream>
#include <set>
using namespace std;

int cal(int n) {
    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

string func(int n) {
    set<int> numbers;

    while(n != 1) {
        if(numbers.count(n)) {
            return " is an Unhappy number.";
        }

        numbers.insert(n);
        n = cal(n);
    }

    return " is a Happy number.";
}

int main() {
    int n, m, count = 1;
    cin >> n;
    while(n--) {
        cin >> m;
        cout << "Case #" << count++ << ": " << m << func(m) << endl;
    }

    return 0;
}