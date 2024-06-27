/*
	Bai thuc hanh so 2:
	XAY DUNG LOP ThucPham - ThucPhamHop - ThucPhamKHop

*/
#include <iostream>
#define SIZE 100
using namespace std;

//Khai bao lop ThucPham
class ThucPham{
	private: 
		char tenTp[50];
		float gia;
	public:
		void nhap();
		void xuat();
};
//Khai bao class dan xuat ThucPhamHop
class ThucPhamHop: public ThucPham{
	private:
		int soHop;
	public:
		void nhap_tpHop();
		void xuat_tpHop();
};
//Khai bao class dan xuat ThucPhamKHop
class ThucPhamKHop: public ThucPham{
	private:
		float khoiLuong;
	public:
		void nhap_tpKHop();
		void xuat_tpKHop();
};
int main(){
	ThucPhamHop H[SIZE];
	ThucPhamKHop KH[SIZE];
	int a, b;
	cout << "Nhap so luong thuc pham Hop: " ; cin >> a;
	cout <<"Nhap so luong thuc pham Ko Hop: "; cin >> b;
	for(int i = 0; i < a; i ++){
		cout << "Thuc Pham Hop thu " << i+1 << endl;
		H[i].nhap_tpHop() ;
	}
	for(int i = 0; i < b; i++){
		cout << "Thuc pham khong hop thu " << i+1 << endl;
		KH[i].nhap_tpKHop() ;
	}
	cout <<"-----------------Danh Sach TP Hop-------------------" <<endl;
		for(int i = 0; i < a; i ++){
		H[i].xuat_tpHop() ;
	}
	cout <<endl;
	cout <<"---------------Danh Sach TP Khong Hop---------------" <<endl;
	for(int i = 0; i < b; i++){
		KH[i].xuat_tpKHop() ;
	}
	return 0;
}

//dinh nghia class ThucPham
void ThucPham::nhap() {
	cin.ignore();
	cout << "Nhap vao Ten Thuc Pham: " ; gets(tenTp);
	cout << "Nhap don gia: "; cin >> gia;
}
void ThucPham::xuat() {
	cout << "Ten: " << tenTp << "\tGia: " ;
}
//dinh nghia class ThucPhamHop
void ThucPhamHop::nhap_tpHop() {
	ThucPham::nhap() ;
	cout << "Nhap So Hop: "; cin >> soHop;
}
void ThucPhamHop::xuat_tpHop() {
	ThucPham::xuat() ;
	cout <<"\tSo hop: " << soHop;
}
//dinh nghia class ThucPhamKHop
void ThucPhamKHop::nhap_tpKHop() {
	ThucPham::nhap() ;
	cout << "Nhap vao khoi luong: "; cin >> khoiLuong;
}
void ThucPhamKHop::xuat_tpKHop() {
	ThucPham::xuat() ;
	cout << "\tKhoi luong: " << khoiLuong;
}
