#include <iostream>
#include <string>
#include <vector>
using namespace std;

void func(vector<long long> &arr){
    long long result = 0;
    for(int i = 0; i < arr.size(); i++){
        result += arr[i];
    }
    while(result / 10 > 0){
        result = (result % 10) + (result / 10);
    }
    cout << result << endl;
}

int main(){
    string str;
    while(cin >> str){
        if (str == "0"){
            break;
        }
        vector<long long> arr;
        for(long long i : str){
            arr.push_back(i-'0');
        }

        func(arr);
    }
    return 0;
}