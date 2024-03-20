#include <bits/stdc++.h>
using namespace std;
int last_digit(int n){
    if(n==0) return 1;
    if(n%4==0) return 6;
    if(n%4==1) return 8;
    if(n%4==2) return 4;
    if(n%4==3) return 2;
}
int main(){
    int n; cin >> n;
    cout << last_digit(n) << endl;
}