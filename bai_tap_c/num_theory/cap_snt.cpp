#include <bits/stdc++.h>
using namespace std;
int p[10000];
void SieveOfEratosThenes(){
    for(int i = 0; i < 10000; i++) p[i] = 1;
    p[0] = p[1] = 0;
    for(int i = 2; i <= 100; i++){
        if(p[i])
            for(int j = i*i; j <= 10000; j+=i)
                p[j] = 0;
    }
}
int main(){
    SieveOfEratosThenes();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        for(int i = 2; i <= n/2; i++){
            if(p[i] && p[n-i]) cout << i << " " << n-i << endl;
        }
    }
}