#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int c = 0, l = 0;
    while(n){
        if((n%10)&1) l++;
        else c++;
        n/=10;
    }
    cout << l << " " << c;
}