#include <bits/stdc++.h>
using namespace std;
long long rev(long long n){
    long long sum = 0;
    while(n){
        sum = sum*10 + n%10;
        n/=10;
    }
    return sum;
}
void solve(long long n){
    long long m = rev(n);
    int prime[10] = {0};
    while(n){
        int r = n%10;
        if(r==2||r==3||r==5||r==7) prime[r]++;
        n/=10;
    }
    while(m){
        int r = m%10;
        if((r==2||r==3||r==5||r==7) && prime[r]){
            cout << r << " " << prime[r] << endl;
            prime[r] = 0;
        }
        m/=10;
    }
}
int main(){
    long long n; cin >> n;
    solve(n);
}