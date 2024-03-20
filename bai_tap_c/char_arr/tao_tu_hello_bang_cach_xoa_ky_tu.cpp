#include <bits/stdc++.h>
using namespace std;
bool check(char s[]){
    // char word[5] = "hello";
    int cnt = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i]==word[cnt]){
            ++cnt;
        }
        if(cnt==5) return true;
    }
    return false;
}
bool check(char s[], char word[]){
    int cnt = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i]==word[cnt]) ++cnt;
        if(cnt==strlen(word)) return true;
    }
    return false;
}
int main(){
    char s[101], word[101];
    cin.getline(s,101);
    if(check(s)) cout << "YES";
    else cout << "NO";
    // cin.getline(word,101); 
    // if(check(s,word)) cout << "YES";
    // else cout << "NO";
}