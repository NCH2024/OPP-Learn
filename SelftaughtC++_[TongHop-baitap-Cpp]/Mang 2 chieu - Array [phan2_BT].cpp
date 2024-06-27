/*
* ĐỀ BÀI:
* Viết chương trinh mảng 2 chiều:
*       1. Viết chương trình tạo một mảng 2 chiều có kích thướt 4 dòng, 6 cột 
*           các phần tủ là số nguyên, được tạo ra ngẫu nhiên.
*       2. Xuất các gia trị trong mảng.
*       3. Tìm số lớn nhất trong mảng? Xuất giá trị đó.
*       4. Tìm số nhỏ nhất trong mảng? Xuất gía trị đó.
*       5. Tính tổng các phân tư trong mảng.
*       6. Cho người dùng nhập một số bất kỳ, kiểm tra nó có tông tại trong mảng hay không
*           Nếu có thì có bao nhiêu số?
*/
#include <iostream>
#include <random>
#include <string>
using namespace std;


int main()
{
	/*1. Viết chương trình tạo một mảng 2 chiều có kích thướt 4 dòng, 6 cột
		* các phần tủ là số nguyên, được tạo ra ngẫu nhiên.*/
	random_device rd_matrix;
	mt19937 gen(rd_matrix());
	uniform_int_distribution < > dis(0, 99);
	const int row = 4;
	const int col = 6;
	int matrix[row][col]{};
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			matrix[i][j] = dis(gen);
		}
	}
	//2. Xuất các gia trị trong mảng.
	cout << "Ma tran A[" << row << "][" << col << "]:\n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
	//3. Tìm số lớn nhất trong mảng ? Xuất giá trị đó.
	//4. Tìm số nhỏ nhất trong mảng ? Xuất gía trị đó.
	int max_value = 0;
	int min_value = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (matrix[i][j] < min_value) {
				min_value = matrix[i][j];
			}
			if (matrix[i][j] > max_value) {
				max_value = matrix[i][j];
			}
		}
	}
	cout << "Gia tri lon nhat cua A la: " << max_value << endl;
	cout << "Gia tri nho nhat cua A la: " << min_value << endl;

	//5. Tính tổng các phân tư trong mảng.

	int sum = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += matrix[i][j];
		}
	}
	cout << "Tong cac gia tri cua A la: " << sum << endl;

	//*6. Cho người dùng nhập một số bất kỳ, kiểm tra nó có tông tại trong mảng hay không
	//	* Nếu có thì có bao nhiêu số ?


	//nang cao them while
	while (true)
	{
		string respond;
		cout << "\nBan co muon tiem kiem gia tuong ung trong ma tran khong?\nNeu co hay nhap [yes], neu khong nhap [no]: ";
		cin >> respond;
		if (respond  != "yes" && respond != "no") {
			cout << "Moi ban nhap lai, Luu y: yes/no !!!\n";
		}
		else {
			if (respond._Equal("yes")) {

				int Enter_num;
				cout << "Nhap gia tri muon kiem tra: ";
				cin >> Enter_num;

				int So_luong = 0;
				for (int i = 0; i < row; i++) {
					for (int j = 0; j < col; j++) {
						if (Enter_num == matrix[i][j]) {
							So_luong++;
						}
					}
				}
				if (So_luong == 0) {
					cout << "Khong co gia tri tuong ung!!!";
				}
				else {
					cout << "Co " << So_luong << " gia tri tuong ung voi gia tri: " << Enter_num;
				}
			}

			if (respond._Equal("no")) {
				cout << "Cam on ban da dung phan mem!!!";
				break;
			}
		}
	}
}
