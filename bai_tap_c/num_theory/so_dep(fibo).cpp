#include <bits/stdc++.h>
using namespace std;

bool fib(int n){
    int fib[13];
    fib[0]=0; fib[1]=1;
    for(int i = 2; i < 13; i++){
        fib[i]=fib[i-1]+fib[i-2];
        if(n==fib[i]) return true;
    }
    return false;
}
int sum_cs(int n){
    int sum = 0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return fib(sum);
}
bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0) return false;
    return n > 1;
}
int main(){
    int a, b; cin >> a >> b;
    int flag = false;
    for(int i = a; i <= b; i++){
        if(nt(i) && sum_cs(i)){
            flag = true;
            cout << i << " ";
        }
    }
    if(!flag) cout << "-1";
}