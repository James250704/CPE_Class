#include <iostream>
using namespace std;

int main(){
    int Case = 0, n;
    cin >> Case;
    while( Case -- ){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            cout << char(arr[i]);
        }
        cout << endl;
    }
    return 0;
}