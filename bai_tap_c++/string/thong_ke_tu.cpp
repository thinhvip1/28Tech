#include <bits/stdc++.h>
using namespace std;
int cmp(pair<string,int> a, pair<string,int> b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}
bool check(char c){
    return c==' ' || c==',' || c=='!' || c=='.' || c=='-' || c=='?';
}
void push(string s, map<string, int> &mp){
    string tmp = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i]==' ') continue;
        while(!check(s[i]) && i < s.size()){
            tmp += s[i];
            i++;
        }
        mp[tmp]++;
        tmp = "";
    }
}
void solve(map<string,int> mp){
    vector<pair<string,int>> v;
    for(auto it : mp) v.push_back(it);
    sort(v.begin(), v.end(), cmp);
    for(auto it : v) cout << it.first << " " << it.second << endl;
}
int main(){
    int n; cin >> n;
    map<string, int> mp;
    cin.ignore();
    // string s;
    while(n--){
        string s;
        getline(cin, s);
        push(s, mp);
    }
    solve(mp);
}