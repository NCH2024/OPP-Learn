/*
* TÌM HIỂU VỀ BIẾN CẤU TRÚC - struct :
* 
*       4. CON TRỎ BIẾN CẤU TRÚC STRUCT 
* 
*/
#include <iostream>
using namespace std;

struct SinhVien
{
	int MSSV;
	char Ten[255];
};

int main()
{
	//Khai báo con trỏ bình thường vs kiểu dữ liệu cơ sở
	int* controNguyen = new int;	// khai báo và cấp phát bộ nhớ 

	// khai báo và gán đối tượng thuông thường của cấu trúc struct 
	SinhVien sv1 = { 223408, {"Nguyen Chanh Hiep"} };

	// truy cập xuất thông tin .dot (Đây là cách truy cập thông thường không phải con trỏ) 
	cout << "Ma so sinh vien 1: " << sv1.MSSV <<"\t" << "Ten sinh Vien 1: " << sv1.Ten << endl;

	//khai báo con trỏ cấu trúc 
	SinhVien* p_sv2 = new SinhVien;	// khai báo và cấp phát bộ nhớ
	*p_sv2 = { 225684, {"Tran Ngoc Kieu Tien"} };	// gán giá trị cho con trỏ như cách đã học thêm toán tử *

	//truy cập xuất thông ton cho con trỏ struct 
	cout << "Ma so sinh vien 2: " << p_sv2->MSSV <<"\t"<< "Ten sinh Vien 2: " << p_sv2->Ten << endl;

	// Gán con trỏ vào địc chỉ ô nhớ dùng chung:
	SinhVien* p_sv3;
	p_sv3 = &sv1;
	cout << "MSSV 3: " << p_sv3->MSSV << "\t" << "Ten 3: " << p_sv3->Ten << endl;
	//Thay đổi giá trị con trỏ làm thay đổi giá trị mà nó trỏ vào:
	*p_sv3 = { 222222, {"Le Han Quoc Dat"} };
	cout << "MSSV 3 sau thay doi: " << p_sv3->MSSV << "\t" << "Ten 3 sau thay doi: " << p_sv3->Ten << endl;
	cout << "MSSV 1 sau thay doi: " << sv1.MSSV << "\t" << "Ten 1 sau thay doi: " << sv1.Ten << endl;

}

