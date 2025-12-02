#include <iostream>
using namespace std;

int main() {
    int n, s, a;
    int fib[40] = {0, 1};

    for(int i = 2; i < 40; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a;
        cout << a << " = ";

        int check = 0, base[41] = {};

        for(int j = 39; j >= 2; j--) {
            if(a - fib[j] >= 0) {
                check = 1;

                if(base[j + 1] != 1) {
                    base[j] = 1;
                    a = a - fib[j];
                }
            }

            if(check == 1)
                cout << base[j];
        }

        cout << " (fib)" << endl;
    }

    return 0;
}
