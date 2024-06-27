
// Viết một chương trình c++ để nhập vào một mảng số nguyên 
// và in ra các phần tử của mảng 
// và địa chỉ của chúng sử dụng con trỏ


#include <iostream>
using namespace std;

int main()
{
	// Khai bao mang
	int a;
	cout << "Hay nhap vao so luong phan tu cua mang: ";
	cin >> a;
	int* arr = new int[a];
	// nhap gia tri cho mang
	for (int i = 0; i < a; i++) {
		cout << "Hay nhap gia tri cua mang tai [" << i << "]= ";
		cin >> arr[i];
	}
	//Xuat cac gia tri cua mang vua nhap
	cout << "Mang ban vua nhap la:\n";
	for (int i = 0; i < a; i++) {
		cout <<"A[" << i << "]: " << *(arr + i) << "\t\n";

	}
	cout << endl; 
	//Xuat dia cho o nho 
	cout << "Dia chi cac phan tu:\n";
	for (int i = 0; i < a; i++) {
		cout << "A[" << i << "]: " << (arr + i) << "\t\n";
	}
	// giai phong bo nho
	delete[] arr;
}
