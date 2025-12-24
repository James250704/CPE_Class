#include <iostream>
#include <string>
using namespace std;

int main() {
    string input1, input2;
    while(cin >> input1 >> input2) {
        int index = 0;

        for(int i = 0; i < input2.length(); i++) {
            if(input2[i] == input1[index]) {
                index++;
            }

            if(index == input1.length()) {
                break;
            }
        }

        if(index == input1.length()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}