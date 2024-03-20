#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
    return a > b ? a : b;
}
bool check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt == 1) return false;
    }
    if(n!=1) return false;
    return true;
}
int main(){
    int a, b; cin >> a >> b;
    for(int i = max(a,4); i <= b; i++)
        if(check(i)) cout << i << " ";
    return 0;
}