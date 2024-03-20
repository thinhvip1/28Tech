#include <bits/stdc++.h>
using namespace std;

int count_substr(string s, int k){
    int res = 0;
    for(int i = 0; i < s.size(); i++){
        bool cnt[256];
        memset(cnt, 0, sizeof(cnt));
        int dem = 0;
        for(int j = i; j < s.size(); j++){
            if(cnt[s[j]] == 0) dem++;
            if(dem == k) res++;
            else if(dem > k) break;
            cnt[s[j]] = 1;
        }
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; cin >> s;
        int k; cin >> k;
        cout << count_substr(s, k) << endl;
    }
}