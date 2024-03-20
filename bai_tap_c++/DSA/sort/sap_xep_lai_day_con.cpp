#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int l, r;
        for(int i = 0; i < n-1; i++)
            if(a[i] > a[i+1]){
                l = i;
                break;
            }
        for(int i = n-1; i > 0; i--){
            if(a[i] < a[i-1]){
                r = i;
                break;
            }
        }
        int min1 = *min_element(a+l, a+r+1);
        int max1 = *max_element(a+l, a+r+1);
        for(int i = 0; i < n; i++){
            if(min1 < a[i]){
                l = i;
                break;
            }
        }
        for(int i = n-1; i >= 0; i--){
            if(max1 > a[i]){
                r = i;
                break;
            }
        }
        cout << l+1 << " " << r+1 << endl;
    }
}