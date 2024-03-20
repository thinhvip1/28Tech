#include <bits/stdc++.h>
using namespace std;
//do dùng mảng nên k thể sắp xếp được số âm và cũng giới hạn cận trên
int cnt[10000];
void CountingSort(int a[], int n){
    int min_num = a[0], max_num = a[0];
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
        if(min_num>a[i]) min_num = a[i];
        if(max_num<a[i]) max_num = a[i];
    }
    for(int i = min_num; i <= max_num; ){
        if(cnt[i]){
            cout << i << " ";
            cnt[i]--;
        }
        else i++;
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    CountingSort(a,n);
}