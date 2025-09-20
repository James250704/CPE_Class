#include <iomanip>
#include <iostream>

using namespace std;

void func(int num) {
    if (num <= 0) {
        cout << "DEFICIENT" << endl;
        return;
    }

    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }

    if (sum == num) {
        cout << "PERFECT" << endl;
    } else if (sum > num) {
        cout << "ABUNDANT" << endl;
    } else {
        cout << "DEFICIENT" << endl;
    }
}

int main() {
    int n;
    cout << "PERFECTION OUTPUT" << endl;

    while (cin >> n) {
        if (n == 0) {
            break;
        }
        cout << setw(5) << n << "  ";
        func(n);
    }

    cout << "END OF OUTPUT";
    return 0;
}