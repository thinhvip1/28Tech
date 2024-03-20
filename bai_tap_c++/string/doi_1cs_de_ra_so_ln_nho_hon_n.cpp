#include <bits/stdc++.h>
using namespace std;
// tìm chữ số đầu tiên <= x trong 1 số nguyên lớn
int first_pos(string s, int l, int r, char x){
    int res = -1;
    while(l <= r){
        int m = (l+r)/2;
        if(s[m] == x){
            res = m;
            r = m-1;
        }
        else if(s[m] < x) l = m+1;
        else r = m-1;
    }
    return res;
}
int main(){
    int tc; cin >> tc;
    // cin.ignore();
    while(tc--){
        string s;
        // getline(cin, s);
        cin >> s;
        bool flag = false;
        for(int i = s.size()-1; i > 0; i--){
            if(s[i-1] <= s[i]) continue;
            else{
                int idx = i-1;
                for(int j = s.size()-1; j > idx; j--){
                    if(s[idx] > s[j]){
                        while(s[j-1]==s[j]) j--;
                        swap(s[j],s[idx]);
                        // int fp = first_pos(s,idx+1,s.size()-1,s[j]);
                        // swap(s[fp],s[idx]);
                        flag = true;
                        break;
                    }
                }
                break;
            }
        }
        if(flag && s[0]!='0') cout << s << endl;
        else cout << "-1\n";
    }
    return 0;
}