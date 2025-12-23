#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int first;
    while(cin >> first && first != 0) {
        int next;
        int result = 0;

        while(cin >> next && next != 0) {
            int diff = abs(next - first);
            result = gcd(result, diff);
        }
        cout << result << endl;
    }
    return 0;
}