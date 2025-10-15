#include <iostream>
using namespace std;

int func(int arr[], int m) {
    int sum = 0;
    int arr2[m];
    for(int i = 1; i < m; i++) {
        int count = 0;
        for(int j = 0; j < i; j++) {
            if(arr[j] <= arr[i]) {
                count++;
            }
        }
        arr2[i - 1] = count;
    }

    for(int i = 0; i < m - 1; ++i) {
        sum += arr2[i];
    }

    return sum;
}

int main() {
    int n, m;
    cin >> n;
    for(int j = 0; j < n; j++) {
        cin >> m;
        int arr[m];
        for(int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        cout << func(arr, m) << endl;
    }
    return 0;
}
