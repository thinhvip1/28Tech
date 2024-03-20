#include <bits/stdc++.h>
using namespace std;
//dãy ưu thế: là dãy có n số: nếu n lẻ thì số số lẻ > số số chẵn / nếu n chẵn thì số số chẵn > số số lẻ
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n = 0, c = 0, l = 0;
        char kitu;
        while(kitu != '\n'){
            int x; cin >> x; n++;
            if(x&1) l++;
            else c++;
            kitu = getchar();
        }
        if((n&1 && l > c)||(!n&1 && c > l)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}