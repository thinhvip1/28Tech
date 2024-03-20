#include <bits/stdc++.h>
using namespace std;
bool symmetric_str(char c[]){
    int n = strlen(c), l = 0, cnt[256]={0};
    for(int i = 0; i < n; i++){
            cnt[c[i]]++;   
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i]%2!=0) l++;
    }
    if(l<=1) return true;
    return false;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        if(symmetric_str(c)) cout << "YES\n";
        else cout << "NO\n";
    }
    
}