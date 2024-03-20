#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
bool csnt(int n){
    while(n){
        int res = n%10;
        if(res!=2&&res!=3&&res!=5&&res!=7) return false;
        n/=10; 
    }
    return true;
}
int SieveOfEratosThenes(int l, int r){
    bool p[r-l+1];
    for(int i = 0; i < r-l+1; i++) p[i] = true;
    for(int i = 2; i <= sqrt(r); i++){
        for(int j = max(i*i,(l+i-1)/i*i); j <= r; j+=i)
            p[j-l] = false;
    }
    int res = 0;
    for(int i = l; i <= r; i++)
        if(csnt(i) && p[i-l]) res++;
    return res;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        int l, r; cin >> l >> r;
        cout << SieveOfEratosThenes(l,r) << endl;
    }
}