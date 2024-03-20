#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char c[n];
    cin >> c;
    int cnt = 0;
    for(int i = 0; i < n-1; i++){
        if(c[i]==c[i+1]){
            cnt++;
        }
    }
    cout << cnt;
}