/*
BAI 2: XAY DUNG LOP SO PHUC
	
	Tai dinh nghia cac ham nhap xuat va phep toan co ban.

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
		friend istream& operator>> (istream &is, SoPhuc &e){
			cout << "Nhap vao Phan thuc: "; is >> e.phanThuc;
			cout << "Nhap vao Phan ao: "; is >> e.phanAo;
		}
		friend ostream& operator<< (ostream &os, SoPhuc p){
			cout << "(" << p.phanThuc << " + " << "i*" << p.phanAo << ")";
		}
		SoPhuc operator+ (SoPhuc);
		SoPhuc operator- (SoPhuc);
		SoPhuc operator* (SoPhuc);
		SoPhuc operator/ (SoPhuc);
};

int main(){
	SoPhuc a, b;
	cin >> a; cout << "So phuc thu nhat:\t" << a << endl;
	cin >> b; cout << "So phuc thu hai:\t" << b << endl;
	cout << "Phep cong:\t" << a << " + " << b << " = " << a+b << endl;
	cout << "Phep tru:\t" << a << " - " << b << " = " << a-b << endl;
	cout << "Phep nhan:\t" << a << " * " << b << " = " << a*b << endl;
	cout << "Phep chia:\t" << a << " / " << b << " = " << a/b <<endl;

	return 0;
}

//dinh nghia ngoai lop SoPhuc

SoPhuc SoPhuc::operator+ (SoPhuc a){
	SoPhuc b;
	b.phanThuc 	= phanThuc + a.phanThuc ;
	b.phanAo	= phanAo + a.phanAo ;
	return b;
}
SoPhuc SoPhuc::operator-(SoPhuc a){
	SoPhuc b;
	b.phanThuc	= phanThuc - a.phanThuc;
	b.phanAo	= phanAo - a.phanAo;
	return b;
}
SoPhuc SoPhuc::operator*(SoPhuc a){
	SoPhuc b;
	b.phanThuc	= (phanThuc*a.phanThuc ) - (phanAo*a.phanAo);
	b.phanAo	= (phanThuc*a.phanAo) + (phanAo*a.phanThuc);
	return b;
}
SoPhuc SoPhuc::operator/ (SoPhuc a){
	SoPhuc b;
	double mau = a.phanThuc*a.phanThuc + a.phanAo*a.phanAo ;
	b.phanThuc	= (phanThuc*a.phanThuc + phanAo*a.phanAo)/mau;
	b.phanAo	= (phanAo*a.phanThuc - phanThuc*a.phanAo)/mau;
	return b;
}