#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string line;
    while(getline(cin, line)) {
        stringstream ss(line);
        string reverse_line;
        string word;

        while(ss >> word) {
            reverse(word.begin(), word.end());
            reverse_line += word + " ";
        }
        cout << reverse_line << endl;
    }

    return 0;
}