#include <bits/stdc++.h>
using namespace std;
int euler[1000001];

void Sieve(){
    for(int i = 0; i < 1000001; i++) euler[i] = i;
    for(int i = 2; i < 1000001; i++){
        if(euler[i]==i){
            euler[i] = i-1;
            for(int j = 2*i; j < 1000001; j+=i)
                euler[j] -= euler[j]/i;
        } 
    }
}
int main(){
    Sieve();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            cout << euler[i] << " ";
        }
        cout << endl;
    }
}