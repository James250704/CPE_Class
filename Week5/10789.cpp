#include <iostream>
#include <string>
#include <vector>

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

string func(string str) {
    vector<int> alpha(256, 0);

    for (char c : str) {
        alpha[c]++;
    }

    string result = "";
    for (int i = 0; i < 256; i++) {
        if (alpha[i] > 0 && isPrime(alpha[i])) {
            result += (char)i;
        }
    }
    return result;
}

int main() {
    int n, count = 1;
    cin >> n; 
    while (n--) { 
        string str;
        cin >> str;

        string result = func(str);
        
        if (result.empty()) {
            result = "empty";
        }

        cout << "Case " << count++ << ": " << result << endl;
    }

    return 0;
}