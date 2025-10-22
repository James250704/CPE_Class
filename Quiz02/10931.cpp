#include <iostream>

using namespace std;

long long func(long long n) {
    long long count = 0;
    while(n > 0) {
        if(n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}

string toBin(long long n) {
    string str = "";
    while(n > 0) {
        if(n % 2 == 0){
            str = "0" + str;
        }else{
            str = "1" + str;
        }
        n /= 2;
    }
    return str;
}

int main() {
    long long n;
    while(cin >> n) {
        if(n == 0) break;
        cout << "The parity of " << toBin(n) << " is " << func(n) << " (mod 2)."<< endl;
    }
    return 0;
}