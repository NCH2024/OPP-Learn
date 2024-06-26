/*
Bai 2: XAY DUNG LOP SO PHUC
*/

#include <iostream>
#include <cmath>
using namespace std;

//Khoi tao lop SoPhuc
class SoPhuc{
	private: 
		double phanThuc, phanAo;
	public:
		SoPhuc(): phanThuc(0), phanAo(0){};
		~SoPhuc(){};
		void nhap();
		void xuat();
		SoPhuc cong(SoPhuc);
		SoPhuc tru(SoPhuc);
		SoPhuc nhan(SoPhuc);
		SoPhuc chia(SoPhuc);
};

int main(){
	SoPhuc a, b;
	a.nhap() ; cout << "So phuc thu nhat:\t";a.xuat() ;	cout << endl;
	b.nhap() ; cout << "So phuc thu hai:\t";b.xuat() ; 	cout << endl; 
	cout << "Cong:\t";	a.xuat() ;cout << " + "; b.xuat(); cout << " = "; a.cong(b).xuat() ;	cout << endl;
	cout << "Tru:\t"; 	a.xuat() ;cout << " - "; b.xuat(); cout << " = "; a.tru(b).xuat() ;		cout << endl;
	cout << "nhan:\t"; 	a.xuat() ;cout << " * "; b.xuat(); cout << " = "; a.nhan(b).xuat() ;	cout << endl;
	cout << "chia:\t"; 	a.xuat() ;cout << " / "; b.xuat(); cout << " = "; a.chia(b).xuat() ;	cout << endl;
	return 0;
}

//dinh nghia ngoai lop SoPhuc

void SoPhuc::nhap() {
	cout << "Nhap phan thuc: "; cin >> phanThuc;
	cout << "nhap phan ao: "; cin >> phanAo;
}
void SoPhuc::xuat() {
	cout << "(" << phanThuc << " + " << "i*" << phanAo << ")";
}
SoPhuc SoPhuc::cong(SoPhuc a){
	SoPhuc ketQua;
	ketQua.phanThuc = phanThuc + a.phanThuc ;
	ketQua.phanAo = phanAo + a.phanAo ;
	return ketQua;
} 
SoPhuc SoPhuc::tru(SoPhuc a){
	SoPhuc ketQua;
	ketQua.phanThuc = phanThuc - a.phanThuc ;
	ketQua.phanAo = phanAo - a.phanAo ;
	return ketQua;
} 
SoPhuc SoPhuc::nhan(SoPhuc a){
	SoPhuc ketQua;
	ketQua.phanThuc = (phanThuc*a.phanThuc ) - (phanAo*a.phanAo) ;
	ketQua.phanAo = (phanThuc*a.phanAo) + (phanAo*a.phanThuc);
	return ketQua;
} 
SoPhuc SoPhuc::chia(SoPhuc a){
	SoPhuc ketQua;
	double mau = a.phanThuc*a.phanThuc + a.phanAo*a.phanAo ;
	ketQua.phanThuc = (phanThuc*a.phanThuc + phanAo*a.phanAo)/mau ;
	ketQua.phanAo = (phanAo*a.phanThuc - phanThuc*a.phanAo)/mau;
	return ketQua;
} 