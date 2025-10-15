#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr;
    while(n--) {
        string act, name;
        cin >> act >> name;
        if(act == "Sleep") {
            arr.push_back(name);
        } else if(act == "Kick") {
            if(!arr.empty()) {
                arr.pop_back();
            }
        } else if(act == "Test") {
            if(arr.empty()) {
                cout << "Not in a dream" << endl;
            } else {
                cout << arr.back() << endl;
            }
        }
    }
    return 0;
}