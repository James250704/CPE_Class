#include <iostream>
using namespace std;

int main(){
    int n, count = 1;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        cout << "Case " << count << ": " << func(m) << endl;
    }
    return 0;
}


