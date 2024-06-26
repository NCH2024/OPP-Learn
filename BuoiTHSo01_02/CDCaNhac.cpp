#include <iostream>
#include <cstdio>
#define SIZE 50

using namespace std;

//khoi tao lop CDCaNhac
class CDCaNhac {
		char tenDia[30];
		int soLuongBai;
		float giaTien;
	public:
		void nhap();
		void hienThi();
		int getSoLuongBai();
};

//Ham chay chuong trinh
int main() {
	int n;
	CDCaNhac danhSachCD[SIZE];
	do {
		cout << "Nhap vao so luong dia CD: ";
		cin >> n;
	} while(n <= 0 || n > SIZE);
	cout << "NHAP THONG TIN: " << endl;
	for(int i = 0;  i < n ; i++) {
		cout << "Dia so " << i + 1 << ":" << endl;
		danhSachCD[i].nhap() ;
	}
	cout << "THONG TIN VUA NHAP" << endl;
	for(int i = 0; i < n; i++) {
		danhSachCD[i].hienThi() ;
	}
	cout << "DIA CD CO SO BAI HAT LON NHAT" << endl;
	CDCaNhac max = danhSachCD[0];
	for(int i = 0; i < n; i++) {
		if(max.getSoLuongBai()  > danhSachCD[i].getSoLuongBai()) max = danhSachCD[i];
	}
	max.hienThi() ;


	return 0;
}

//Dinh nghia ngoai lop CDCaNhac

void CDCaNhac::nhap() {
	cin.ignore();
	fflush(stdin);
	cout << "Nhap ten dia CD: ";
	gets(tenDia);
	cout << "Nhap so luong bai trong dia CD: ";
	cin>>soLuongBai;
	cout << "Nhap gia tien dia CD: ";
	cin>>giaTien;
}
void CDCaNhac::hienThi() {
	cout << tenDia << ", So luong bai: " << soLuongBai << ", Gia: " << giaTien << endl;
}
int CDCaNhac::getSoLuongBai() {
	return soLuongBai;
}
