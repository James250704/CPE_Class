#include <iostream>
using namespace std;

long long func(int a, int b){
    long long result = 0, carry = 0;
    while(a > 0){
        if( (a % 10 + b % 10 + carry) >= 10){
            carry = 1;
            result++;
        }else{
            carry = 0;
        }
        a /= 10; b /= 10;
    }
    return result;
}

int main(){
    long long  a, b;
    while(cin >> a >> b){
        if (a == 0 && b == 0){
            break;
        }
        long long result = func(a, b);
        if(result == 0){
            cout << "No carry operation." << endl;
        }else if ( result == 1){
            cout << result << " carry operation." << endl;
        }else{
            cout << result << " carry operations." << endl;
        }
    }
    return 0;
}