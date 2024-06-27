/*bai 4 - Thao tac mang*/
#include "iostream"
#define MAX 100
using namespace std;
//Khai bao nguyen mau
void NhapMang(int[], int);
void XuatMang(int[], int);
int TinhTongMang(int[], int);
void DayTongChan(int[], int);
void DayTongLe(int[], int);
bool CheckSNT(int);
void DaySNT(int[], int);
void TimMax(int[], int);
void TimMin(int[], int);
void ChenMang(int[], int, int, int);
void XoaMang(int[], int, int);

int main() {
	int n, a[MAX];
	do {
		cout << "Nhap vao so luong phan tu mang : "; cin >> n;
	} while (n <= 0); //kiem tra n nhap vao
	//Ham nhap xuat mang
	cout << "Nhap vao mang: " << endl;
	NhapMang(a, n);
	cout << "Mang vua nhap la: " << endl;
	XuatMang(a, n);
	//Tong cac PT trong mang
	cout << "-\nTong PT trong mang : " << TinhTongMang(a, n) << endl;
	//Tong cac so chan va le
	cout << "-\nDay tong cac so chan : ";
	DayTongChan(a, n);
	cout << "-\nDay tong cac so Le : ";
	DayTongLe(a, n);
	//Day cac so ngto trong mang
	cout << "-\nDay so nguyen to trong mang: ";
	DaySNT(a, n);
	cout << endl;
	//Tim max va min cua mang
	TimMax(a, n);
	TimMin(a, n);
	//Chen va xoa Phan tu bat ky nhap vao
	//Chen
	int GiaTri, ViTri;
	do {
		cout << "-\nNhap vao vi tri chen a[0 <= i <= " << n - 1 << "]: i = "; cin >> ViTri;
	} while (ViTri <= 0 || ViTri >= n);
	cout << "Nhap vao gia tri can CHEN: a[" << ViTri << "] = "; cin >> GiaTri;
	ChenMang(a, n, GiaTri, ViTri);
	//Xoa
	do {
		cout << "-\nNhap vao vi tri XOA a[0 <= i <= " << n - 1 << "]: i = "; cin >> ViTri;
	} while (ViTri <= 0 || ViTri >= n);
	XoaMang(a, n, ViTri);
	return 0;
}
//Dinh nghia mang
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Phan tu A[" << i << "] = ";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n) {
	cout << "A = { ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << "  ";
	}
	cout << "}" << endl;
}
int TinhTongMang(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i];
	}
	return tong;
}
void DayTongChan(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) tong += a[i];
	}
	cout << tong << endl;
}
void DayTongLe(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) tong += a[i];
	}
	cout << tong << endl;
}
bool CheckSNT(int a) {
	if (a < 2) {
		return false;
	}
	for (int i = 2; i <= a / 2; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
void DaySNT(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (CheckSNT(a[i])) {
			if (true) {
				cout << a[i] << " ";
			}
		}
	}
}
void TimMax(int a[], int n) {
	int Max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > Max) Max = a[i];
	}
	cout << "-\nGia tri MAX la: " << Max << endl;
}
void TimMin(int a[], int n) {
	int Min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < Min) {
			Min = a[i];
		}
	}
	cout << "-\nGia tri Min la: " << Min << endl;
}
void ChenMang(int a[], int n, int GTchen, int Vitri) {
	for(int i = n + 1; i > Vitri; i--) {
		a[i] = a[i - 1];
	}
	a[Vitri] = GTchen;
	n++; 
	cout << "-\nMang sau khi chen la: ";
	XuatMang(a, n);
}
void XoaMang(int a[], int n, int ViTri) {
	for (int i = ViTri; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
	cout << "-\nMang sau khi xoa: ";
	XuatMang(a, n);
}
