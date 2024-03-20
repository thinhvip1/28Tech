#include <bits/stdc++.h>
using namespace std;
void hcn1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i&1 && j&1) || (!(j&1) &&!(i&1))) cout << "1";
            else cout << "0";
        }
        cout << endl;
    }
}
void hcn2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= i+n-1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void hcn3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = n*(i-1)+1; j <= n*i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void hcn4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            if(j<=n-i) cout << "~";
            else cout << i;
        cout << endl;
    }
}
void hcn5(int n){
    for(int i = 1; i <= n; i++){
        int tmp = i;
        for(int j = 1; j <= i; j++){
            cout << tmp << " ";
            tmp += n - j;  
        }
        cout << endl;
    }
}
void hcn6(int size){
    int n = 2*size-3;
    int a[n][n];
    int h1 = 0, h2 = n-1, c1 = 0, c2 = n-1, cnt = size-1;
    while(h1<=h2 && c1<=c2){
        for(int i = c1; i <= c2; i++) a[h1][i] = cnt;
        h1++;
        for(int i = h1; i <= h2; i++) a[i][c2] = cnt;
        c2--;
        if(h1<h2){
            for(int i = c2; i >= c1; i--) a[h2][i] = cnt;
            h2--;
        }
        if(c1<c2){
            for(int i = h2; i >= h1; i--) a[i][c1] = cnt;
            c1++;
        }
        cnt--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << a[i][j];
        cout << endl;
    }
}
int min(int a, int b){
    return a>b ? b : a;
}
void hcn6_p2(int size){
    int n = 2*size-3;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int min_dis=min(min(j-1,n-j),min(i-1,n-i));
            cout << size-1-min_dis;
        }
        cout << endl;
    }
}
void hcn7(int n){
    int a[n][n];
    int h1 = 0, c1 = 0, cnt = n;
    while(h1<n && c1<n){
        for(int i = c1; i < n; i++) a[h1][i] = cnt;
        h1++;
        if(h1!=n)
            for(int i = h1; i < n; i++) a[i][c1] = cnt;
        c1++;
        cnt--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) 
            cout << a[i][j] << " ";
        cout << endl;
    }
}
void hcn7_p2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int min_dis = min(i-1,j-1);
            cout << n-min_dis << " ";
        }
        cout << endl;
    }
}
int abs(int x){
    if(x<0) return 0-x;
    return x;
}
void hcn8(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << 1+abs(j-i) << " ";
        }
        cout << endl;
    }
}
void hcn8_p2(int n){
    int a[n][n];
    for(int i = 0; i < n; i++){
        int cnt = i+1;
        for(int j = 0; j < n; j++){
            if(j<i) a[i][j] = cnt--;
            else if(j==i) a[i][j] = 1;
            else a[i][j] = a[i][j-1] + 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cout << a[i][j] <<  " ";
        cout << endl;
    }
}
void hcn8_p3(int n){
    for(int i = 1; i <= n; i++){
        int cnt = i;
        for(int j = 1; j <= n; j++){
            if(j<i) cout << cnt-- << " ";
            else cout << cnt++ << " ";
        }
        cout << endl;
    }
}
int main(){
    int n; cin >> n;
    // hcn1(n); cout << endl;
    // hcn2(n);
    // hcn3(n);
    // hcn4(n);
    // hcn5(n);
    // hcn6(n); cout << endl;
    // hcn6_p2(n);
    // hcn7(n); cout << endl;
    // hcn7_p2(n);
    hcn8(n); cout << endl;
    hcn8_p2(n); cout << endl;
    hcn8_p3(n);
}