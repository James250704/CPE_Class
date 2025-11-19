#include <iostream>
#include <algorithm>

using namespace std;

long long fzero(int n) {
    if (n < 0) return 0;
    long long count = 0;
    long long pow = 5;
    
    while (n >= pow) {
        count += (n / pow);
        pow *= 5;
    }
    return count;
}

int main() {
    int a, b;

    while (cin >> a >> b) {
        if (a == 0 && b == 0) {
            break;
        }

        long long max = fzero(b);
        long long min = fzero(a);
        
        long long dif = max - min + 1;
        
        cout << dif << "\n";
    }

    return 0;
}