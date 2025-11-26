#include <iostream>
#include <string>
using namespace std;

string reverse(string s){
    int n = s.size();
    for(int i = 0; i < n / 2; i++){
        swap(s[i], s[n - 1 - i]);
    }
    return s;
}

int main(){
    int n;
    string str;

    while(cin >> n){
        if(n == 0) break;
        cin >> str;

        int len = str.size();
        int group = len / n;   

        for(int i = 0; i < len; i += group){
            string part = str.substr(i, group);
            part = reverse(part);
            str.replace(i, group, part);
        }

        cout << str << endl;
    }

    return 0;
}
