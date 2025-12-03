#include <iostream>
using namespace std;

int main(){
    string phone;
    string result;
    while(cin >> phone){
        for(int i = 0; i < phone.size(); i++){
            if(phone[i] == 1 || phone[i] == 0){
                result += phone[i];
            }else{
                cout << char(phone[i])<< endl;
            }
            
        }
    }
    return 0;
}