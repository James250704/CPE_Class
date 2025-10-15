#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    int n, count = 0;
    while(cin >> n){
        if (n == 0){
            break;
        }
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout << arr.sum() / arr.size() <<endl;
        count++;
    }
    return 0;
}