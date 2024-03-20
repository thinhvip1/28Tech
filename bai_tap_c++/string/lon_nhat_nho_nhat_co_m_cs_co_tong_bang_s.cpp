#include <bits/stdc++.h>
using namespace std;
/*
input:
2 15
output:
69 96
*/
string inverse_str(string s){
    int l = 0, r = s.size()-1;
    while(l < r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    return s;
}
string max_num(int m, int s){
    string max_res = "";
    for(int i = 0; i < m; i++){
        if(s >= 9){
            max_res = max_res + '9';
            s -= 9;
        }
        else if(s != 0){
            max_res = max_res + (char)(s+48);
            s = 0;
        }
        else max_res = max_res + '0';
    }
    return max_res;
}
string min_num(int m, int s){
    string max_res = max_num(m, s);
    string min_res = "";
    if(max_res[max_res.size()-1] != '0') return inverse_str(max_res);
    s--; // để dành 1 đơn vị cho hàng đầu tiên
    for(int i = 0; i < m-1; i++){
        if(s >= 9){
            min_res = '9' + min_res;
            s -= 9;
        }
        else if(s != 0){
            min_res = (char)(s+48) + min_res;
            s = 0;
        }
        else min_res = '0' + min_res;
    }
    min_res = '1' + min_res;
    return min_res;
}
int main(){
    int m, s; cin >> m >> s;
    if(s > m*9 || (s==0 && m>1)){
        cout << "-1 -1";
        return 0;
    }

    string max_res = max_num(m,s);  
    string min_res = min_num(m,s);

    cout << min_res << " " << max_res;
    return 0;
}