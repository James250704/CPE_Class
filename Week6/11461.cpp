#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int func(int a, int b){
    int result = 0;

    for (long long i = (int)sqrt(a);; i++){
        long long i_squared = i * i;
        if (i_squared > b){
            break;
        }
        if (i_squared >= a && i_squared <= b){
            result += 1;
        }
    }

    return result;
}

int main(){
    int a, b;
    while (cin >> a >> b){
        if (a == 0 && b == 0){
            break;
        }
        if (b < a) {
            swap(a, b);
        }
        cout << func(a, b) << endl;
    }
    return 0;
}