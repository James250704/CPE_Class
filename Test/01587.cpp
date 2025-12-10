#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> arr(6);

    while(cin >> arr[0].first >> arr[0].second) {

        if(arr[0].first > arr[0].second)
            swap(arr[0].first, arr[0].second);

        for(int i = 1; i < 6; i++) {
            cin >> arr[i].first >> arr[i].second;
            if(arr[i].first > arr[i].second)
                swap(arr[i].first, arr[i].second);
        }

        sort(arr.begin(), arr.end());

        bool possible = true;
        if(arr[0] != arr[1] || arr[2] != arr[3] || arr[4] != arr[5])
            possible = false;
        if(arr[0].first != arr[2].first)
            possible = false;
        if(arr[0].second != arr[4].first)
            possible = false;
        if(arr[2].second != arr[4].second)
            possible = false;

        if(possible)
            cout << "POSSIBLE" << endl;
        else
            cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}