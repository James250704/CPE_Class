#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    while(n--) {
        int a, b;
        cin >> a >> b;
        if(b < a) {
            swap(a, b);
        }
        int sum = 0;
        for(int i = a; i <= b; i++) {
            if(i % 2 == 1) {
                sum += i;
            }
        }
        cout << "Case " << count++ << ": " << sum << endl;
    }
    return 0;
}