#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[m]) m = j;
        }
        if(i!=m){
            int tmp = a[i];
            a[i] = a[m];
            a[m] = tmp;
        }
    }
}
int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int min(int a, int b){
    return a > b ? b : a;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n ; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        qsort(a,n,sizeof(int),cmp);
        int min_val = a[1] - a[0], cnt = 1;
        for(int i = 1; i < n-1;i++){
            if(a[i+1]-a[i] < min_val){
                min_val = a[i+1]-a[i];
                cnt = 1;
            }
            else if(a[i+1]-a[i]==min_val) cnt++;
        }
        cout << min_val << " " << cnt << endl;
    }
}