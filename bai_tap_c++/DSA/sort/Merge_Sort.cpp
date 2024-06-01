#include <bits/stdc++.h>
using namespace std;
// trộn 2 mảng đã sắp xếp
void merge_arr(int a[], int n, int b[], int m, int res[]){
    int i = 0, j =0;
    int cnt = 0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            res[cnt++] = a[i];
            ++i;
        }
        if(a[i]>=b[j]){
            res[cnt++] = b[j];
            ++j;
        }
    }
    if(i<n){
        while(i<n) res[cnt++] = a[i++];
    }
    if(j<m){
        while(j<m) res[cnt++] = b[j++];
    }
}
// trộn mảng 
void merge(int a[], int l, int m, int r){
    vector<int> x(a+l, a+m+1);
    vector<int> y(a+m+1, a+r+1);
    int i = 0, j = 0;
    while(i<x.size() && j<y.size()){
        if(x[i] <= y[j]){
            a[l] = x[i]; i++;
        }
        else a[l] = y[j++];
        l++;
    }
    while(i < x.size()) a[l++] = x[i++];
    while(j < y.size()) a[l++] = y[j++];
}
void MergeSort(int a[], int l, int r){
    if(l>=r) return; 
    int m = (l+r)/2;
    // điều kiện để chia mảng ban đầu thành nhiều mảng con có 1 phần tử
    MergeSort(a,l,m);
    MergeSort(a,m+1,r);
    merge(a,l,m,r); // trộn 2 mảng con sau khi đã chia mảng
}
// ap dung MergeSort để đếm cặp nghịch thế       a[i] > a[j] && i < j
int merge1(int a[], int l, int m, int r){
    vector<int> x(a+l,a+m+1);
    vector<int> y(a+m+1,a+r+1);
    int i = 0, j = 0, cnt = 0;
    while(i < x.size() && j < y.size()){
        if(x[i] <= y[j]) 
            a[l] = x[i++];
        else{
            // nếu x[i] > y[j] 
            a[l] = y[j++];
            cnt += x.size()-i; // cộng thêm các cặp nghịch thế
        }
        l++;
    }
    while(i < x.size()) 
        a[l++] = x[i++];
    while(j < y.size()) 
        a[l++] = y[j++];
    return cnt;
}
int cnt_inversion(int a[], int l, int r){
    int cnt = 0;
    if(l < r){
        // chia mảng ban đầu thành nhiều mảng con có 1 phần tử 
        int m = (l+r)/2;
        cnt += cnt_inversion(a,l,m);
        cnt += cnt_inversion(a,m+1,r);
        // cộng số cặp nghịch thế
        cnt += merge1(a,l,m,r);
    }
    return cnt;
}
int main(){
    srand(time(nullptr)); // time(nullptr) lay tgian hien tai 
    // để đảm bảo rằng các giá trị ngẫu nhiên sẽ thay đổi mỗi lần bạn chạy chương trình.
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    // for(int &x : a){
    //     x = rand() % 100;
    // }
    // for(int x : a) cout << x << " ";
    // cout << endl;
    // Merge sort
    // MergeSort(a,0,n-1);
    // for(int x : a) cout << x << " ";
    
    // đếm cặp nghịch thế
    cout << cnt_inversion(a,0,n-1);
}