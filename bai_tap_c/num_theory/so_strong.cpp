#include <bits/stdc++.h>
using namespace std;
int gt(int n){
    int res= 1;
    for(int i = 2; i <= n; i++) res*=i;
    return res;
}
bool strong(int n){
    int tmp = n, sum = 0;
    while(tmp){
        sum += gt(tmp%10);
        tmp /= 10;
    }
    return n==sum;
}
int main(){
    int a, b; cin >> a >> b;
    bool flag = false;
    for(int i = a; i <= b; i++)
        if(strong(i)){
            cout << i << " "; flag = true;
        }
    if(!flag) cout << "0" ;
}