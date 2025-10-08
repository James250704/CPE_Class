#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool func (string str) {
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            s.push (c);
        } else if (c == ')') {
            if (s.empty () || s.top () != '(') {
                return false;
            }
            s.pop ();
        } else if (c == ']') {
            if (s.empty () || s.top () != '[') {
                return false;
            }
            s.pop ();
        } else if (c == '}') {
            if (s.empty () || s.top () != '{') {
                return false;
            }
            s.pop ();
        }
    }
    return s.empty ();
}

int main () {
    int n;
    cin >> n;
    cin.ignore ();

    while (n--) {
        string str;
        getline (cin, str);
        if (func (str)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}