#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int Case;
        int a, b, result = 0;
        cin >> Case >> a >> b;

        Case += a;
        while(Case >= b){
            result += Case / b;
            Case = Case / b + Case % b;
        }
        cout << result << endl;

    }
    return 0;
}

