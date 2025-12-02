#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

struct Pallet {
    int w, h;
};

vector<Pallet> box(6);
const int N = 6;

void sort_pallets() {
    sort(box.begin(), box.end(), [](const Pallet &a, const Pallet &b) {
        if(a.w != b.w) {
            return a.w < b.w;
        }
        return a.h < b.h;
    });
}

int compare() {
    bool is_paired = (box[0].w == box[1].w && box[0].h == box[1].h) &&
                     (box[2].w == box[3].w && box[2].h == box[3].h) &&
                     (box[4].w == box[5].w && box[4].h == box[5].h);

    if(!is_paired) {
        return 0;
    }

    if(box[0].w == box[2].w && box[0].h == box[4].w && box[2].h == box[4].h) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while(cin >> box[0].w >> box[0].h) {
        if(box[0].w > box[0].h) {
            swap(box[0].w, box[0].h);
        }

        for(int i = 1; i < N; i++) {
            if(!(cin >> box[i].w >> box[i].h))
                break;
            if(box[i].w > box[i].h) {
                swap(box[i].w, box[i].h);
            }
        }

        sort_pallets();

        if(compare() == 1) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}