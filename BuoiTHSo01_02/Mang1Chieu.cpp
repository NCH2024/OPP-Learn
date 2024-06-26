#include <iostream>
#define SIZE 100
#include <algorithm> //su dung cho "sort" dung de sap xep

using namespace std;
//Khai bao lop Mang1Chieu
class Mang1Chieu {
		int a[SIZE], n;
	public:
		void taoMang();
		void inMang();
		void timMinMax();
		int tongMang();
		void sapTang();
		void sapGiam();
};
//Ham chay chuong trinh
int main() {
	Mang1Chieu A;
	A.taoMang() ;
	cout << "Mang vua nhap la: ";
	A.inMang();
	A.timMinMax() ;
	cout << "Tong cac phan tu trong mang la: " << A.tongMang() << endl;
	cout << "Sap theo chieu TANG DAN :" << endl;
	A.sapTang() ;
	cout << "Sap theo chieu GIAM DAN :" << endl;
	A.sapGiam() ;
	return 0;
}

//Dinh nghia ngoai lop Mang1Chieu
void Mang1Chieu::taoMang() {
	do {
		cout << "Nhap vao so phan tu cua mang: ";
		cin >> n;
		if(n<=0 || n > SIZE)cout << "So luong khong hop le (0 < n < 100). Nhap lai." << endl;
	} while(n <= 0 || n > SIZE);
	for(int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu [" << i + 1 << "] = ";
		cin >> a[i];
	}
}
void Mang1Chieu::inMang() {
	cout << "{\t";
	for(int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout << "}" <<endl;
}
void Mang1Chieu::timMinMax() {
	int max = a[0];
	int min = a[0];
	for(int i = 0; i < n; i++) {
		if(max < a[i]) max = a[i];
	}
	cout << "Phan tu lon nhat (MAX) la: " << max << endl;
	for(int i = 0; i < n; i++) {
		if(min > a[i]) min = a[i];
	}
	cout << "Phan tu nho nhat (MIN) la: " << min << endl;
}
int Mang1Chieu::tongMang() {
	int sum;
	for(int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}
void Mang1Chieu::sapTang() {
	sort(a, a + n);
	inMang();
}
void Mang1Chieu::sapGiam() {
	sort(a, a + n, greater<int>());
	inMang();
}
