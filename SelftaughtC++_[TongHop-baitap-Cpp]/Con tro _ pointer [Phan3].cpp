/*
* Bai tap:
*       1. Viết chương trình nhập vào mảng 1 chiều M gôm n phần tử ngẫu nhiên từ [0,100]
*       2. Sắp xếp mảng theo thứ tự giảm dần. Lưu ý: sữ dụng tên mảng như con trỏ và sữ dụng con trỏ
*/
#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

void Array(int* &arr, int n) {
	arr = new int[n];
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution < > dis(0, 100);
	for (int i = 0; i < n; i++) {
		*(arr + i) = dis(gen);
	}
} // Tạo mảng

void PrintArray(int* &arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << *(arr + i)<< "\t";
	}
}// In mảng 

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
} // Hoán vị 

void Arrange(int*& arr, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (*(arr + i) < *(arr + j))
				Swap(arr + i, arr + j);
		}
	}
} // Sắp xếp 

int main()
{
	int* arr;
	int n;
	cout << "Nhap so luong cua mang: ";
	cin >> n;

	Array(arr, n);
	cout << "Mang duoc tao ngau nhien gom "<< n <<" phan tu:\n";
	PrintArray(arr, n);
	
	cout << "\nMang sau khi sap xep giam dan:\n";
	Arrange(arr, n);
	PrintArray(arr, n);

	delete[] arr;
}