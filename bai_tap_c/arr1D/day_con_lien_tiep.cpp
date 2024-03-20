#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    // day con liep tiep co cac phan tu lien ke khac nhau co do dai dai nhat
    // int res = 0, cnt = 1;
    // for(int i = 1;i<n;i++){
    //     if(a[i]!=a[i-1]){
    //         cnt++;
    //     }
    //     else cnt = 1;
    //     if(res < cnt) res = cnt;
    // }
    

    // day con lien tiep co cac phan ttu lien ke giong nhau co do dai dai nhat
    // int res = 0, cnt = 1;
    // for(int i = 1; i < n; i++){
    //     if(a[i]==a[i-1]) cnt++;
    //     else cnt = 1;
    //     if(res < cnt) res = cnt;
    // }

    // day con lien tiep co 2 phan tu lien ke trai dau co do dai dai nhat
    // int res = 0, cnt = 1;
    // for(int i = 1; i < n; i++){
    //     if(a[i]*a[i-1]<0) cnt++;
    //     else cnt = 1;
    //     if(res < cnt) res = cnt;
    // }

    //day con tang lien tiep co do dai nhat
    int res = 0, cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i]>a[i-1]) cnt++;
        else cnt = 1;
        if(res < cnt) res = cnt;
    }
    cout << res;
}