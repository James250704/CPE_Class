#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    while(cin >> n) {
        vector<int> differences(n, 0);
        int t = 0;

        int a1;
        int a2;

        if(!(cin >> a1))
            break;

        for(int i = 1; i < n; ++i) {
            if(!(cin >> a2))
                break;

            int b = abs(a1 - a2);

            if(b >= 1 && b < n && differences[b] == 0) {
                differences[b] = 1;
                t++;
            }

            a1 = a2;
        }

        if(t == n - 1) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }
    }

    return 0;
}