#include <bits/stdc++.h>
using namespace std;
//Linear search : duyệt tất cả các phần tử trong mảng. O(n)
int lin_search(int a[], int n, int x){
    for(int i = 0; i < 0; i++)
        if(a[i]==x) return i;
    return -1;
}

//Binary search: O(logn) 
//Các phần tử phải được sắp xếp tăng dần hoặc giảm dần
int bin_search(int a[], int l, int r, int x){
    if(l>r) return -1; //điều kiện dừng khi ko tìm đc x trong mảng
    int mid = (l+r)/2;
    if(x==a[mid]) return mid;
    // nếu x < a[mid] thì tìm x trong khoảng ở bên trái a[mid]
    if(x < a[mid]) return bin_search(a,l,mid-1,x);
    // nếu x < a[mid] thì tìm x trong khoảng ở bên phải a[mid]
    if(x > a[mid]) return bin_search(a,mid+1,r,x);
}

// tìm vị trí của phần tử đầu tiên > x trong 1 mảng đã sắp xếp
int upper_bound(int a[], int n, int x){
    int res = -1, l = 0, r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(a[mid]<=x) l = mid + 1;
        else{
            res = mid;
            r = mid - 1;
        }
    }
    return res;
}
// upper_bound : tra ve con tro den phan tu dau tien > key
// upper_bound(iter1, iter2, key);
// nếu tất cá các phần tử trong mảng <= key thì trả về iter2

// lowwer_bound : tra ve con tro tro den phan tu dau tien >= key
// lower_bound(iter1, iter2, key);
// nếu tất cả phần tử trong mảng < key thì trả về iter2
int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    // cout << upper_bound(a,n,x);
    auto it = lower_bound(a, a + n, x);
    if(it != a + n) cout << it - a;
    else cout << "Not Found";
    // int *it = lower_bound(a, a + n, x);
    // if(it != a + n) cout << *it;
    // else cout << "khong tim thay phan tu nao >= " << x;
}