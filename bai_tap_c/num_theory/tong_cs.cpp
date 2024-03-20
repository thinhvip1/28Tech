#include <bits/stdc++.h>
using namespace std;
int sum_cs(long long n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}

int main(){
    int tc; cin >> tc;
    while(tc--){
        long long n; cin >> n;
        cout << sum_cs(n) << endl;
    }
}