#include "iostream"
using namespace std;

class PhanSo {
		int TuSo;
		int MauSo;
	public:
		void Nhap();
		void Xuat();
		int USCLN(int a, int b);
		void RutGon();
		PhanSo Cong(PhanSo ps);
};


int main() {
	PhanSo ps1, ps2;
	cout<<"Nhap ps1:"<<endl;
	ps1.Nhap();
	cout<<"Nhap ps2:"<<endl;
	ps2.Nhap();
	cout<<"ps1 = ";
	ps1.Xuat();
	cout<<"ps2 = ";
	ps2.Xuat();
	cout<<"ps1 + ps2 = ";
	ps1.Cong(ps2).Xuat();
	return 0;
}
//Dinh nghia ngoai class
	void PhanSo::Nhap() {
		cout<<"Nhap tu so:";
		cin>>TuSo;
		cout<<"Nhap mau so:";
		cin>>MauSo;
	}
	void PhanSo::Xuat() {
		cout<<TuSo<<"/"<<MauSo<<endl;
	}
	void PhanSo::RutGon() {
		int uc = USCLN(TuSo,MauSo);
		TuSo /= uc;
		MauSo /= uc;
	}
	int PhanSo::USCLN(int a, int b) {
		while(a != b) {
			if(a > b) a -= b;
			else b -= a;
		}
		return a;
	}
	PhanSo PhanSo::Cong(PhanSo ps) {
		PhanSo kq;
		kq.TuSo = TuSo * ps.MauSo + ps.TuSo * MauSo;
		kq.MauSo = MauSo * ps.MauSo;
		kq.RutGon();
		return kq;
	}
