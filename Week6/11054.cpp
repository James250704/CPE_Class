#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

long long func(vector<long long> &arr) {
    if(arr.empty())
        return 0;
    long long result = 0;

    return result;
}

int main() {
    long long n;
    while(cin >> n) {
        if(n == 0) {
            break;
        }
        vector<long long> arr(n);
        for(long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << func(arr) << endl;
    }
    return 0;
}