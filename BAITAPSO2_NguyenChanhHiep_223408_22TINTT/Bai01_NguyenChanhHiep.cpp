/*Bai 1:  Thuc hien phep cac phep toan*/
#include <iostream>
using namespace std;
int main() {
	cout << "Thuc Hien Cac Phep Tinh" << endl;
	int a, b;
	cout << "Nhap vao so nguyen a =\t"; cin >> a;
	cout << "Nhap vao so nguyen b =\t"; cin >> b;

	cout << "Cong:\t" << a << " + " << b << " = " << a + b << endl;
	cout << "Tru:\t" << a << " - " << b << " = " << a - b << endl;
	cout << "Nhan:\t" << a << " * " << b << " = " << a * b << endl;
	cout << "Chia:\t" << a << " / " << b << " = " << (float)a / b << endl;
	return 0;
}