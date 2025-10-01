#include <iostream>
using namespace std;

long long func(long long a, long long b, long long c, long long d, long long l){
    long long count = 0;
    for(long long i = 0; i <= l; i++){
        long long temp = a * i*i + b * i + c;
        if( ( temp % d) == 0){
            count++;
        }
    }
    return count;
}

int main(){
    long long a, b, c, d, l;
    while(cin >> a >> b >> c >> d >> l){
        if(a == 0 && b == 0 && c == 0 && d == 0 && l == 0){
            break;
        }
        cout << func(a, b, c, d, l) << endl;
    }
    return 0;
}