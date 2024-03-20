// #include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream f;

    //mở file có sẵn để ghi (ios::out)
    f.open("egfile.txt", ios::out | ios::binary);


    //ép kiểu int, float, ... sang char để ghi vào file
    // f.write(reinterpret_cast <char*> (&s), sizeof(s));

    //kiểm tra xem file có mở được k
    if(f.is_open()){
        string input;
        cout << "Nhap du lieu (nhap \"exit\" de ket thuc):\n";
        while(1){
            // ghi dữ liệu từ input vào file f
            getline(cin, input);
            if(input == "exit") break;
            f << input << endl;
        }
        // đóng file
        f.close();
    }
    else cout << "Unable to open file!\n";

    //mở file có sẵn để đọc(ios::in)
    f.open("egfile.txt", ios::in | ios::binary);

    //kiểm tra xem file có mở được k
    if(f.is_open()){
        // đọc từ file f vào output
        string output;
        while(!f.eof()){
            getline(f, output);
            cout << output << endl;
        }
        // đóng file
        f.close();
    }
    else cout << "Unable to open file!\n";

    // ép kiểu int, float, ... sang char để đọc từ file
    // f.read(reinterpret_cast <char*> (&s1), sizeof(s1));


}