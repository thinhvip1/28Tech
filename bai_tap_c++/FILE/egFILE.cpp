// #include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main(){
    fstream f;

    // //mở file có sẵn để ghi (ios::out)
    // f.open("egfile.txt", ios::app);

    // //kiểm tra xem file có mở được k
    // if(f.is_open()){
    //     string input;
    //     cout << "Nhap du lieu (nhap \"exit\" de ket thuc):\n";
    //     while(1){
    //         // ghi dữ liệu từ input vào file f
    //         getline(cin, input);
    //         if(input == "exit") break;
    //         f << input << endl;
    //     }
    //     // đóng file
    //     f.close();
    // }
    // else cout << "Unable to open file!\n";

    //mở file có sẵn để đọc(ios::in)
    f.open("egfile.txt", ios::in);

    // f.seekg(0, ios::end);
    // int kichthuoc = f.tellg();
    // cout << "kich thuoc cua file la: " << kichthuoc << endl;

    //kiểm tra xem file có mở được k
    if(f.is_open()){
        // đọc từ file f vào output
        // string output;
        // while(!f.eof()){
        //     // lay ho va ten
        //     f.seekg(11, ios::cur);
        //     getline(f, output);
        //     cout << output << endl;
        //     // lay lop
        //     f.seekg(5, ios::cur);
        //     getline(f, output);
        //     cout << output << endl;
        //     //lay ma sinh vien
        //     f.seekg(14, ios::cur);
        //     getline(f, output);
        //     cout << output << endl;
        //     // lay que quan
        //     f.seekg(10, ios::cur);
        //     getline(f, output);
        //     cout << output << endl;
        // }

        string line;
        while(!f.eof()){
            if(getline(f, line))
                cout << line.substr(11) << endl;
            if(getline(f, line))
                cout << line.substr(5) << endl;
            if(getline(f, line))
                cout << line.substr(14) << endl;
            if(getline(f, line))
                cout << line.substr(10) << endl;
        }
        // đóng file
        f.close();
    }
    else cout << "Unable to open file!\n";

    return 0;
}