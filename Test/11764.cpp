#include <iostream>
using namespace std;

int main(void) {
    int testcase = 0, N, i, h, l, c, d, T;
    cin >> T;
    while(T--) {
        testcase++;
        h = l = 0;
        cin >> N;
        N--;
        cin >> c;
        for(i = 0; i < N; i++) {
            cin >> d;
            if(d > c)
                h++;
            else if(d < c)
                l++;
            c = d;
        }
        cout << "Case " << testcase << ": " << h << " " << l << endl;
    }
    return 0;
}