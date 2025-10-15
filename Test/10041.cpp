#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

long long func(vector<long long> &arr) {
    sort(arr.begin(), arr.end());
    long long result = 0;
    long long vito = arr.size() / 2;
    for(size_t i = 0; i < arr.size(); i++) {
        result += abs(arr[vito] - arr[i]);
    }
    return result;
}

int main() {
    long long n;
    cin >> n;
    while(n--) {
        long long round;
        cin >> round;
        vector<long long> arr(round);
        for(long long i = 0; i < round; i++) {
            cin >> arr[i];
        }
        cout << func(arr) << endl;
    }

    return 0;
}