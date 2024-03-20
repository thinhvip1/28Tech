#include <bits/stdc++.h>
using namespace std;
int main(){
    char c[100];
    cin.getline(c,100);
    int lis[strlen(c)];
    fill(lis,lis+strlen(c),1);
    for(int i = 1; i < strlen(c); i++){
         for(int j = 0; j < i; j++){
            if(c[i]>c[j]&&lis[j]+1>lis[i])
                lis[i] = lis[j]+1;
         }
    }
    int res = 1;
    for(int i = 1; i < strlen(c); i++) if(res<lis[i]) res = lis[i];
    cout << 26-res;
}