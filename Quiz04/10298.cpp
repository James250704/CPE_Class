#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string input;
    while(cin >> input) {
        if(input == ".") break;
        int n = input.length();
        vector<int> arr(n, 0);

        for(int i = 1, j = 0; i < n; i++) {
            
            while(j > 0 && input[i] != input[j]){
                j = arr[j - 1];
            }

            if(input[i] == input[j]){
                j++;
            }
            arr[i] = j;
        }

        int len = n - arr[n - 1];

        if(n % len == 0)
            cout << n / len << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}