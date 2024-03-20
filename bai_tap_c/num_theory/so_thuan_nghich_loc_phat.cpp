#include <bits/stdc++.h>
using namespace std;

bool rev(int n){
    int rev = 0, sum = 0, tmp = n;
    bool flag = false;
    while(tmp){
        int r = tmp%10;
        if(r==6) flag = true;
        sum += r;
        rev = rev*10 + r;
        tmp/=10;
    }
    return n==rev && flag && sum%10==8;
}

int main(){
    int a,b; cin >> a >> b; int cnt = 0;
    for(int i = a; i <= b; i++){
        if(rev(i)){
            cout << i << " "; cnt++;
        }
    }    
    if(!cnt) cout << "-1";
}