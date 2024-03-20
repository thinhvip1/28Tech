#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n){
    int c25 = 0, c50 = 0;
    if(a[0]!=25) return false;
    for(int i=0;i<n;i++){
        if(a[i]==25){
            c25++;
        }
        else if(a[i]==50){
            if(!c25) return false;
            c25--; c50++;
        }
        else{
            if(!c25 || (c25<3&&!c50)) return false;
            if(c50){ c50--; c25--;}
            else c25-=3;
        }
    }
    return true;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    if(check(a,n)) cout << "YES";
    else cout << "NO";
}