#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr;
    vector<string> result(28);
    string temp;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    transform(arr.begin(), arr.end(), arr.begin(), ::toupper);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    // for (int j = 0; j < arr.size(); j++) {
    //     temp = arr[j];
    //     for (int i = 0; i < temp.length(); i++) {

    //     }
    // }

    return 0;
}