#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int num, min = 100, max = -1;
        cin >> num;

        for(int j = 0; j < num; j++) {
            int position;
            cin >> position;

            if(position > max) {
                max = position;
            }

            if(position < min) {
                min = position;
            }
        }

        cout << (max - min) * 2 << endl;
    }

    return 0;
}