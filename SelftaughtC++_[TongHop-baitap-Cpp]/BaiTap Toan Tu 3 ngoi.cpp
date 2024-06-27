


#include <iostream>
#include <string>   
using namespace std;


int main()
{
	float diem_NV, diem_Toan, diem_AV;
	cout << "De he thong phan tich chinh xac ban hay nhap dau cham . (vd: 7.5)" << endl;

	cout << "Hay nhap vao diem mon Ngu Van cua ban: ";
	cin >> diem_NV;

	cout << "Tuyet! Tiep theo nhap diem mon Toan nhe: ";
	cin >> diem_Toan;

	cout << "Cuoi cung, nhap diem mon Anh Van nhe: ";
	cin >> diem_AV;

	float TB = (diem_AV + diem_NV + diem_Toan) / 3;
	cout << "----------------------------------------------" << endl;
	cout << "Oh ket qua day roi! Day la diem TB 3 mon cua ban: " << TB << endl;
	string kq = (TB >= 9) ? "Xuat xac" : ((8 <= TB && TB < 9) ? "Gioi" : (6.5 <= TB && TB < 8) ? "kha" : (5 <= TB && TB < 6.5) ? "Trung binh" : (2 <= TB < 5) ? "Yeu" : "Kem");
	cout << "Xep loai cua ban la: " << kq << endl;
	return 0;

}
