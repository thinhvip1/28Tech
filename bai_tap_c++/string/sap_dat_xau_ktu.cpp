#include <bits/stdc++.h>
using namespace std;
/*
input:
3
geeksforgeeks
bbbabaaacd
bbbbb
output:
1
1
0
*/
int check(string s){
    int a[26] = {0}; // 'a' -> 'z' : co 26 ki tu
    for(char x : s) a[x-97]++;
    int max_fre = *max_element(a, a + 26);
    if(s.size() - max_fre >= max_fre-1) return 1; // true
    if(max_fre - (s.size() - max_fre) <= 1) return 1; //false
    return 0;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        string s; 
        cin >> s;
        cout << check(s) << endl;
    }
}