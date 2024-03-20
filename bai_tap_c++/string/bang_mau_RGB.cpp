#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/* ll giai_thua(int n){
    if(n==0) return 1;
    return n * giai_thua(n-1);
} */
ll gt[21];
void init(){
    gt[0] = 1;
    for(int i = 1; i < 21; i++){
        gt[i] = i * gt[i-1];
    }
}
// r + b + g = n, R >= r, B >= b, G >= g
ll solve(int n, int r, int b, int g){
    ll res = 0;
    // for(int R = r; R <= n-b-g; R++)
    //     for(int B = b; B <= n-R-g; B++)
    //             res += (gt[n] / (gt[R] * gt[B] * gt[n-R-B]));
    for(int R = n; R >= r; R--)
        for(int G = n-R; G >= g; G--){
            int B = n-R-G;
            if(B >= b) res += (gt[n] / (gt[R]*gt[B]*gt[G]));
        }
    return res;
}
int main(){
    init();
    int tc; cin >> tc;
    while(tc--){
        int n, r, b, g;
        cin >> n >> r >> b >> g;
        cout << solve(n, r, b, g) << endl;
    }
}