#include <bits/stdc++.h>
using namespace std;
bool is_Lower(char c){
    if(c>=97 && c<=122) return true;
    return false;
}
bool is_Upper(char c){
    if(c>=65&&c<=90) return true;
    return false;
}
bool is_Alpha(char c){
    if(is_Upper(c) || is_Lower(c)) return true;
    return false;
}
char to_Lower(char c){
    if(c>=65 && c<=90) return (char)(c+32);
    return c;
}
char to_Upper(char c){
    if(c>=97 && c<=122) return (char)(c-32);
    return c;
}
bool is_Digit(char c){
    if(c>=48 && c<=57) return true;
    return false;
}
int strlen(char c[]){
    int cnt = 0;
    while(c[cnt]!='\0'){++cnt;}
    return cnt;
}
char* strlwr(char c[]){
    for(int i = 0; i < strlen(c); i++)
        if(c[i]>=65 && c[i]<=90) c[i] += 32;
        // c[i] = to_Lower(c[i]);
    return c;
}
char* strupr(char c[]){
    for(int i = 0; i < strlen(c); i++){
        c[i] = to_Upper(c[i]);
    }
    return c;
}
int min(int a, int b){
    return a < b ? a : b;
}
int strcmp(char a[], char b[]){
    int n1 = strlen(a), n2 = strlen(b);
    for(int i = 0; i < min(n1,n2); i++){
        if(a[i]>b[i]) return 1;
        else if(a[i]<b[i]) return -1;
    }
    if(n1==n2) return 0;
    if(n1>n2) return 1;
    return -1;
}
int strcmp1(char a[], char b[]){
    a = strlwr(a);
    b = strlwr(b);
    int n1 = strlen(a), n2 = strlen(b);
    for(int i = 0; i < min(n1,n2); i++){
        if(a[i]>b[i]) return 1;
        else if(a[i]<b[i]) return -1;
    }
    if(n1==n2) return 0;
    if(n1>n2) return 1;
    return -1;
}
long long atoll(char c[]){
    long long res = 0;
    int i = 0;
    while(c[i]!=32 && c[i]!='\0'&&c[i]>=48&&c[i]<=57){
        res = res*10 + (c[i++]-48);
    }
    return res;
}
char* strrev(char c[]){
    int l = 0, r = strlen(c)-1;
    while(l<r){
        char tmp = c[l];
        c[l] = c[r];
        c[r] = tmp;
        l++; r--;
    }
    return c;
}
int main(){ 
    int tc; cin >> tc; fflush(stdin);
    while(tc--){
        // char c; cin >> c;
        // if(is_Lower(c)) cout << "YES\n"; else cout << "NO\n";
        // if(is_Upper(c)) cout << "YES\n"; else cout << "NO\n";
        // if(is_Alpha(c)) cout << "YES\n"; else cout << "NO\n";
        // if(is_Lower(c)) cout << to_Upper(c) << endl;
        // if(is_Upper(c)) cout << to_Lower(c) << endl;
        // if(is_Digit(c)) cout << "YES\n"; else cout << "NO\n";
        char a[100];
        cin.getline(a,100);
        // cout << strcmp(a,b) << endl;
        // cout << strcmp1(a,b) << endl;
        // char c[100];
        // cin.getline(c,100,'\n');
        // cout << strlen(c) << endl;
        // char *s;
        // s = new
        // s = str_lwr(c);
        cout << atoll(a) << endl;
        // cout << strrev(a) << endl;
    }
    return 0;
}