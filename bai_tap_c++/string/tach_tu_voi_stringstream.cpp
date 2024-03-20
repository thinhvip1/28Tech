#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        string s; 
        getline(cin,s);
        stringstream ss(s);
        int cnt = 0;
        string word;
        while(ss >> word){
            cnt++;
        }
        cout << cnt << endl;
    }
}