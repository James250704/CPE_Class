#include <iostream>
#include <vector>

using namespace std;

int main() {
    int J, R;
    
    while (cin >> J >> R) {
        vector<int> players(J, 0);
        
        int max_score = 0;
        int winner = 0;
        
        int score;
        for (int i = 0; i < R; i++) {
            cin >> score;
            int player_idx = i % J;
            players[player_idx] += score;
            if (players[player_idx] >= max_score) {
                max_score = players[player_idx];
                winner = player_idx;
            }
        }
        
        cout << winner + 1 << endl;
    }

    return 0;
}