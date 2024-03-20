#include <bits/stdc++.h>
using namespace std;
int prime[1000001];
void Sieve(){
    fill(prime,prime+1000000,1);
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1000; i++){
        if(prime[i]){
            for(int j = i*i; j <= 1000000; j+=i){
                prime[j] = 0;
            }
        }
    }
}
int pow(int x, int y){
    int res = 1;
    while(y){
        if(y&1) res*=x;
        x*=x;
        y>>=1;
    }
    return res;
}
bool check(int a){
    if(a<10) return true;
    // a = 1234
    int r1 = a%10; // r1 = 4
    a/=10; // a=123
    int r2 = a%10; // r2 = 3
    a/=10; //a=12
    if(a==0){
        if(r1==r2) return false;
        return true;
    }
    while(a){
        if(r1==r2) return false;
        if(r1>r2){
            while(a){
                r1 = r2; // r1 = 3
                r2 = a%10; // r2 = 2
                if(r1<=r2) return false; //skip
                a/=10; // a=1
            }
        }
        else{
            while(a){
                r1=r2;
                r2 = a%10;
                if(r1>=r2) return false;
                 a/=10;
            }
        }
    }
    return true;
}
bool check1(int n){
    if(n<10) return true;
    int r1=n%10; n/=10;
    int r2=n%10; n/=10;
    if(n==0){
        if(r1!=r2) return true;
        return false;
    }
    while(n){
        int tmp1 = r1-r2;
        r1=r2;
        r2=n%10;
        if(tmp1*(r1-r2)<=0) return false;
        n/=10;
    }
    return true;
}
int main(){
    Sieve();
    int n; cin >> n;
    int cnt = 0;
    for(int i = pow(10,n-1); i < pow(10,n); i++){
        if(prime[i]&&check1(i)) cnt++;
    }
    cout << cnt << endl;
}