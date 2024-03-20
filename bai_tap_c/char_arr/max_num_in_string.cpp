#include <bits/stdc++.h>
using namespace std;
int max_num(char c[]){
    int max = -1e9, res = 0;
    for(int i = 0; i < strlen(c); i++){
        if(c[i]>=48 && c[i]<=57){
            res = res*10 + c[i] - 48;
        }
        else{
            if(max < res) max = res;
            res = 0;
        }
        if(i==strlen(c)-1 && max < res) max = res;
    }
    return max;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000];
        cin.getline(c,1000);
        cout << max_num(c) << endl;
    }
}