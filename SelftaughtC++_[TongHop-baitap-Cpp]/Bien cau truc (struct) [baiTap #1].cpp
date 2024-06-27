
/* VIẾT CHƯƠNG TRÌNH:
*  Sữ dụng cấu trúc:
*       struct DiaChi:
*           tên đường 
*           quận 
*           tỉnh thành 
*       struct NhanVien:
*               Ma(int)
*               Ten(char[])
*               tuoi (int)
*               DiaChi CoQuan
*               DiaChi NhaRieng
*   1. tạo 2 đối tượng là nhân viên 1 và nhân viên 2 có đầy đủ các thông tin trên và xuất ra màn hình 
*   2. khai báo bằng con trỏ 
*/
#include <iostream>
using namespace std;

struct DiaChi
{
    char tenDuong[100];
    char quan[50];
    char tinhThanh[50];
};

struct NhanVien
{
    int Ma;
    char tenNv[50];
    int tuoi;
    DiaChi CoQuan;
    DiaChi NhaRieng;
};
int main()
{
    NhanVien* pnv1 = new NhanVien;
    NhanVien* pnv2 = new NhanVien;

    *pnv1 = { 11245, "Tran Thi Tuyet Mai", 25,
        {{"Nguyen Tat Thanh"}, {"Quan 10"},{"Tp. HCM"}},
        {{"Nguyen Van Cu"}, {"An Binh"}, {"Can Tho"}} };
    *pnv2 = { 12367, "Nguyen Chi Minh Khang", 26,
        {{"Lac Long Quan"}, {"Quan Thu Duc"},{"Tp. HCM"}},
        {{"Nguyen van Thanh"}, {"Thuan An"}, {"Vinh Long"}} };
   
    cout << "MA nhan vien: " << pnv1->Ma << "\tTen Nhan vien 1: " << pnv1->tenNv << "\tTuoi: " << pnv1->tuoi << endl;
    cout << "Dia chi nha cua anh/chi " << pnv1->tenNv << ": " 
        << pnv1->NhaRieng.tenDuong << ", " << pnv1->NhaRieng.quan << ", " << pnv1->NhaRieng.tinhThanh << endl;     
    cout << "Dia chi co quan cua anh/chi " << pnv1->tenNv << ": " 
        << pnv1->CoQuan.tenDuong << ", " << pnv1->CoQuan.quan << ", " << pnv1->CoQuan.tinhThanh << endl;    
    cout << "-----------------------------------------------------------" << endl;
    cout << "MA nhan vien: " << pnv2->Ma << "\tTen Nhan vien 2: " << pnv2->tenNv << "\tTuoi: " << pnv2->tuoi << endl;
    cout << "Dia chi nha cua anh/chi " << pnv2->tenNv << ": " 
        << pnv2->NhaRieng.tenDuong << ", " << pnv2->NhaRieng.quan << ", " << pnv2->NhaRieng.tinhThanh << endl;
    cout << "Dia chi co quan cua anh/chi " << pnv2->tenNv << ": "
        << pnv2->CoQuan.tenDuong << ", " << pnv2->CoQuan.quan << ", " << pnv2->CoQuan.tinhThanh << endl;
     // Cách thông thường ko dùng con trỏ 

    NhanVien nv3;
    nv3 = { 11290, "Tran Thi Thuy Dung", 24,
        {{"Nguyen Tat Thanh"}, {"Quan Thu Duc"},{"Tp. HCM"}},
        {{"Nguyen Van Thai"}, {"An Bao"}, {"Hau Giang"}} };
    cout << "-----------------------------------------------------------" << endl;
    cout << "MA nhan vien: " << nv3.Ma << "\tTen Nhan vien 1: " << nv3.tenNv << "\tTuoi: " << nv3.tuoi << endl;
    cout << "Dia chi nha cua anh/chi " << nv3.tenNv << ": "
        << nv3.NhaRieng.tenDuong << ", " << nv3.NhaRieng.quan << ", " << nv3.NhaRieng.tinhThanh << endl;
    cout << "Dia chi co quan cua anh/chi " << nv3.tenNv << ": "
        << nv3.CoQuan.tenDuong << ", " << nv3.CoQuan.quan << ", " << nv3.CoQuan.tinhThanh << endl;

}
