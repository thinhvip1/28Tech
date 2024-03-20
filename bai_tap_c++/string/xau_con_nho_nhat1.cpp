#include <bits/stdc++.h>
using namespace std;

void solve(string s1, string s2){
    int dem1[256] = {0}, dem2[256] = {0};
    for(char x : s2){
        dem2[x]++;
    }
    int ans = INT_MAX, left = 0, cnt = 0, idx = -1;
    for(int i = 0; i < s1.size(); i++){
        dem1[s1[i]]++;
        if(dem1[s1[i]] <= dem2[s1[i]]) cnt++;
        if(cnt == s2.size()){
            while(dem1[s1[left]] > dem2[s1[left]] || dem2[s1[left]]==0){
                if(dem1[s1[left]] > dem2[s1[left]]) dem1[s1[left]]--;
                ++left;
            }
            if(ans > i-left+1){
                ans = i-left+1;
                idx = left;
            }
        }
    }
    if(idx!=-1){
        // for(int i = idx; i < ans+idx; i++) cout << s1[i];
        // cout << endl;
        cout << s1.substr(idx,ans) << endl;
    }
    else cout << "-1\n";
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s1, s2;
        cin >> s1 >> s2;
        solve(s1, s2);
    }
}