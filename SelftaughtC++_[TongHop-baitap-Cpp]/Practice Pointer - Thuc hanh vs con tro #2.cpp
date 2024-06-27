
// Viết một chương trình c++ để nhập vào một ma trận vuông 
// và tính tổng các phần tử trên đường chéo chính của ma trận 
// sử dụng con trỏ. 

#include <iostream>
using namespace std;


int main()
{
    // Nhập cấp của ma trận vuông 
    int n;
    cout << "Nhap vao cap cua ma tran vuong: ";
    cin >> n;
    // khai báo ma trận vuông con trỏ 
    const int col = n;
    const int row = n;

    int** matrix = new int*[col];

    for (int i = 0; i < col; i++) {
            *(matrix + i) = new int[row];
    }    
    cout << "Hay nhap cac phan tu cua ma tran vuong:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) { // sửa lại biến tăng
            cout << "A[" << i << "][" << j << "]= ";
            cin >> matrix[i][j];
        }
    }
    cout << "Ma tran ban vua nhap la:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) { // sửa lại biến tăng
            cout << matrix[i][j] << "\t";
        }
        cout << endl; // xuống dòng sau mỗi hàng
    }

    // tính tổng đường chéo chính 
    int sum = 0;
    for (int i = 0; i < col; i++) {
        sum += *(*(matrix + i) + i);
    }
    cout << "Tong cac phan tu tren duong cheo chinh la: " << sum << endl;

    // Giai phong bo nho 
    for (int i = 0; i < col; i++) {
        delete* (matrix + i);
    }
    delete[] matrix;
}
