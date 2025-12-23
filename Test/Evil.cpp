#include <iostream>
using namespace std;

int main() {
    int n;
    string name;

    while(cin >> n) {
        cin >> name;
        if(n == 0) {
            cout << n << " " << "NULL" << endl;
        } else {
            cout << n << " " << name << endl;
        }
    }
    return 0;
}