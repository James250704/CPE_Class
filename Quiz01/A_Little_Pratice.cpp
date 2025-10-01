#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        if (n > 0){
            cout << "positive" << endl;
        }else{
            cout << "negative" << endl;
        }
    }
    return 0;
}