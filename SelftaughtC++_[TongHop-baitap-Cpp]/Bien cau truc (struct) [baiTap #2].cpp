

/*
*       SỮ DỤNG STRUCT, CÓ 2 BIẾN THÀNH VIÊN LÀ TỌA ĐỘ X VÀ Y:
*           Viết hàm :
*               1. Tính khoảng cách giữa 2 điểm 
*               2. Nhập vào 1 mảng các điểm, tính tổng độ dài các điểm đó.
*				(3. Chế lại bài thêm con trỏ để nhập vào số lượng điểm cần tính )
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point 
{
	double x;
	double y;
};
// khoảng cách 2 điểm tính bằng công thức Căn bậc hai [(bx - ax)^2 + (by - ay)^2]
double khoangCanh(Point a, Point b) {
	double khoangCach = sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
	return khoangCach;
}

// Nhập vào một mảng các điểm
void NhapMang(Point* MangDiem, int soDiem) {
	for (int i = 0; i < soDiem; i++) {
		cout << "\tNhap toa do diem thu (" << i + 1 << ")" << endl;
		cout << "Nhap toa do x : ";
		cin >> MangDiem[i].x;
		cin.ignore();
		cout << "Nhap toa do y : ";
		cin >> MangDiem[i].y;
		cin.ignore();
	}
}
// Hàm tính mảng điểm 

void XuatMang(Point* MangDiem, int soDiem) {
	for (int i = 0; i < soDiem; i++) {
		cout << "\t\tDiem toa do thu [" << i + 1 << "] : \t(" << MangDiem[i].x << ";" << MangDiem[i].y << ")" << "\n";
	}
}
// Hàm tính khoảng cách nhiều điểm 

double kcCacDiem(Point* MangDiem, int soDiem) {
	int tongkc = 0;
	for (int i = 0; i < soDiem - 1 ; i++) {
		double kc = khoangCanh(MangDiem[i], MangDiem[i + 1]);
		tongkc += kc; //cộng tất cả các khoảng cách lại 
	}
	return tongkc;
}


int main()
{
	Point a;
	Point b;

	a = { 1,1 };
	b = { 2,3 };
	int kq = khoangCanh(a, b);
	cout << "Khoang cach giua hai diem a(" << a.x << ";" << a.y << ") , b(" << b.x << ";" << b.y << ") la: " << kq << endl;

	// Nhap Mang

	int soDiem;	
	cout << "Nhap so diem: ";
	cin >> soDiem;
	while (soDiem <= 0) {
		cout << "So diem khong hop le. Nhap lai: ";
		cin >> soDiem;
	}
	Point* MangDiem = new Point[soDiem];
	NhapMang(MangDiem, soDiem);
	XuatMang(MangDiem, soDiem);
	int kc = kcCacDiem(MangDiem, soDiem);
	cout << "\t\tKhoang cach tat ca cac diem la: " << kc << endl;

	delete[] MangDiem;

}
