#include <bits/stdc++.h>
using namespace std;
int len(char c[]){
    int max = 0, cnt = 1;
    for(int i = 1; i < strlen(c); i++){
        if(c[i]!=c[i-1]){
            cnt++; 
        }
        else cnt = 1;
        if(max<cnt) max = cnt;
    }
    return max;
}
void solve(char c[]){
    int max = 0, l, r, l_tmp, r_tmp;
    for(int i = 0; i < strlen(c)-1; i++){
        l_tmp = i;
        while(c[i]!=c[i+1]&&i<strlen(c)-1) ++i;
        r_tmp = i;
        if(max<=r_tmp-l_tmp+1){ // neu cung do dai thi in ra xau cuoi cung
            max = r_tmp - l_tmp + 1;
            l = l_tmp;
            r = r_tmp;
        }
    }
    while(l<=r) cout << c[l++];
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        cout << len(c) << endl;
        solve(c);
        cout << endl;
    }
}