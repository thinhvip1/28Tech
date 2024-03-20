#include <bits/stdc++.h>
using namespace std;

// int prime[1000000000];

int isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0) return 0;
    return n > 1;
}
void phantich1(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n%i==0){
            cout << i << " ";
            n/=i;
        }
    }
    if(n!=1) cout << n;
}
void phantich2(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            cout << i << " ";
            while(n%i==0) n/=i;
        }
    }
    if(n!=1) cout << n;
}
void phantich3(int n){
    for(int i =2; i <= sqrt(n); i++){
        int cnt = 0;
        if(n%i==0){
            while(n%i==0){
                n/=i;
                cnt++;
            }
            cout << i << "(" << cnt << ") ";
        }
    }
    if(n!=1) cout << n << "(1)";
}
void phantich4(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
                cout << i;
                if(n!=1) cout << "x";
            }
        }
    }
    if(n!=1) cout << n;
}
void phantich5(int n){
    cout << n << " = ";
    for(int i = 2; i <=sqrt(n); i++){
        int cnt = 0;
        if(n%i==0){
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout << i << "^" << cnt;
            if(n!=1) cout << " * ";
        }
    }
    if(n!=1) cout << n << "^1";
}
int main(){
    int n; cin >> n;
    phantich1(n);
    cout << endl;
    phantich2(n);
    cout << endl;
    phantich3(n);
    cout << endl;
    phantich4(n); cout << endl;
    phantich5(n); 
}