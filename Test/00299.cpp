#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if(!(cin >> n))
        return 0;

    while(n--) {
        int m;
        int count = 0;
        vector<int> arr;

        cin >> m;

        for(int i = 0; i < m; i++) {
            int num;
            cin >> num;
            arr.push_back(num);
        }

        for(int j = 0; j < m; j++) {
            for(int i = j + 1; i < m; i++) {
                if(arr[j] > arr[i]) {
                    count++;
                }
            }
        }

        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
    return 0;
}