#include <iostream>
#include <string>

using namespace std;

string func(string word) {
    if(word == "HELLO") {
        return "ENGLISH";
    } else if(word == "HOLA") {
        return "SPANISH";
    } else if(word == "HALLO") {
        return "GERMAN";
    } else if(word == "BONJOUR") {
        return "FRENCH";
    } else if(word == "CIAO") {
        return "ITALIAN";
    } else if(word == "ZDRAVSTVUJTE") {
        return "RUSSIAN";
    } else {
        return "UNKNOWN";
    }
}

int main() {
    string word;
    int count = 1;

    while(cin >> word) {
        if(word == "#") {
            break;
        }
        cout << "Case " << count << ": " << func(word) << endl;
        count++;
    }
    return 0;
}