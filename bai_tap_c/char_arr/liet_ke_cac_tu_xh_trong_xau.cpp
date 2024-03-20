#include <bits/stdc++.h>
using namespace std;
int main(){
    // string str;
    // getline(cin,str);
    // stringstream ss(str);
    // string word;
    // while(ss>>word){
    //     cout << word << endl;
    // }
   
    char c[1000];
    cin.getline(c,1000);
    // for(int i = 0; c[i]!='\0';){
    //     if(c[i]!=32) cout << c[i++];
    //     else{
    //         cout << endl;
    //         while(c[i]==32) i++;
    //     }
    // }
    
    //su dung c
    char *token = strtok(c," ");
    while(token!=NULL){
        printf("%s\n",token);
        token = strtok(NULL," ");
    }

}