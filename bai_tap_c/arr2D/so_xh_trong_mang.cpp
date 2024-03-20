#include <iostream>
using namespace std;
int cnt[1000001];
int main(){
    int n; cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin >> a[i];
    }
    for(int i = 0; i < n;i++){
        if(!cnt[a[i]]){
            cout << a[i] << " "; cnt[a[i]] = 1;
        } 
    }
    return 0;
}