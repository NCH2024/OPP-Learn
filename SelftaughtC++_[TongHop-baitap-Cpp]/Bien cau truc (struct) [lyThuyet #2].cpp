/*
* TÌM HIỂU VỀ BIẾN CẤU TRÚC - struct :
* 
*       2. Sao chép biến cấu trúc 
*
*/

#include <iostream>
using namespace std;

struct Book
{
	char tenSach[100];
	char tacGia[100];
	int giaSach;
};

int main()
{
			//tạo đối tượng trong biến struct:
	Book quyen1;
			//Nhập từ bàn phím:
	cout << "Nhap vao ten sach: ";
	gets_s(quyen1.tenSach);
	cout << "Nhap ten tac gia: ";
	gets_s(quyen1.tacGia);
	cout << "Nhap gia tien cua sach: ";
	cin >> quyen1.giaSach;
	
	//Copy giá trị cho quyển 2:
	Book quyen2 = quyen1;
	//Xuất giá trị quyển 2:
	cout << "Ten sach: " << quyen2.tenSach << endl;
	cout << "Ten tac gia: " << quyen2.tacGia << endl;
	cout << "Gia tien: " << quyen2.giaSach << endl;

	//Thay đổi giá trị xem quyển 2 có bị thay đổi không:
	quyen1.giaSach = 120000;
	// Xuất giá trị quyển 2 và 1  để kiểm tra:
	cout << "Gia tien quyen 2: " << quyen2.giaSach << endl;
	cout << "Gia tien quyen 1: " << quyen1.giaSach << endl;

	// Gán giá trị kiểu = nhau chỉ copy và lưu vào ô nhớ khác nên không làm thay đổi giá tị ban đầu
	// chỉ có con trỏ mới có thể thay đổi - tìm hiểu phần 3;
	cout << "Dia chi o nho quyen 1: " << &quyen1 << endl;
	cout << "Dia chi o nho quyen 2: " << &quyen2 << endl;


}
