#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool isB2Sequence(vector<int> &arr) {
    if (arr.size() < 2) {
        return true;
    }

    sort(arr.begin(), arr.end());

    if (arr[0] <= 0) {
        return false;
    }

    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] == arr[i + 1]) {
            return false;
        }
    }

    vector<int> sums;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i; j < arr.size(); ++j) {
            sums.push_back(arr[i] + arr[j]);
        }
    }

    sort(sums.begin(), sums.end());

    for (int i = 0; i < sums.size() - 1; ++i) {
        if (sums[i] == sums[i + 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, count = 1;
    while (cin >> n) {
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (isB2Sequence(arr)) {
            cout << "Case #" << count << ": It is a B2-Sequence." << endl;
        } else {
            cout << "Case #" << count << ": It is not a B2-Sequence." << endl;
        }
        count++;
    }

    return 0;
}