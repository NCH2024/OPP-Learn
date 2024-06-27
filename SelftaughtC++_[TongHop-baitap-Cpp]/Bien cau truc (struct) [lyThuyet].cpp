/* 
* TÌM HIỂU VỀ BIẾN CẤU TRÚC - struct :
* 1. Tìm hiểu chung : khởi tạo , khai báo , gán giá trị và xuất 
* 
*/
#include <iostream>
#include <cstring>
using namespace std;

struct DiaChi
{
	//khai báo biến thành viên - thuộc tính:
	int So[25];
	char Xa_huyen[250];
	char Tinh_thanh[50];	
};

struct SinhVien
{
	//khai báo thuộc tính 
	int MSSV;
	char ho_ten[35];
	bool gioi_tinh;
	DiaChi dia_chi_nha;
	DiaChi dia_chi_truong;
} sv1, sv2; //khai báo biến đối tượng 

int main()
{
	//	1. TÌM HIỂU CHUNG 

	//Khai báo đối tượng cho biến thành viên 
	SinhVien sv3;
	SinhVien sv4;
	//gán giá trị cho biến:

	//Cách 1:
	sv1 = { {223408}, {"Nguyen Chanh Hiep"}, {true},{{45}, {"My Thuan, Binh Tan"},{"Vinh Long"}}, {{141},{"An Binh, My Khanh"},{"Can Tho"}} };
	//Cách 2: (#include <cstring>)
	strcpy_s(sv2.ho_ten, sizeof(sv2.ho_ten), "Nguyen Duy Khanh");
	strcpy_s(sv2.dia_chi_nha.Tinh_thanh, sizeof(sv2.dia_chi_nha.Tinh_thanh), "An Giang");
	strcpy_s(sv2.dia_chi_truong.Tinh_thanh, sizeof(sv2.dia_chi_truong.Tinh_thanh), "Can Tho");
	sv2.gioi_tinh = true;
	sv2.MSSV = 220859;
	
	//Truy cập xuất tông tin sv1:
	cout << "Ho va ten sinh vien: \t" << sv1.ho_ten << endl;
	cout << "Ma so sinh vien : \t" << sv1.MSSV << endl;
	cout << "Gioi tinh: \t\t" << (sv1.gioi_tinh == true ? "Nam" : "Nu") << endl;
	cout << "Que quan: \t\t" << sv1.dia_chi_nha.Tinh_thanh << endl;
	cout << "Noi hoc: \t\t" << sv1.dia_chi_truong.Tinh_thanh << endl;
	cout << "----------------------------------------------------------------------" << endl;
	//Truy cập xuất thông tin sv2:
	cout << "Ho va ten sinh vien: \t" << sv2.ho_ten << endl;
	cout << "Ma so sinh vien : \t" << sv2.MSSV << endl;
	cout << "Gioi tinh: \t\t" << (sv2.gioi_tinh == true ? "Nam" : "Nu") << endl;
	cout << "Que quan: \t\t" << sv2.dia_chi_nha.Tinh_thanh << endl;
	cout << "Noi hoc: \t\t" << sv2.dia_chi_truong.Tinh_thanh << endl;
	cout << "----------------------------------------------------------------------" << endl;

}