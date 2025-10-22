#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int func(int n) {
    int count = 1;
    while(n != 1) {
        if(n % 2 != 0) {
            n = 3 * n + 1;
        } else {
            n /= 2;
        }
        count++;
    }
    return count;
}
int main() {
    int a, b;
    while(cin >> a >> b) {
        vector<int> arr;
        cout << a << " " << b << " ";
        if(b < a) {
            swap(a, b);
        }
        for(int i = a; i <= b; i++) {
            arr.push_back(func(i));
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        cout << arr[0] << endl;
    }

    return 0;
}