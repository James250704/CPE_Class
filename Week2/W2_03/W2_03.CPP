#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void func(string plate) {
    int wordCount = 0;
    int number = 0;
    for(int i = 0; i < 3; i++) {
        int word = (int)(plate[i] - 'A');
        wordCount += word * (pow(26, 2 - i));
    }

    int temp = 1000;
    for(int j = 4; j < 8; j++) {
        int num = (int)(plate[j] - '0');
        number += num * (temp);
        temp /= 10;
    }

    int num = abs(wordCount - number);
    if(num <= 100) {
        cout << "nice" << endl;
    } else {
        cout << "not nice" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    string plate;
    for(int i = 0; i < n; i++) {
        cin >> plate;
        func(plate);
    }

    return 0;
}