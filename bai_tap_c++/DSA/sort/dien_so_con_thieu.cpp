#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];
void InsertionSort(int a[], int n){
    for(int i = 1; i < n; i++){
        int tmp = a[i], pos = i-1;
        while(pos>=0 && a[pos]>tmp){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = tmp;
    }
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        // memset(cnt,0,sizeof(int)*1000001); //memset(cnt,0,sizeof(cnt));
        // int l = INT_MAX, r = INT_MIN;
        // for(int i = 0; i < n; i++){
        //     int x; cin >> x;
        //     cnt[x] = 1;
        //     if(l>x) l = x;
        //     if(r<x) r = x;
        // }
        // // InsertionSort(a,n);
        // int res = 0;
        // for(int i = l; i <= r; i++){
        //     if(cnt[i]==0) res++;
        // }
        // cout << res << endl;

        map<int,bool> mp;
        int l = INT_MAX, r = INT_MIN;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x] = true;
            if(l > x) l = x;
            if(r < x) r = x;
        }
        int res = 0;
        for(int i = l; i <= r; i++){
            if(!mp[i]) res++;
        }
        cout << res << endl;
    }
}