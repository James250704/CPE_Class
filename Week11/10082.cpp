#include <iostream>
#include <string>
using namespace std;

int main() {
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string msg;
    
    while(getline(cin, msg)){
        for (char i : msg) {
            int pos = keyboard.find(i);
            
            if (pos != -1)
                cout << keyboard[pos - 1];
            else
                cout << i;  
        }
        cout << endl;
    }
    return 0;
}