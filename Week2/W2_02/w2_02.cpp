#include <iostream>
#include <string>
using namespace std;

void func(string word, int i) {
    // cout << "Case " << i << ": ";
    if(word == "HELLO") {
        cout << "Case " << i << ": " << "ENGLISH" << endl;
    } else if(word == "HOLA") {
        cout << "Case " << i << ": " << "SPANISH" << endl;
    } else if(word == "HALLO") {
        cout << "Case " << i << ": " << "GERMAN" << endl;
    } else if(word == "BONJOUR") {
        cout << "Case " << i << ": " << "FRENCH" << endl;
    } else if(word == "CIAO") {
        cout << "Case " << i << ": " << "ITALIAN" << endl;
    } else if(word == "ZDRAVSTVUJTE") {
        cout << "Case " << i << ": " << "RUSSIAN" << endl;
    } else {
        cout << "Case " << i << ": " << "UNKNOWN" << endl;
    }
}

int main() {
    string word;
    int flag = 1;
    int i = 1;
    while(flag) {
        cin >> word;
        if(word == "#") {
            flag = 0;
            break;
        }
        func(word, i++);
    }
}