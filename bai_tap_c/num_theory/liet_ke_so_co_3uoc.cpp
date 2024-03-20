#include <bits/stdc++.h>
using namespace std;
int p[1001];
void SieveOfEratosThenes(){
    fill(p,p+1000,1);
    p[0] = p[1] = 0;
    for(int i = 2; i <= sqrt(1000); i++){
        if(p[i])
            for(int j = i*i; j <= 1000; j+=i)
                p[j] = 0;
    }
}
int main(){
    SieveOfEratosThenes();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        for(int i = 2; i*i <= n; i++)
            if(p[i]) cout << i*i << " ";
        cout << endl;
    }
}