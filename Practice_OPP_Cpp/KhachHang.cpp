#include <iostream>
#include <string>

using namespace std;

class Khachhang {
	private:
		string Makhachhang;
		string Hoten;
		string Gioitinh;
		string Diachi;
		string Sodienthoai;
		int Soluonghang;
		double Dongiahang;
		double Thue;

	public:
		void Nhap() {
			cout << "Nhap ma khach hang: ";
			cin >> Makhachhang;
			cout << "Nhap ho ten khach hang: ";
			cin.ignore();
			getline(cin, Hoten);
			cout << "Nhap gioi tinh khach hang: ";
			getline(cin, Gioitinh);
			cout << "Nhap dia chi khach hang: ";
			getline(cin, Diachi);
			cout << "Nhap so dien thoai khach hang: ";
			getline(cin, Sodienthoai);
			cout << "Nhap so luong hang: ";
			cin >> Soluonghang;
			cout << "Nhap don gia hang: ";
			cin >> Dongiahang;
			cout << "Nhap thue (%): ";
			cin >> Thue;
		}

		void Xuat() {
			cout << "Ma khach hang: " << Makhachhang << endl;
			cout << "Ho ten khach hang: " << Hoten << endl;
			cout << "Gioitinh: " << Gioitinh << endl;
			cout << "Dia chi khach hang: " << Diachi << endl;
			cout << "So dien thoai khach hang: " << Sodienthoai << endl;
			cout << "So luong hang: " << Soluonghang << endl;
			cout << "Don gia hang: " << Dongiahang << endl;
			cout << "Thue: " << Thue << "%" << endl;
		}

		double TinhTongTien() {
			return Soluonghang * Dongiahang * Thue;
		}
};

int main() {
	Khachhang kh;
	cout << "Nhap thong tin khach hang o phia duoi" << endl;
	kh.Nhap();
	cout << endl << "Thong tin hien thi:" << endl;
	kh.Xuat();
	cout << endl << "Tong tien can thanh toan: " << kh.TinhTongTien() << endl;

	return 0;
}
