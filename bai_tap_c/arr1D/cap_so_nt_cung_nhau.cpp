#include <iostream>

using namespace std;

int ucln(int a, int b){
    if(!a || !b) return a;
    if(a==1 || b==1) return 1;
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    long long cnt = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(ucln(a[i],a[j])==1) cnt++;
        }
    }
    cout << cnt;
}