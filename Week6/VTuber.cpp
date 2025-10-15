#include <iostream>
using namespace std;

int main(){
    char words[3][5] = {
        {'A','y','a','m','e'},
        {'M','o','o','n','a'},
        {'K','i','a','r','a'}
    };
    int a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
        for(int i = 0; i < 5; i++){
            cout << words[(a - 1) % 3][i];
        }
        cout << endl;
        for(int i = 0; i < 3; i++){
            cout << words[i][(b-1) % 5];
        }
        cout << endl;
    }

    return 0;
}