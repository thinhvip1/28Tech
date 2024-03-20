#include <bits/stdc++.h>
using namespace std;
//chuoi chi gom ki tu 0 va 1. Muon tat ca cac so 1 trong chuoi tao thanh phan doan lien ke
// vd: 111100, 1111, 0, 1
int del0(char c[]){
    int cnt0 = 0, cnt1=0;
    for(int i = 1; i < strlen(c)-1; i++){
        if(c[i]=='0'){
            if(c[i+1]=='0') ++cnt0;
            else{
                ++cnt0;
                ++cnt1;
                ++i;
            } 
        }
    }
    if(cnt1) return cnt0;
    return 0;
}
int dele0(char c[]){
    int idx = -1, cnt = 0;
    for(int i = 0; i < strlen(c); i++){
        if(c[i]=='1'){
            if(idx==-1) idx = i;
            else{
                cnt+=i-idx-1;
                idx = i;
            }
        }
    }
    return cnt;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[101];
        cin >> c;
        cout << dele0(c) << endl;
    }
    return 0;
}