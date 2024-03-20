#include <bits/stdc++.h>
using namespace std;

int max(int a, int b){
    return a > b ? a : b;
}
void SeiveOfEratosThenes(int l, int r){
    int p[r-l+1];
    fill(p,p+r-l+1,1);
    for(int i = 2; i*i <= r; i++){
        for(int j = max(i*i,(l+i-1)/i*i); j <= r; j+=i)
            p[j-l] = 0;
    }
    for(int i = max(l,2); i <= r; i++){
        if(p[i-l]) cout << i << " ";
    }
}
int main(){
    int l, r; cin >> l >> r;
    SeiveOfEratosThenes(l,r);
    return 0;
}