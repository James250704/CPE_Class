#include <iostream>

using namespace std;

const int ARRAY_SIZE = 10;
int a[ARRAY_SIZE];

bool ordered() {
    if(ARRAY_SIZE < 2)
        return true;

    if(a[0] > a[1]) {
        for(int i = 2; i < ARRAY_SIZE; ++i) {
            if(a[i - 1] < a[i]) {
                return false;
            }
        }
    } else {
        for(int i = 2; i < ARRAY_SIZE; ++i) {
            if(a[i - 1] > a[i]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int t;
    if(!(cin >> t))
        return 0;

    cout << "Lumberjacks:" << endl;

    while(t--) {
        for(int i = 0; i < ARRAY_SIZE; ++i) {
            if(!(cin >> a[i]))
                return 0;
        }

        if(ordered()) {
            cout << "Ordered" << endl;
        } else {
            cout << "Unordered" << endl;
        }
    }

    return 0;
}