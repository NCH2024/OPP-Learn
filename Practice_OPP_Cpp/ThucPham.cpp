#include <iostream>
#include <string>
using namespace std;

class ThucPham {
    protected:
        string Ten;
        float Gia;
    public:
        //mac dinh
        ThucPham() {};
        //tham so
        ThucPham(string, float);
        //nhap va xuat (dung ao de tai su dung cho lop con)
        virtual void Nhap() {
            cout << "Ten thuc pham: ";
            getline(cin, Ten);
            cout << "Gia cua thuc pham: ";
            cin >> Gia;
        }
        virtual void Xuat() {
            cout << "Ten: " << Ten << "\tGia: " << Gia;
        }
};

//class thucphamhop
class ThucPhamHop:public ThucPham {
    protected:
        int soHop;
    public:
        //mac dinh
        ThucPhamHop() {};
        //tham so
        ThucPhamHop(string, float, int);
        //nhap va xuat
        void Nhap() override {
            ThucPham::Nhap();
            cout << "So Hop: " ;
            cin >> soHop;
        }
        void Xuat() override {
            ThucPham::Xuat();
            cout << "\tSo Hop: " << soHop << endl;
        }
};
//class thucphamkhop
class ThucPhamKHop:ThucPham {
    protected:
        float khoiLuong;
    public:
        ThucPhamKHop() {};
        ThucPhamKHop(string, float, float);
        void Nhap() override {
            ThucPham::Nhap();
            cout << "Khoi Luong thuc pham: ";
            cin >> khoiLuong;
        }
        void Xuat() override {
            ThucPham::Xuat();
            cout << "\tKhoi luong: " << khoiLuong << endl;
        }
};


int main() {

    cout << "Thuc pham hop: "<< endl;
    ThucPhamHop		A01, A02("Dau goi", 3000, 6);
    A02.Xuat();
    A01.Nhap();
    A01.Xuat();
    cout << "Thuc pham khong hop: " << endl;
    ThucPhamKHop	B01, B02("Sua Tam", 45000, 8);
    B02.Xuat();
    B01.Nhap();
    B01.Xuat();

    return 0;
}