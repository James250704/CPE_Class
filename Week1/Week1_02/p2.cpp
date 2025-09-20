#include <iostream>
using namespace std;

void func(long long int a, long long int b) {
    int div, dor;
    div = a / b;
    dor = a % b;
    // cout << a << " " << b << " " << div << " " << dor << endl;
    cout << "printf(\"%lld / %lld = %lld + %lld\\n\", " << a << ", " << b
         << ", " << div << ", " << dor << ");" << endl;
}

int main() {
    int n;
    long long int a, b;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        func(a, b);
    }
    return 0;
}