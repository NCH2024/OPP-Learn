#include <iostream>
#include <cstdio>
#define SIZE 100
using namespace std;

class HocSinh {
	private :
		char hoTen[50], lopHoc[10];
		float toan, ly, hoa;
	public :
		void nhap();
		void hienThi();
		float diemTB();

};


int main() {
	HocSinh ds[SIZE];
//	A.nhap();
//	A.hienThi();
	int n;
	cout << "Nhap vao so luong hoc sinh: ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Nhap hoc sinh thu " << i+1 << endl;
		ds[i].nhap() ;
	}
	cout << "Danh sach Hoc Sinh:" << endl;
	for (int i = 0; i < n; i++){
		ds[i].hienThi() ;
	}
	return 0;
}
//Dinh nghia ngoai class HocSinh
void HocSinh::nhap() {
	cin.ignore();
	fflush(stdin);
	
	cout << "Ho va Ten: ";
	gets(hoTen);
	cout << "Lop hoc: ";
	gets(lopHoc);
	cout << "Toan: ";
	cin >> toan;
	cout << "Ly: ";
	cin >> ly;
	cout << "Hoa: ";
	cin >> hoa;
}
void HocSinh::hienThi() {
	cout << hoTen << ", " << lopHoc << ";Diem: -Toan: " << toan << " -Ly: " << ly << " -Hoa: " << hoa << " ;Diem TB: " << diemTB() <<endl;
}

float HocSinh::diemTB() {
	float diem = (toan + ly + hoa)/3;
	return diem;
}


