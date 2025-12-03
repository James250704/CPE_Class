#include <iostream>
using namespace std;

int main() {
    int J, R;
    while(cin >> J >> R && J && R) {
        int point[512] = {0};
        int winner = 0;
        int tmp = 0;
        for(int i = 0; i < J * R; ++i) {
            cin >> tmp;
            int cur = i % J;
            point[cur] += tmp;
            if(point[cur] >= point[winner])
                winner = cur;
        }
        cout << winner + 1 << endl;
    }
    return 0;
}