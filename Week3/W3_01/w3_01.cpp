#include <iostream>
using namespace std;

int main() {
    int num;
    while (1) {
        cin >> num;
        if (num == 0) {
            break;
        }
        if (num > 0) {
            cout << "positive" << endl;
        } else {
            cout << "negative" << endl;
        }
    }
    return 0;
}