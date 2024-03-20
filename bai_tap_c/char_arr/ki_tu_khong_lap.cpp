#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; cin >> tc; cin.ignore();
    while(tc--){
        char c[1000]; int cnt[256] = {0};
        cin.getline(c,1000);
        for(int i = 0; i < strlen(c); i++){
            cnt[c[i]]++;
        }
        for(int i = 0; i < strlen(c); i++){
            if(cnt[c[i]]==1){
                cout << c[i];
            }
        }
        cout << endl;
    }
    return 0;
}