#include <iostream>
using namespace std;

int main() {
    int J, R;
    while(cin >> J >> R && J && R) {
        int vp[512] = {0};
        int winner = 0;
        int tmp = 0;
        for(int i = 0; i < J * R; ++i) {
            cin >> tmp;
            int cur = i % J;
            vp[cur] += tmp;
            if(vp[cur] >= vp[winner])
                winner = cur;
        }
        cout << winner + 1 << endl;
    }
    return 0;
}