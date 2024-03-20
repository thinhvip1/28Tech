#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        int max_val = INT_MIN, number = 0;
        for(char x : s){
            if(isdigit(x)) number = number * 10 + (x-48);
            else{
                max_val = max(max_val, number);
                number = 0;
            }
        }
        max_val = max(max_val, number);
        cout << max_val << endl;
    }
}