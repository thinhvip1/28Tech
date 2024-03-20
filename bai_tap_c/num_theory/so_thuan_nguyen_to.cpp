#include <bits/stdc++.h>
using namespace std;

int isPrime1(int n){
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i==0) return 0;
    return n > 1;
}
bool isPrime2(int n){
    int sum = 0;
    while(n){
        int r = n%10;
        sum += r;
        if((r!=2&&r!=3&&r!=5&&r!=7)) return false;
        n/=10;
    }
    return isPrime1(sum);
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int a, b; cin >> a >> b;
        int cnt = 0;
        for(int i = a; i <= b; i++){
            if(isPrime2(i) && isPrime1(i))
                cnt++;
        }
        cout << cnt << endl;
    }
}