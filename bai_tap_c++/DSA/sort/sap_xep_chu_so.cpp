#include <bits/stdc++.h>
using namespace std; 
int cs[10];
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
// cach1
        /* set<int> s;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            while(x){
                int r = x%10;
                s.insert(r);
                x/=10;
            }
        }
        for(auto it : s){
            cout << it << " ";
        }
        cout << endl; */
// cach2
        /* memset(cs,0,sizeof(cs));
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            while(x){
                int r = x%10;
                cs[r]++;
                x/=10;
            }
        }
        for(int i = 0; i < 10; i++){
            if(cs[i]) cout << i << " ";
        }
        cout << endl; */
// cach3
        cin.ignore();
        string s; getline(cin,s);
        int cs[10] = {0};
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])) cs[s[i] - 48] = 1;
        }
        for(int i = 0; i < 10; i++)
            if(cs[i]) cout << i << " ";
        cout << endl;
    }
}