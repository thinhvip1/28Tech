#include <bits/stdc++.h>
using namespace std;
// char* strlwr1(char *c, char d[]){ // c la xau can in thuong, d la tu can xoa
//     // char res[strlen(c)];
//     char *res = new char[strlen(c)];
//     for(int i = 0; i < strlen(c);i++){//  chuyen xau c ve in thuong
//         res[i] = tolower(c[i]); 
//     }      
//     char *tmp = res;
//     if(strcmp(res,d)==0) return res; // c sau khi chuyen ve in thuong giong voi d thi in ra
//     return c; // neu khong thi in ra c ban dau
// }
bool strcmp1(char c[], char d[]){
    int n1 = strlen(c), n2 = strlen(d);
    if(n1!=n2) return false;
    for(int i = 0; i < n1; i++){
        if(tolower(c[i])!=tolower(d[i])) return false;
    }
    return true;
}
int main(){
    int tc; cin >> tc; cin.ignore(); // nhap sl test case
    for(int k = 1; k <= tc; k++){
        char c[1000], d[100]; 
        cin.getline(c,1000); // nhap xau can ktra
        cin >> d; cin.ignore(); // nhap tu de xoa
        char s[20][50]; int n = 0;
        char  *token = strtok(c," "); // khai bao con tro token tro den chuoi c den khi gap dau space
        while(token!=nullptr){
            // token = strlwr1(token,d);
            // if(strcmp(token,d)!=0)
            //     strcpy(s[n++],token);
            if(!strcmp1(token,d)) strcpy(s[n++],token);
            token = strtok(nullptr," ");
        }
        cout << "#Test " << k << ": ";
        for(int i = 0; i < n; i++){
            cout << s[i];
            if(i!=n-1) cout << " ";
        }
        cout << endl;
    }
    
}