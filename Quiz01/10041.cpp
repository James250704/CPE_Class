#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int func(vector<int> &arr) {
    int result = 0;
    sort(arr.begin(), arr.end());
    int vito = arr.size() / 2;
    for(int i = 0; i < arr.size(); i++) {
        result += abs(arr[i] - arr[vito]);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    while(n--) {
        int cases;
        cin >> cases;
        vector<int> arr(cases);
        for(int i = 0; i < cases; i++) {
            cin >> arr[i];
        }
        cout << func(arr) << endl;
    }
    return 0;
}