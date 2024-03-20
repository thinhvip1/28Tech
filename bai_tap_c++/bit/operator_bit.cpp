#include <bits/stdc++.h>
using namespace std;
int main(){
    unsigned int a, b, c;
    a = 7;
    b = 8;

    // toán tử and (&)
    c = a & b;
    cout << c << endl; // 0111 & 1000 = 0000 //0
    // toán tử or (|)
    c = a | b;
    cout << c << endl; // 0111 | 1000 = 1111 //15
    // toán tử xor (^): giống -> 0 ; khác -> 1
    c = a ^ b;
    cout << c << endl; // 0111 ^ 1000 = 1111 //15
    // not operator (~)
    c = ~a;
    cout << c << endl; // ~000..0111 = 111...1000
    cout << (1ll * 1<<32) - 1 - 7 << endl; // số toàn bit 1 trong hđh 32bit có giá trị là 2^32 - 1 (-1 bởi vì 1 bit làm dấu)
    //right shift
    c = a>>2; // a/(2^x)
    cout << c << endl; // 0111 >> 2 = 0001 (1) 
    //left shift
    c = a<<2; // a * (2^x)
    cout << c << endl; // 00111 << 2 = 11100 (28)

    // chuyển a từ hệ thập phân ra hệ nhị phân với hđh 32bit
    // b = 8
    for(int i = 31; i >= 0; i--){
        // xem bit thứ i của b đã set 1 chưa
        if(b & (1<<i)) cout << "1";
        else cout << "0";
    }
}