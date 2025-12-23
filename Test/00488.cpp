#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    int count = 0;
    int a;
    int f;

    cin >> n;

    while(n--) {
        cin >> a >> f;

        for(int i = 1; i <= f; i++) {

            if(count++) {
                cout << endl;
            }

            for(int j = 1; j <= a; j++) {
                for(int k = 1; k <= j; k++) {
                    cout << j;
                }
                cout << endl;
            }

            for(int j = a - 1; j >= 1; j--) {
                for(int k = 1; k <= j; k++) {
                    cout << j;
                }
                cout << endl;
            }
        }
    }

    return 0;
}