#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    vector<int> freq(26, 0);

    for(int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        for(char c : line) {
            if(isalpha(c)) {
                freq[toupper(c) - 'A']++;
            }
        }
    }

    vector<pair<int, char>> letters;
    for(int i = 0; i < 26; ++i) {
        if(freq[i] > 0) {
            letters.push_back({-freq[i], char('A' + i)});
        }
    }

    sort(letters.begin(), letters.end());

    for(auto &p : letters) {
        cout << p.second << " " << -p.first << endl;
    }

    return 0;
}