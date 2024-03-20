#include <iostream>
using namespace std;
bool check(string s, int k){
    if(s.size() <= k) return false;
    for(int i = s.size()-1; i >= s.size()-k; i--){
        if(s[i]=='1') return false;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s; 
        int k;
        cin >> s >> k;
        if(check(s,k)) cout << "YES\n";
        else cout << "NO\n";
    }
}