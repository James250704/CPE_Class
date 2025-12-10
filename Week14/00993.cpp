#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

string func(int n){
    string result;
    int i;
    while(n != 1){
        for(i = 9; i > 1; i--){
            if(n % i == 0){
                n /= i;
                result = (char)(i + '0') + result;
                break;
            }
        }
        if(i == 1)
            return "-1";
    }
    return result;
}

int main(){
    int Case = 0, n;
    string result;
    cin >> Case;
    while(Case--){
        cin >> n;
        if(n < 10){
            cout << n << endl;
            continue;
        }
        cout << func(n) << endl;
    }
    return 0;
}