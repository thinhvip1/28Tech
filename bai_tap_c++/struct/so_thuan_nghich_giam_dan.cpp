#include <bits/stdc++.h>
using namespace std;

struct num{
    string value;
    int fre;
    bool operator > (const num other){
        if(value.size() != other.value.size()) return value.size() > other.value.size();
        return value > other.value;
    }
};
// kiem tra so thuan ngich
bool check_tn(string s){
    if(s.size() <= 1) return false;
    int l = 0, r = s.size()-1;
    while(l < r){
        if(s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}
int main(){
    auto cmp = [](const string a, const string b){
        // if(a.size() != b.size()) return a.size() > b.size();
        // return a > b;
        return (a.size() != b.size() ? a.size() > b.size() : a > b);
    };
    map<string, int, decltype(cmp)> mp(cmp);
    string ss;
    while(cin >> ss){
        if(check_tn(ss)) mp[ss]++;
    }
    
    /* stringstream ss(str);
    string word;
    int i = 0;
    while(ss >> word){
        if(check_tn(word)){
            mp[word]++;
        }
    } */

    for(auto it : mp) cout << it.first << " " << it.second << endl;
}