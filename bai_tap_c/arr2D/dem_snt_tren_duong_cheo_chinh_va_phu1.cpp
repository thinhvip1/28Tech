#include <bits/stdc++.h>
using namespace std;
int nt[10001];
bool isPrime(int n){
    if(n < 2) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i = 5; i*i <= n; i+=6)
        if(n%i==0||n%(i+2)==0) return false;
    return true;
}
void sangnt(int n){
    for(int i = 0; i <= n; i++)
        nt[i] = 1;
    nt[0] = nt[1] = 0;
    for(int i = 2; i*i <= n; i++){
        if(nt[i]){
            for(int j = i*i; j <= n; j+=i){
               nt[j] = 0;
            }
        }
    }
}
int main(){
    int n; cin >> n;
    int a[n][n], max = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(max < a[i][j]) max = a[i][j];
        }
    } 
    //sang so nguyen to tu 0 den max
    sangnt(max);
    int res = 0;
    for(int i = 0; i < n; i++){
        if(nt[a[i][i]]){
            res++; nt[a[i][i]] = 0;
        }
        if(nt[a[i][n-i-1]]){
            res++;
            nt[a[i][n-i-1]] = 0;
        }
    }
    cout << res;
}