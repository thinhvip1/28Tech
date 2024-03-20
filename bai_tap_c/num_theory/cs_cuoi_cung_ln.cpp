#include <bits/stdc++.h>
using namespace std;
bool lastDigit(int n){
    int r = n%10; n/=10;
    while(n){
        if(r<n%10) return false;
        n/=10;
    }
    return true;
}
bool nt(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0) return false;
    return n > 1;
}
int main(){
    int n; cin >> n;
    int cnt = 0;
    for(int i = 2; i < n; i++){
        if(lastDigit(i) && nt(i)){
            cnt++;
            cout << i << " ";
        }
    }
    cout << endl << cnt << endl;
    return 0;
}