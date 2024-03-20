#include <bits/stdc++.h>
using namespace std;
int count(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        if(n%i==0) cnt++;
    return cnt;
}
int count1(int n){
    int ans = 1;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            ans *= (cnt + 1);
        }
    }
    if(n!=1) ans *= 2;
    return ans;
}
int count2(int n){
    int ans = 2;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            if(i==n/i) ans++;
            else ans += 2;
        }
    }
    return ans;
}
int main(){
    int n; cin >> n;
    cout << count(n) << endl;
    cout << count1(n) << endl;
    cout << count2(n) << endl;
}