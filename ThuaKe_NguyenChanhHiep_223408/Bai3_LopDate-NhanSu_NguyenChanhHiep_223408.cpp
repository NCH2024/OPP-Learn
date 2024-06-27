/*
	Bai thuc hanh so 3:
	XAY DUNG LOP Date - NhanSu
*/
#include <iostream>
#define Size 100
using namespace std;


class Date{
	private:
		int ngay, thang, nam;
	public:
		void nhap_date();
		void xuat_date();
	
};

class NhanSu{
	private:
		Date NgaySinh;
		char ten[50], cMND[20] ;
		float heSoLuong;
	public:
		float getHeSoLuong();
		void nhap_nhanSu();
		void xuat_nhanSu();
};

void Date::nhap_date() {
	cout <<endl;
	cout << "Nhap ngay: "; cin >> ngay;
	cout << "Nhap thang: "; cin >> thang;
	cout << "Nhap nam: "; cin >> nam;
}
void Date::xuat_date() {
	cout << ngay <<"/" << thang <<"/"<< nam;
}

float NhanSu::getHeSoLuong(){
	return heSoLuong;
}
void NhanSu::	nhap_nhanSu() {
	cin.ignore();
	cout << "Nhap ten : " ; gets(ten);
	cout << "Nhap Ngay Sinh: "; NgaySinh.nhap_date();
	fflush(stdin);
	cout << "Nhap CMND: " ; gets(cMND);
	cout << "Nhap he so luong: "; cin >> heSoLuong;
}
void NhanSu::xuat_nhanSu() {
	cout << ten <<"\t|";
	NgaySinh.xuat_date();
	cout << "\t|"<< cMND <<"\t| HSL: "<< heSoLuong ;  
}
int main(){
	int n;
	cout << "Nhap vao so luong Nhan Su: "; 

	cin >> n;
	
	NhanSu ds[Size];
	for(int i = 0 ; i < n; i++){
		cout <<"=======Nhap Nhan Su thu " << i+1 << endl;
		ds[i].nhap_nhanSu() ;
	}
	cout << "--------Danh sach Nhan su Vua nhap--------" <<endl;
	for(int i = 0 ; i < n; i++){
		ds[i].xuat_nhanSu() ;
		cout << endl;
	}
	cout << endl;
	cout <<"---------Danh sach theo chieu tang dan HSL---------" << endl;
	for(int i = 0; i < n ;i++){
		for(int j = i + 1; i < n; i++){
			if(ds[i].getHeSoLuong() < ds[j].getHeSoLuong() ) swap(ds[i], ds[j]);
		}
	}
	for(int i = 0 ; i < n; i++){
		ds[i].xuat_nhanSu() ;
		cout << endl;
	}
	return 0;
}

