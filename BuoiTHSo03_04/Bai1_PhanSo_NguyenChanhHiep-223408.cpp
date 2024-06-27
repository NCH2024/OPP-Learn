/*
XAY DUNG LOP PHAN SO
 Du lieu : tu so, mau so
 Phuong thuc:
 	- Ham khoi tao mac dinh khong tham so; ham huy
	- Ham nhap cho phep nhap tu so va mau so
	- Ham xuat, cho phep in ra man hinh phan so theo kieu tu so / mau so
	- Ham rut gon; cong ; tru; nhan; chia hai phan so
Ham main:
	- Nhap 2 phan so; in 2 phan so vua nhap dang "tu so / mau so"
	- Tinh va in cac ket qua : cong; tru; nhan; chia cua 2 phan so
*/

#include <iostream>
using namespace std;

class PhanSo {
	private:
		int tuSo;
		int mauSo;
	public:
		PhanSo();
		~PhanSo();
		void nhap();
		void xuat();
		int USCLN(int x, int y);
		void rutGon();
		PhanSo cong(PhanSo ps);
		PhanSo tru(PhanSo ps);
		PhanSo nhan(PhanSo ps);
		PhanSo chia(PhanSo ps);

};
int main() {
	//nhap 2 phan so vaf in 2 phan so vua nhap
	PhanSo a, b;
	cout << "Nhap vao phan so a: " << endl;
	a.nhap() ;
	cout << "Nhap vao phan so b: " << endl;
	b.nhap() ;
	cout << "Phan so a vua nhap: ";
	a.xuat() ;
	cout << "Phan so b vua nhap: ";
	b.xuat() ;

	//Tinh va in ket qua
	cout << "Cong a voi b: " ;
	(a.cong(b)).xuat();
	cout << "Tru a voi b: " ;
	(a.tru(b).xuat());
	cout << "Nhan a voi b: " ;
	(a.nhan(b).xuat());
	cout << "Chia a voi b: " ;
	(a.chia(b).xuat());
	return 0;
}


//Dinh nghia ngoai class PhanSo
PhanSo::PhanSo() {
	tuSo = 0;
	mauSo = 1;
}

PhanSo::~PhanSo() {}

void PhanSo::nhap() {
	cout << "Nhap vao tu so: ";
	cin >> tuSo;
	do {
		cout << "Nhap vao mau so: ";
		cin >> mauSo;
		if(mauSo==0) cout << "Nhap lai! Mau so phai khac 0." << endl;
	} while (mauSo == 0 );
}

void PhanSo::xuat() {
	cout << tuSo << "/" << mauSo << endl;
}
int PhanSo::USCLN(int x, int y) {
	while(y != 0) {
		int bienTam = x % y;
		x = y;
		y = bienTam;
	}
	return x;
}

void PhanSo::rutGon() {
	int uocChung = USCLN(tuSo, mauSo);
	tuSo /= uocChung;
	mauSo /= uocChung;
}
PhanSo PhanSo::cong(PhanSo ps) {
	PhanSo ketQua;
	ketQua.tuSo = (tuSo * ps.mauSo) + (ps.tuSo * mauSo);
	ketQua.mauSo = mauSo * ps.mauSo;
	ketQua.rutGon();
	return ketQua;
}
PhanSo PhanSo::tru (PhanSo ps) {
	PhanSo ketQua;
	ketQua.tuSo = (tuSo * ps.mauSo) - (ps.tuSo * mauSo);
	ketQua.mauSo = mauSo * ps.mauSo;
	ketQua.rutGon();
	return ketQua;
}
PhanSo PhanSo::nhan (PhanSo ps) {
	PhanSo ketQua;
	ketQua.tuSo = tuSo* ps.tuSo ;
	ketQua.mauSo = mauSo * ps.mauSo ;
	ketQua.rutGon();
	return ketQua;
}
PhanSo PhanSo::chia(PhanSo ps) {
	PhanSo ketQua;
	ketQua.tuSo = tuSo * ps.mauSo;
	ketQua.mauSo = mauSo * ps.tuSo;
	ketQua.rutGon();
	return ketQua;
}

