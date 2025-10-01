#include <iostream>
using namespace std;

int getSum(int num) {
    if (num == 1) {
        return 1;
    }
    int sum = 1 + num;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    return sum;
}

int func(int n) {
    int max = -1;
    for (int i = 1; i <= 10000; i++) {
        if (getSum(i) == n) {
            max = i;
        }
    }
    return max;
}

int main() {
    int n, count = 1;
    while (cin >> n && n != 0) {
        cout << "Case " << count << ": " << func(n) << "\n";
        count++;
    }
    return 0;
}