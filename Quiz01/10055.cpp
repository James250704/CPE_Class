#include <iostream>
using namespace std;

int main() {
    long long a, b;
    while(cin >> a >> b) {
        if(b < a) {
            swap(a, b);
        }
        cout << b - a << endl;
    }

    return 0;
}