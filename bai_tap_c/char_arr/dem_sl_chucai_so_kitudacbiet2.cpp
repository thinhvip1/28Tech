#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000]; int cnt[26]={0};
    cin >> c;
    for(int i = 0; i < strlen(c); i++){
        cnt[c[i]-97]++;
    }
    for(int i = 0; i < strlen(c); i++){
        if(cnt[c[i]-97]){
            cout << (c[i]) << " " << cnt[c[i]-97] << endl;
            cnt[c[i]-97] = 0;
        }
    }
}