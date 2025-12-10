#include <cstdio>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        vector<int> arr;
        int n;
        char c;
        string s;

        while (scanf("%d%c", &n, &c) == 2) {
            arr.push_back(n);
            if (c == '\n')
                break;
        }

        vector<string> vs(arr.size() + 1);
        for (int i = 0; i < arr.size(); i++) {
            cin >> s;
            vs[arr[i]] = s;
        }

        for (int i = 1; i < vs.size(); i++)
            cout << vs[i] << endl;

        if (n != 0)
            cout << endl;
    }
    return 0;
}