#include <iostream>
#include <string>
using namespace std;

int main() {
    string input1, input2;
    while(cin >> input1 >> input2) {
        int s_index = 0;

        for(int i = 0; i < input2.length(); i++) {
            if(input2[i] == input1[s_index]) {
                s_index++;
            }

            if(s_index == input1.length()) {
                break;
            }
        }

        if(s_index == input1.length()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}