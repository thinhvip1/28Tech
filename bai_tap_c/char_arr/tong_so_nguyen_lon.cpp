#include <bits/stdc++.h>
using namespace std;
int max(int c, int d){
    return c > d ? c : d;
}
int min(int c, int d){
    return c < d ? c : d;
}
void rev(int c[], int n){
    int l = 0, r = n-1;
    while(l<r){
        int tmp = c[l];
        c[l] = c[r];
        c[r] = tmp;
        l++; r--;
    }
}
void strtoint(char c[], int x[] , int n){
    for(int i = 0; i < n; i++)
        x[i] = c[i] - 48;
}
void add(char c[], char d[]){
    int n1 = strlen(c), n2 = strlen(d), n = 0;
    int n_max = max(n1,n2);
    int x[n_max], y[n_max], z[n_max+1]; // can than khong loi tran so
    // chuyen mang char thanh mang int
    strtoint(c,x,n1); 
    strtoint(d,y,n2);

    // neu 2 mang co do dai khac nhau thi them 0 vao cuoi mang do dai nho hon den khi 2 mang bang nhau
    if(n1 < n2)
        for(int i = n1; i < n2; i++) x[i] = 0;
    else if(n1 > n2)
        for(int i = n2; i < n1; i++) y[i] = 0;
    
    // reverse mang int
    rev(x,n1);
    rev(y,n2);

    // tinh tong tung ptu trong mang voi nhau. De y nhớ
    int tmp = 0;
    for(int i = 0; i < n_max; i++){
        int sum = x[i]+y[i]+tmp;
        z[n++] = sum%10;
        tmp = sum/10;
    }
    if(tmp) z[n++] = tmp; // neu xet den cuoi cung ma van con nho thi them 1 ptu cho mang tong
    for(int i = n-1; i >=0; i--){
        cout << z[i];
    }
}
// void reverse(char c[]){
//     int l = 0, r = strlen(c)-1;
//     while(l<r){
//         char tmp = c[l];
//         c[l] = c[r];
//         c[r] = tmp;
//     }
// }
// void add1(char c[], char d[]){
//     int n1= strlen(c), n2 = strlen(d);
//     int n_max = max(n1,n2), n = 0;
//     char sum[n_max+1];
//     reverse(c);
//     reverse(d);
//     for(int i = 0; i < )
// }
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000], d[1000];
        cin.getline(c,1000);
        cin.getline(d,1000);
        add(c,d);
        cout << endl;
    }
    return 0;
}