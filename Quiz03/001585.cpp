#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    string q;

    while(n--){
        cin >> q;
        int count = 0, result = 0;
        for(int i = 0; i < q.length(); i++){
            if(q[i] == 'O'){
                count ++;
            }else if(q[i] == 'X'){
                for(int i = 0; i <= count; i++){
                    result += i;
                }
                count = 0;
            }
        }
        if(count != 0){
            for(int i = 0; i <= count; i++){
                result += i;
            }
        }
        cout << result << endl;
    }

    return 0;
}