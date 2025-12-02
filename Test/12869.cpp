#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    long long first, second;
    while(cin >> first >> second) {
        if(first == 0 && second == 0)
            break;
        cout << (second / 5) - (first / 5) + 1 << endl;
    }
    return 0;
}