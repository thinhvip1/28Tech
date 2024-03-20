#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int a[], int n){
    for(int i = 1; i < n-1; i++){
        int tmp = a[i], pos = i-1;
        while(pos >= 0 && a[pos] > tmp){
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = tmp;
    }
}

void BubbleSort(int a[], int n){
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(a[j] > a[j+1]) swap(a[j],a[j+1]);
        }
    }
}

void SelectionSort(int a[], int n){
    for(int i = 0; i < n; i++){
        int m = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[m]) m = j;
        }
        swap(a[m],a[i]);
    }
}

void merge(int a[], int l, int m, int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i = 0, j = 0;
    while(i<x.size() && j<y.size()){
        if(x[i] <= y[j]){
            a[l] = x[i];
            i++;
        }
        else{
            a[l] = y[j];
            j++;
        }
        l++;
    }
    while(i<x.size()){
        a[l] = x[i];
        l++; i++;
    }
    while(j<y.size()){
        a[l] = y[j];
        l++; j++;
    }
}
void MergeSort(int a[], int l, int r){
    if(l>=r) return;
    int m = (l+r)/2;
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    merge(a,l,m,r);
}

int Partition_Lomuto(int a[], int l, int r){
    int i = l - 1, pivot = a[r];
    for(int j = l; j < r; j++){
        if(a[j] < pivot){
            ++i;
            swap(a[j],a[i]);
        }
    }
    ++i;
    swap(a[i],a[r]);
    return i;
}
void QuickSort_Lomuto(int a[], int l, int r){
    if(l>=r) return;
    int p = Partition_Lomuto(a,l,r);
    QuickSort_Lomuto(a,l,p-1);
    QuickSort_Lomuto(a,p+1,r);
}

int Partition_Hoare(int a[], int l, int r){
    int i = l-1, j = r+1, pivot = a[l];
    while(1){
        do{
            i++;
        }while(a[i] < pivot);
        do{
            j--;
        }while(a[j] > pivot);
        if(i<j) swap(a[i],a[j]);
        else return j;
    }
}
void QuickSort_Hoare(int a[], int l, int r){
    if(l>=r) return;
    int p = Partition_Hoare(a,l,r);
    QuickSort_Hoare(a, l, p);
    QuickSort_Hoare(a, p+1, r);
}
int main(){
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for(int &x  : a) cin >> x;
    for(int &x : b) cin >> x;
    QuickSort_Hoare(a,0,n-1);
    QuickSort_Hoare(b,0,m-1);
    // for(int x : a) cout << x << " ";
    // cout << endl;
    // for(int x : b) cout << x << " ";
    int i = 0, j = 0, cnt = 0;
    while(i<n && j<m){
        if(a[i]>b[j]){
            cnt++;
            i++; j++;
        }
        else i++;
    }
    cout << cnt;
}