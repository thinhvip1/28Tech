#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(!b) return a;
    return gcd(b,a%b);
}
const int max_n = 1001;
int a[max_n];
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];

        //tim ucln cua day so
        int ucln = a[0];
        for(int i = 1; i < n; i++){
            ucln = gcd(ucln,a[i]);
        }

        // neu ucln = 1 thi in ra 0 vi khong co uoc nao khac 1
        if(ucln==1){
            cout << 0 << endl;
            continue;
        }

        //dem cac uoc cua ucln khac 1
        int cnt = 1;
        for(int i = 2; i <= sqrt(ucln); i++){
            if(ucln%i==0){
                cnt++;
                if(i!=ucln/i) cnt++;
            }
        }
        cout << cnt << endl;
    }
}