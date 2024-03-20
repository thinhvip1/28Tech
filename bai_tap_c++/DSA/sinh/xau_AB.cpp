#include <bits/stdc++.h>

using namespace std;

void init(string &s, int n){
    s.resize(n, 'A');
    // ok = true;  
}
void next(string &s, int n, bool &ok){
    int i = n-1;
    while(i >= 0 && s[i] == 'B'){
        s[i] = 'A';
        --i;
    }
    if(i == -1) 
        ok = false;
    else
        s[i] = 'B';
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s;
        init(s, n);
        bool ok = true;
        while(ok){
            cout << s << " ";
            next(s, n, ok);
        }
        cout << endl;
    }
}