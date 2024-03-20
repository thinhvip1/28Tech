#include <bits/stdc++.h>
using namespace std;
// xau con chan. vd s = "1234" co nhung xau con chan la: "2" , "4", "12", "34" , "234" , "1234"
int substr(char c[], int n){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if((c[i]-48)%2==0) cnt += i+1;
    }
    return cnt;
}
int main(){
    int n; cin >> n;
    char s[n];
    cin >> s;
    cout << substr(s,n);
}