#include <bits/stdc++.h>
using namespace std;
int sum_cs(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
bool smith(int n){
    int sum1 = sum_cs(n), sum2 = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            while(n%i==0){
                sum2 += sum_cs(i);
                n/=i;
            }
        }
    }
    if(n!=1) sum2 += sum_cs(n);
    return sum1 == sum2;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        if(smith(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}