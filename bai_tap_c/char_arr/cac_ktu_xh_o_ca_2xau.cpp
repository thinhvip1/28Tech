#include <bits/stdc++.h>
using namespace std;
int min(int a, int b){
    return a > b ? b : a;
}
int main(){
    char c[1000], d[1000]; int cnt[256] = {0};
    cin.getline(c,1000);
    cin.getline(d,1000);
    for(int i = 0; i < strlen(c); i++){
        cnt[c[i]] = 1;
    }
    for(int i = 0; i < strlen(d); i++){
        cnt[d[i]]++;
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i]>1) cout << (char)i;
    }
}