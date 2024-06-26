#include <iostream>
#include <cstdio>
#define SIZE 50
using namespace std;
//khai bao lop ThiSinh
class ThiSinh {
		char hoTen[50], diaChi[100];
		int namSinh;
		float diemToan, diemLy, diemHoa;
	public:
		void nhapThongTin();
		void inThongTin();
		float tinhTongDiem();
};

int main() {
	ThiSinh danhSachTS[SIZE];
	int n;
	do{
		cout << "Nhap so luong thi sinh: " ; cin >> n;
		if(n <= 0 || n > SIZE) cout <<"So luong khong hop le. Nhap lai" <<endl;
	}while(n <= 0 || n > SIZE);
	for(int i = 0; i < n; i++){
		cout << "Nhap thong tin thi sinh thu " << i +1 << endl;
		danhSachTS[i].nhapThongTin() ;
	}
	cout << "DANH SACH SINH VIEN - TRUNG TUYEN : " << endl;
	for(int i= 0; i < n; i++){
		if(danhSachTS[i].tinhTongDiem() >= 18) danhSachTS[i].inThongTin() ;
	}
	
	return 0;
}

//dinh nghia ngoai lop ThiSinh
void ThiSinh::nhapThongTin() {
	cin.ignore();
	fflush(stdin);
	cout << "Nhap Ho va Ten thi sinh: ";
	gets(hoTen);
	cout << "Nhap dia chi cua thi sinh: ";
	gets(diaChi);
	cout << "Nhap nam sinh : " ;
	cin >> namSinh;
	cout << "Nhap diem toan: ";
	cin >> diemToan;
	cout << "Nhap diem ly: ";
	cin >> diemLy;
	cout << "Nhap diem hoa: ";
	cin >> diemHoa;
}
void ThiSinh::inThongTin() {
	cout << hoTen <<" - " << diaChi << " - " << namSinh << " - Diem Toan: " <<diemToan<<", Ly: "<<diemLy<< ", Hoa: "<< diemHoa << " - Tong diem: "<< tinhTongDiem() << endl;
}
float ThiSinh::tinhTongDiem() {
	return diemToan + diemLy + diemHoa;
}

