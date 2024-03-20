#include <bits/stdc++.h>
using namespace std;
int cs(int n){
    int cnt = 0;
    while(n){
        n/=10;
        cnt++;
    }
    return cnt;
}
bool arm(int n){
    int sum = 0, tmp = n, cnt = cs(n);
    while(tmp){
        int r = tmp%10;
        sum += (int)pow(r,cnt);
        tmp/=10;
    }
    return sum==n;
}
int main(){
    int n; cin >> n;
    if(arm(n)) cout << "1";
    else cout << "0";
}