#include <bits/stdc++.h>
using namespace std;
int cnt1(int n){
    int cnt = 0;
    for(int i = 5; i <= n; i+=5){
        if(i%5==0){
            int tmp = i;
            while(tmp%5==0){
                cnt++; tmp/=5;
            }
        }
    }
    return cnt;
}
int cnt2(int n){
    int cnt = 0;
    for(int i = 5; i <= n; i*=5)
        cnt += n/i;
    return cnt;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        cout << cnt2(n) << endl;
    }
}