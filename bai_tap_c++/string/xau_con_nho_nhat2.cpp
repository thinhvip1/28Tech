#include <bits/stdc++.h>
using namespace std;
string substr(string s1){
    set<char> se;
    for(char x : s1) se.insert(x);
    string res = "";
    for(char x : se) res += x;
    return res;
}
int solve(string s1){
    string s2 = substr(s1);
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
    if(idx!=-1) return ans;
    else return -1;
}
int solve2(string s1){
    map<char, int> mp;
    for(char x : s1) mp[x]++;
    int len = mp.size();
    int dem[256] = {0};
    int ans = INT_MAX, left = 0, cnt = 0;
    for(int i = 0; i < s1.size(); i++){
        dem[s1[i]]++;
        if(dem[s1[i]] == 1) cnt++;
        if(cnt == len){
            while(dem[s1[left]] > 1){
                if(dem[s1[left]] >= 1)
                    dem[s1[left]]--;
                left++;
            }
            if(ans > i-left+1)
                ans = i-left+1;
        }
    }
    return ans;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s1; cin >> s1;
        // cout << solve(s1) << endl;
        cout << solve2(s1) << endl;
    }
}