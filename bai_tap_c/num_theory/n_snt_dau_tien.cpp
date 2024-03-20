#include <bits/stdc++.h>
using namespace std;
// xap xi so luong so nguyen to nho hon bang n la: n/ln(n)
bool prime[1500001];
void SieveOfEratosThenes(){
    for(int i = 0; i < 1500001; i++) prime[i] = true;
    prime[0] = prime[1]  = 0;
    for(int i = 2; i*i <= 1500000; i++)
        if(prime[i]) 
            for(int j = i*i; j <= 1500000; j+=i)
                prime[j] = false;
}
int main(){
    SieveOfEratosThenes();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int i = 2, cnt = 0;
        while(cnt < n){
            if(prime[i]){
                cnt++;
                cout << i << endl;
            }
            i++;
        }
    }
}