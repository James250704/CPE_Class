#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while(n--) {
        long long s, d;
        cin >> s >> d;

        if(s < d || (s + d) % 2 != 0) {
            cout << "impossible" << endl;
        } else {
            long long score1 = (s + d) / 2;
            long long score2 = (s - d) / 2;
            cout << score1 << " " << score2 << endl;
        }
    }
    return 0;
}