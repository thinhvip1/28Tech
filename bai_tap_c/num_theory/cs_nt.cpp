#include <bits/stdc++.h>
using namespace std;
void cs_nt(long long n){
    int prime[8] = {0};
    while(n){
        int r = n%10;
        if(r==2||r==3||r==5||r==7) prime[r]++;
        n/=10;
    }
    for(int i = 2; i < 8; i++){
        if(prime[i]) 
            cout << i << " " << prime[i] << endl;
    }
}
int main(){
    long long n; cin >> n;
    cs_nt(n);
}