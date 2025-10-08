#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) { 
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

string func(const vector<int>& arr, int b) {
    string result = "";
    int total_primes = arr.size();
    int count;

    if (total_primes % 2 == 0) {
        count = b * 2;
    } else {
        count = b * 2 - 1;
    }

    if (count > total_primes) {
        for (int prime : arr) {
            result += to_string(prime) + " ";
        }
    } else {
        int start_index = (total_primes - count) / 2;
        int end_index = start_index + count;
        
        if (start_index < 0) start_index = 0;
        if (end_index > total_primes) end_index = total_primes;

        for (int i = start_index; i < end_index; i++) {
            result += to_string(arr[i]) + " ";
        }
    }
    return result;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        vector<int> arr;
        for (int i = 1; i <= a; i++) {
            if (isPrime(i)) {
                arr.push_back(i);
            }
        }
        
        cout << a << " " << b << ": " << func(arr, b) << endl;
    }

    return 0;
}