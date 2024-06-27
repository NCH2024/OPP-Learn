

#include <iostream>
using namespace std;

int main()
{
	//1. ép kiểu rộng (từ nhỏ sang lớn)
	cout << "1. Ep kieu rong" << endl;
	short a = 10;

	// xuất kiểu a
	
	cout << "a la " << a << endl;
	
	// khai báo biến b
	
	int b;
	b = (int)a;  // ép tường minh ( nếu ép tắt sẽ là : b = a )

	// xuất kiểu b 
	cout << "sau khi ep kieu rong thi gia tri bien b" << endl;
	cout << "b la " << b << endl;
	cout << "-----------------------------------" << endl;
	//2. ép kiểu hẹp (từ lớn sang nhỏ)
	cout << "2. Ep kieu hep" << endl;
	float c = 1.25f;
	int d;
	d = (int)c; // ép tưòng minh (nếu ép tắt sẽ là d = c)

	// xuất 2 bien

	cout << "c la " << c << endl;
	cout << "sau khi ep kieu hep thi gia tri d" << endl;
	cout << "d la " << d << endl;

	return 0;
}