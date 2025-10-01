#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

void func(vector<int> &arr) {
    long long result = 0;
    int len = arr.size();

    for (int i = 1; i <= len; i++) {
        result += 2 * pow(arr.back(), i);
        arr.pop_back();
    }
    if (result > 5000000) {
        cout << "Too expensive" << endl;
    } else {
        cout << result << endl;
    }
}

int main() {
    int n, num;
    cin >> n;

    while (n--) {
        vector<int> arr;

        while (1) {
            cin >> num;
            if (num == 0) {
                break;
            }
            arr.push_back(num);
        }

        sort(arr.begin(), arr.end());
        func(arr);
    }

    return 0;
}
