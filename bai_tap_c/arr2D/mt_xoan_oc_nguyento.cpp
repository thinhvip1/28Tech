#include <bits/stdc++.h>
using namespace std;
int p[100];

bool isPrime(int n){
    if(n<2) return false;
    if(n==2||n==3) return true;
    if(n%2==0||n%3==0) return false;
    for(int i = 5; i*i <= n; i+=6){
        if(n%i==0||n%(i+2)==0) return false;
    }
    return true;
}
void mangnt(int n){
    int snt = 2;
    for(int i = 0; i < n;){
        if(isPrime(snt)){
            p[i++] = snt;
        }
        snt++;
    }
}
int main(){
    int n; cin >> n;
    int a[n][n], idx = 0, top = 0, bot = n-1, l = 0, r = n-1;
    mangnt(n*n);
    while(top<=bot && l<=r){
        for(int i = l; i <= r; i++)
            a[top][i] = p[idx++];
        top++;
        for(int i = top; i <= bot; i++)
            a[i][r] = p[idx++];
        r--;
        if(top<=bot){
            for(int i = r; i >= l; i--)
                a[bot][i] = p[idx++];
            bot--;
        }
        if(l<=r){
            for(int i = bot; i>= top; i--)
                a[i][l] = p[idx++];
            l++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}