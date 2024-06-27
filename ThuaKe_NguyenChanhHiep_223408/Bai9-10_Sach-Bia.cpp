/*
9) Bài 5.9: Sach – Bia
Một nhà xuất bản nhận xuất bản sách. Sách có hai loại: loại có hình ảnh ở trang 
bìa và loại không có hình ảnh ở trang bìa. Loại có hình ảnh ở trang bìa thì phải 
thuê họa sĩ vẽ bìa.
Viết chương trình thực hiện các yêu cầu :
o Tạo một lớp cơ sở có tên là SACH để lưu thông tin về tên sách, tác giả, số 
trang, giá bán và định nghĩa hàm thành phần cho phép nhập dữ liệu, in dữ 
liệu cho các đối tượng của lớp SACH.
o Tạo lớp BIA kế thừa từ lớp SACH để lưu các thông tin: Mã hình ảnh, tiền 
vẽ và định nghĩa hàm thành phần cho phép nhập, in dữ liệu cho các đối 
tượng của lớp BIA.
Viết hàm main() thực hiện việc nhập xuất dữ liệu cho bài toántrên
*/
#include <iostream>

using namespace std;

class Sach{
    private:
        string tenSach;
        string tacGia;
        int soTrang;
        double giaBan;
    public:
        //dung tai dinh nghia nhap xuat
        friend istream& operator>>(istream &is, Sach &a){
            cin.ignore();
            cout << "Nhap ten sach: ";
            is >> a.tenSach;
            cout << "Nhap tac gia: ";
            is >> a.tacGia;
            cout << "Nhap so trang: ";
            is >> a.soTrang;
            cout << "Gia ban: ";
            is >> a.giaBan;

            return is;
        }

        friend ostream& operator<<(ostream &os, Sach a){
            cout << a.tenSach << "; Tac gia: " << a.tacGia << "; Trang: " << a.soTrang << "; Gia: " << a.giaBan;

            return os;
        }
};

int main(){
    Sach a;
    cin >> a;
    cout << a;


    return 0;
}
