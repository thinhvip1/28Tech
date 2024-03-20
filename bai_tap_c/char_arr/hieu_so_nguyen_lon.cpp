#include <bits/stdc++.h>
using namespace std;
void reverse(int c[], int n){
    int l = 0, r = n-1;
    while(l<r){
        int tmp = c[l];
        c[l] = c[r];
        c[r] = tmp;
        l++; r--;
    }
}
int max(int a, int b){
    return a > b ? a : b;
}
void str_to_int(char c[], int x[], int n){
    for(int i = 0; i < n; i++)
        x[i] = c[i]-48;
}
void difference(char c[], char d[]){
    int n1 = strlen(c), n2 = strlen(d), n = 0;
    // coi mang c > mang d
    int x[n1], y[n1], res[n1];

    //chuyen mang char thanh mang int
    str_to_int(c,x,n1);
    str_to_int(d,y,n2);

    // dao nguoc mang int
    reverse(x,n1);
    reverse(y,n2);

    // chen so 0 vao mang co do dai nho hon den khi do dai 2 mang bang nhau
    for(int i = n2; i < n1; i++) y[i] = 0;

    //thuc hien phep tru 2 mang
    int carry = 0;
    for(int i = 0; i < n1; i++){
        int sum = x[i]-y[i];
        res[n++] = (sum<0) ? sum+10-carry : sum-carry;
        carry = (sum<0) ? 1 : 0;
    }

    // in tong ra man hinh
    int flag = false;
    for(int i = n - 1; i >= 0; i--){
        if(!flag && res[i]) flag = true;
        if(flag) cout << res[i];
    }
    if(!flag) cout << "0";
}
int strcmp(char c[], char d[]){
    int n1 = strlen(c), n2 = strlen(d);
    if(n1>n2) return 1;
    if(n1<n2) return -1;
    for(int i = 0; i < n1; i++){
        if(c[i]>d[i]) return 1;
        if(c[i] < d[i]) return -1;
    }
    return 0;
}
int main(){
    int tc; cin >> tc;
    cin.ignore();
    while(tc--){
        char c[1000], d[1000];
        cin.getline(c,1000);
        cin.getline(d,1000);
        if(strcmp(c,d)>=0)
            difference(c,d);
        else difference(d,c);
        cout << endl;
    }
}