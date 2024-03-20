#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[1000]; int cnt[256] = {0};
    cin.getline(c,1000);
    for(int i = 0; i < strlen(c); i++){
        cnt[c[i]]++;
    }
    int max = 0; char res;
    for(int i = 0; i < 256; i++){
        if(max <= cnt[i]){
            max = cnt[i];
            res = (char)i;
        }
    }
    cout << res;
}