#include <bits/stdc++.h>
using namespace std;
bool prime[1000001];
// sàng số nguyên tố
void sieve(){
    fill(prime, prime+1000001, true);
    prime[0] = false; prime[1] = false;
    for(int i = 2; i <= 1000; i++){
        if(prime[i])
            for(int j = i*i; j < 1000001; j += i)
                prime[j] = false;
    }
}
// phân tích ra thừa số nguyên tố
void ptich1(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n%i==0){
            cout << i << " ";
            n/=i;
        }
    }
    if(n!=1) cout << n;
    cout << endl;
}
// phân tích ra thừa số nguyên tố (mỗi thừa số nt chỉ liệt kê 1 lần)
void ptich2(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            cout << i << " ";
            while(n%i==0) n/=i;
        }
    }
    if(n!=1) cout << n;
    cout << endl;
}
// phân tích ra thừa số nguyên tố (mỗi thừa số nt kèm thêm số mũ)
void ptich3(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                n/=i;
                cnt++;
            }
            cout << i << "(" << cnt << ") ";
        }
    }
    if(n!=1) cout << n << "(1)";
    cout << endl;
}
// phân tích ra thừa số nt (có dấu nhân giữa các thừa số)
void ptich4(int n){
    for(int i = 2; i <= sqrt(n); i++){
        while(n%i==0){
            cout << i;
            n/=i;
            if(n!=1) cout << "x";
        }
    }
    if(n!=1) cout << n;
    cout << endl;
}
// phân tích thừa số nt(viết theo kí hiệu toán học)
void ptich5(int n){
    cout << n << " = ";
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout << i << "^" << cnt;
            if(n!=1) cout << " * ";
        }
    }
    if(n!=1) cout << n << "^1";
    cout << endl;
}
int main(){
    // sieve();
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        // ptich1(n);
        // ptich2(n);
        // ptich3(n);
        // ptich4(n);
        ptich5(n);
    }
}