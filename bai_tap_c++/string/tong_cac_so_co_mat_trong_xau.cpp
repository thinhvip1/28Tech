#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 0;
        int sum = 0;
        for(char x : s){
            if(x >= 48 && x <= 57){
                sum = sum * 10 + (x-48);
            }
            else{
                ans += sum;
                sum = 0;
            }
        }
        ans += sum;
        cout << ans << endl;
    }
}