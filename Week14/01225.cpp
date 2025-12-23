#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n;

    vector<int> digi(10);

    while(n--) {
        digi.assign(10, 0);
        cin >> m;

        for(int i = 1; i <= m; i++) {
            int a = i;
            while(a) {
                digi[a % 10]++;
                a = a / 10;
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
