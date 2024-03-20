#include <bits/stdc++.h>
using namespace std;
void tron_xau(char s12[], char s1[], char s2[], int n){
    int size = 0;
    for(int i = 0; i < n; i++){
        s12[size++] = s2[i];
        s12[size++] = s1[i];
    }
    s12[size] = '\0';
}
void tach_xau(char s12[], char s1[], char s2[], int n){
    for(int i = 0; i < n; i++){
        s1[i] = s12[i];
        s2[i] = s12[i+n];
    }
}
int cnt(char s1[], char s2[], char s[], int n){
    int cnt = 1;
    char t1[n], t2[n], s12[2*n];
    strcpy(t1,s1); strcpy(t2,s2);
    while(1){
        tron_xau(s12,s1,s2,n); // tron 2 xau s1 va s2 thanh s12
        
        if(strcmp(s12,s)==0) return cnt; // nếu tạo thành xâu s thì in ra số lần lặp
        
        tach_xau(s12,s1,s2,n); // nếu chưa tạo ra xâu s thì tách xâu s12 thành 2 xâu s1 s2 mới

        if(!strcmp(t1,s1) && !strcmp(t2,s2)) return -1; // nếu xâu s12 từng được trộn thành thì ctỏ không thể tạo ra xâu s từ s1 và s2
        cnt++;
    }
}
int main(){
    while(1){
        int n; cin >> n; if(!n) break;
        char s1[200],s2[200], s[400];
        cin >> s1 >> s2 >> s;
        cout << cnt(s1,s2,s,n) << endl;
    }
}