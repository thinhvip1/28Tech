#include <bits/stdc++.h>
using namespace std;
// #define ll long long 
typedef long long ll;
// đếm số lượng số nguyên tố cùng nhau với n mà nằm trong đoạn từ 1 đến n;
ll euler(ll n){
    ll cnt = n;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            cnt -= cnt/i;
            while(n%i==0) n/=i;
        }
    }
    if(n!=1) cnt -= cnt/n;
    return cnt;
}
int main(){
    ll n;  cin >> n;
    cout << euler(n) << endl;
}