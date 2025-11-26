#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long first, second;
    while(cin >> first >> second){
        cout << (second/5) - (first/5) + 1 << endl;
    }

    return 0;
}