#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void func(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for (int j = 1; j <= arr[i] / 2; j++) {
            if (arr[i] % j == 0) {
                sum += j;
            }
        }
        string status;
        if (sum == arr[i]) {
            status = "PERFECT";
        } else if (sum < arr[i]) {
            status = "DEFICIENT";
        } else {
            status = "ABUNDANT";
        }
        cout << setw(5) << arr[i] << "  " << status << endl;
    }
}

int main() {
    vector<int> arr;
    int temp;
    while (cin >> temp) {
        if (temp == 0) {
            break;
        }
        arr.push_back(temp);
    }

    cout << "PERFECTION OUTPUT" << endl;
    func(arr);
    cout << "END OF OUTPUT" << endl;

    return 0;
}