#include <bits/stdc++.h>
using namespace std;
void selectionSort(int a[], int n){
    for(int i = 0; i < n-1; i++){
        int m = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[m]) m = j;
        }

        int tmp = a[i];
        a[i] = a[m];
        a[m] = tmp;
    }
}
int cmp1(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int cmp2(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            // c[i*2] = a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            // c[i*2+1] = b[i];
        }
        selectionSort(a,n); // sap xep bang selectionSort
        qsort(b,n,sizeof(int),cmp1); // sap xep tang dan bang qsort
        for(int i = 0; i < n; i++){
            cout << a[i] << " " << b[n-i-1] << " ";
        }
        cout << endl;
    }
}