#include <bits/stdc++.h>
using namespace std;
//neu p la snt ma 2^p - 1 cung la snt thi 2^(p-1) * (2^p - 1) la so hh
bool nt(int n){
    for(int i =2; i <= sqrt(n); i++)
        if(n%i==0) return false;
    return n > 1;
}
long long hh[10];
int cnt = 0;
void per_num(){
    for(int i = 2; i <= 32; i++){
        if(nt(i)){
            int tmp = (int)pow(2,i) - 1;
            if(nt(tmp)) hh[cnt++] = 1ll * tmp * (int)pow(2,i-1);
        }           
    }
}
int main(){
    per_num();
    int tc; cin >> tc;
    while(tc--){
        long long n; cin >> n; bool ok = false;
        for(int i = 0; i < cnt; i++)
            if(hh[i]==n){
                ok = true; break;
            }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}