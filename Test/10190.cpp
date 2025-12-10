#include <iostream>
#include <vector>
using namespace std;

void func(long long a, long long b) {
    vector<long long> arr;
    arr.push_back(a);
    while(a != 0) {
        arr.push_back(a / b);
        a /= b;
    }
    bool flag = true;
    for(long long i = 0; i < arr.size() - 2; i++) {
        if((arr[i] % arr[i + 1]) != 0) {
            cout << "Boring!";
            flag = false;
        }
    }

    if(flag) {
        for(long long i = 0; i < arr.size() - 1; i++) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main() {
    long long a, b;
    while(cin >> a >> b) {
        cout << a << " " << b << endl;
        func(a, b);
    }
    return 0;
}