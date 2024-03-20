#include <bits/stdc++.h>
using namespace std;
bool rev(int n){
    int sum = 0, tmp = n;
    while(n){
        sum = sum*10 + n%10;
        n/=10;
    }
    return sum==tmp;
}
bool uoc_nt(int n){
    int cnt = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            cnt++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1) cnt++;
    return cnt>=3;
}
int main(){
    int a, b; cin >> a >> b;
    bool flag = false;
    for(int i = a; i <= b; i++){
        if(rev(i) && uoc_nt(i)){
            cout << i << " ";
            flag = true;
        }
    }
    if(!flag) cout << "-1";
    return 0;
}