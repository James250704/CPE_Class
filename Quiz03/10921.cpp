#include <iostream>
#include <string>
using namespace std;

int main(){
    string phone;
    while(cin >> phone){
        string result;
        int count = 0, count2 = 0;
        for(int i = 0; i < phone.size(); i++){
            if(phone[i] == '1' || phone[i] == '0' || phone[i] == '-'){
                result += phone[i];
                if(phone[i] == '-') {
                    count++;
                }
            }else{
                count2++;
                switch(phone[i]){
                    case 'A':
                    case 'B':
                    case 'C':
                     result += "2";
                     break;
                    case 'D':
                    case 'E':
                    case 'F':
                     result += "3";
                     break;
                    case 'G':
                    case 'H':
                    case 'I':
                     result += "4";
                     break;
                     case 'J':
                    case 'K':
                    case 'L':
                     result += "5";
                     break;
                     case 'M':
                    case 'N':
                    case 'O':
                     result += "6";
                     break;
                     case 'P':
                    case 'Q':
                    case 'R':
                    case 'S':
                     result += "7";
                     break;
                     case 'T':
                    case 'U':
                    case 'V':
                     result += "8";
                     break;
                     case 'W':
                    case 'X':
                    case 'Y':
                    case 'Z':
                     result += "9";
                     break;
                }
            }
            
        }
        cout << result << " " << count2 << " " << count << endl;
    }
    return 0;
}