#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k){
    multiset<int> ms;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        ms.insert(x);
    }
    multiset<int>::reverse_iterator rit = ms.rbegin();
    for(int i = 0; i < k; i++){
        cout << *rit++ << " ";
        // --rit;
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n, k; cin >> n >> k;
        solve(n,k);
        cout << endl;
    }
}