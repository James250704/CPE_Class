#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    while(n--) {
        vector<int> digi(10, 0);
        cin >> m;

        for(int i = 1; i <= m; i++) {
            int temp = i;
            while(temp) {
                digi[temp % 10]++;
                temp = temp / 10;
            }
        }
        cout << digi[0];
        for(int i = 1; i < 10; i++) {
            cout << " " << digi[i];
        }
        cout << endl;
    }

    return 0;
}