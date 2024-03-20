#include <iostream>
using namespace std;
int bin_pow(int a, int x){
    int res = 1;
    while(x){
        if(x%2==1){
            res *= a;
            res %= 10;
        }
        x>>=1;
        a *= a;
        a %= 10;
    }
    return res;
}
bool check(string s){
    int res = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i]){
            res += bin_pow(2, s.size()-i-1);
            res %= 10;
        }
    }
    return res%5 == 0;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        // if(check(s)) cout << "YES\n";
        // else cout << "NO\n";
        int lt = 1;
        int r = (s[s.size()-1] - 48) % 5;
        for(int i = s.size()-2; i >= 0; i--){
            lt *= 2;
            lt %= 5;
            r = r + (s[i]-48) * lt;
            r %= 5;
        }
        if(!r) cout << "YES\n";
        else cout << "NO\n";
    }
}