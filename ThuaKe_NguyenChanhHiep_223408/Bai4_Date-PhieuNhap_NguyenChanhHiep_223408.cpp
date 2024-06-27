/*
		Bai thuc hanh so 4 - 5
		 
		XAY DUNG LOP Date - PhieuNhap
*/

#include <iostream>
using namespace std;

//khoi tao lop Date
class Date{
	private:
		int DD, MM, YY;
	public:
		void nhap_Date();
		void xuat_Date();
};
//Khoi tao class PhieuNhap
class PhieuNhap{
	private:
		char tenHang[50];
		Date ngayNhap;
		float soLuong;
	public:
		float getSoLuong();
		void nhap_Phieu();
		void xuat_Phieu();
};

int main (){
	PhieuNhap ds[100];
	int n;
	cout << "Nhap so luong phieu nhap: "; cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Phieu so " << i + 1 << ": " << endl;
		ds[i].	nhap_Phieu() ;
	}
	cout << "- CAC PHIEU DA NHAP: " << endl;
	for (int i = 0; i < n ; i++){
		cout << "Phieu so " << i + 1 << ": " ;
		ds[i].	xuat_Phieu() ;
	}
	cout << "- CAC PHIEU CO SO LUONG TREN 100: "<<endl;
	for (int i = 0; i < n ; i++){
		if (ds[i].getSoLuong() > 100){
		cout << "Phieu so " << i + 1 << ": " ;
		ds[i].	xuat_Phieu() ;
		}
	}
	return 0;
}

//dinh nghia ngoai class Date
void Date::nhap_Date() {
	cout << endl;
	cout << "Ngay: "; 
	cin >> DD;
	cout << "Thang: "; 
	cin >> MM;
	cout << "Nam: "; 
	cin >> YY;
}
void Date::xuat_Date() {
	cout << DD << "/" << MM << "/" << YY;
}
//dinh nghia ngoai calss PhieuNhap
float PhieuNhap::getSoLuong() {
	return soLuong;
}
void PhieuNhap::nhap_Phieu() {
	cin.ignore();
	cout << "Ten Hang: "; gets(tenHang);
	cout << "Ngay nhap: "; ngayNhap.nhap_Date() ;
	cout << "So luong: ";  cin >> soLuong;
}

void PhieuNhap::xuat_Phieu() {
	cout << "\t" << tenHang << ";\t";
	ngayNhap.	xuat_Date() ; 
	cout << ";\t" << soLuong <<endl;
}

