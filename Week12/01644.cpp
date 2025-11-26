#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

long long func(long long n){
    int low, high = n + 1;
    for(int i = n; i >= 0; i--){
        if(isPrime(i)){
            low = i;
            break;
        }
    }
    while(1){
       if(isPrime(high)){
            break;
       } 
       high++;
    }
    long long result = high-low;
    if(isPrime(n)) result = 0;
    if(low == 1) result = 0;
    return result;
}

int main(){
    long long n;
    long long upper, lowwer;

    while(cin >> n){
        if(n == 0) break;
        cout << func(n) << endl;
    }

    return 0;
}