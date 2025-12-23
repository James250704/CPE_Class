#include <iostream>

using namespace std;

int main() {
    long long n;
    while(cin >> n) {
        long long result = 0;
        result = (n + 1) * (n + 1) * 3 / 2 - 9;
        cout << result << endl;
    }
    return 0;
}
