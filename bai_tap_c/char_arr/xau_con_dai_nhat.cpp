#include <bits/stdc++.h>
using namespace std;
void solve(char c[]){
    int n = strlen(c);
    char max_c;
    for(int i = 0; i < n; i++){
        max_c = c[i];
        for(int j = i+1; j < n; j++){
            if(c[j]>max_c){
                max_c = c[j];
            }
        }
        for(int j = i; j < n;j++){
            if(c[j]==max_c){
                cout << c[j];
                i = j;
            }            
        }
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        char c[1000];
        cin >> c;   
        solve(c);
        cout << endl;
    }
    
}