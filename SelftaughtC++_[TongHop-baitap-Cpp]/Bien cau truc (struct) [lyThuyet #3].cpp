

/*
* TÌM HIỂU VỀ BIẾN CẤU TRÚC - struct :
* 
*       3.  MẢNG CẤU TRÚC STRUCT 
*
*/
#include <iostream>
using namespace std;

struct SinhVien
{
    int MSSV;
    char ten[255];
    char queQuan[255];
};

void NhapSV(SinhVien ds[], int total) {
    for (int i = 0; i < total; i++) {
        cout << "Nhap thong tin SV so " << i + 1 << " : " << endl;
        cout << "Nhap MSSV: ";
        cin >> ds[i].MSSV;
        cin.ignore();   //xóa bộ nhớ đệm
        cout << "Nhap Ten SV: ";
        gets_s(ds[i].ten, sizeof(ds[i].ten));
        cin.ignore();
        cout << "Nhap que quan: ";
        gets_s(ds[i].queQuan, sizeof(ds[i].queQuan));
        cin.ignore();
    }
}

void XuatSV(SinhVien ds[], int total) {
    cout << "MSSV\t\t" << "Que Quan\t\t" << "Ten Sinh Vien" << endl;
    for (int i = 0; i < total; i++) {
        cout << ds[i].MSSV << "\t\t" << ds[i].queQuan << "\t\t" << ds[i].ten << endl;
    }  
}

int main()
{
    //khai bao mang struct

    const int total = 2;
    SinhVien ds[total];
    NhapSV(ds, total);
    XuatSV(ds, total);
}
