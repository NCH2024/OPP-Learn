/*
		Bai thuc hanh so 04 -05
		
		XAY DUNG LOP BenhNhan-BenhAn

*/

#include <iostream>
#include <ctime>
using namespace std;

//khai bao lop BenhNhan
class BenhNhan{
	private:
		char hoTen[50], queQuan[60];
		int namSinh;
	public:
		int getNamSinh();
		void nhap_BNhan();
		void xuat_BNhan();
};
//khai bao lop BenhAn
class BenhAn: public BenhNhan{
	private:
		char tenBAn[100];
		long long tienVienPhi;
	public:
		void nhap_BAn();
		void xuat_BAn();
		int tuoi();
		
};

int main(){
	BenhAn ds[100];
	int n; cout << "Nhap so luong danh sach benh an: "; cin >> n;
	for(int i = 0; i < n; i ++){
		cout << "Benh an so " << i+1 << ": ";
		ds[i].nhap_BAn() ;
	}
	cout <<"CAC BEN AN DA NHAP: " <<endl;
	for(int i = 0; i < n; i ++){
		cout << "Benh an so " << i+1 << ": ";
		ds[i].xuat_BAn() ;
		cout << "\tTuoi cua benh nhan: " << ds[i].tuoi() << endl;
	}
	
	return 0;
}

//dinh nghia class BenhNhan
int BenhNhan::getNamSinh() {
	return namSinh;
}
void BenhNhan::nhap_BNhan() {
	cout << endl;
	cin.ignore();
	cout << "Ho va Ten: "; gets(hoTen);
	cout << "Que quan: "; gets(queQuan);
	cout << "Nam sinh: "; cin >> namSinh;
} 
void BenhNhan::xuat_BNhan() {
	cout << "\t" << hoTen << ";\t" << queQuan << ";\tSinh nam: " << namSinh <<endl;
}
//dinh nghia class BenhAn
void BenhAn::nhap_BAn() {
	BenhNhan::nhap_BNhan() ;
	cin.ignore();
	cout << "Ten Benh an: "; gets(tenBAn);
	cout << "So tien vien phi: "; cin >> tienVienPhi;
}
void BenhAn::xuat_BAn() {
	BenhNhan::xuat_BNhan() ;
	cout << "\tTen benh an: " << tenBAn << "\tTien vien phi: " << tienVienPhi << endl;
}
int BenhAn::tuoi() {
	time_t hientai = time(0);
	tm *timeinfo = localtime(&hientai);
	int tuoi;
	tuoi = (timeinfo->tm_year + 1900) - BenhNhan::getNamSinh();
	return tuoi;
}

