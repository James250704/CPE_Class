#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int limit = pow(10, n / 2);

        for(int i = 0; i < limit; i++) {
            int square = i * i;

            int right = square % limit;
            int left = square / limit;

            if((left + right) * (left + right) == square) {
                cout << setw(n) << setfill('0') << square << endl;
            }
        }
    }
    return 0;
}