// Tìm hiểu về cấu trúc mảng 2 chiều 

#include <iostream>
#include <string>
#include <random>
using namespace std;


int main()
{
    // KHỞI TẠO MẢNG 2 CHIỀU 
    int arr1[3][4]{};
    string arr2[3][5];
    float arr3[3][3]{};

    // KHỞI TẠO VÀ GÁN GIÁ TRỊ 
    const int row = 3;
    const int col = 4;
    int arr4[row][col] = { {1,7,3,4},{5,6,7,8},{9,4,8,2} };
    
    // XUẤT MẢNG 2 CHIỀU 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr4[i][j] << "\t";
        }
        cout << endl;
    }
    
    //GỌI TRỰC TIẾP 
    cout << "Goi truc tiep phan tu dau va cuoi ma tran:\n";
    cout << arr4[0][0] << endl;
    cout << arr4[2][3] << endl;

    // GỌI VÀ GÁN GIÁ TRỊ TRỰC TIẾP 

    cout << "Mang sau khi thay doi gia tri dau va cuoi la:\n";
    arr4[0][0] = 2;
    arr4[2][3] = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr4[i][j] << "\t";
        }
        cout << endl;
    }

    // TẠO MẢNG NGẪU NHIÊN 
        //1.Tạo biến random:
    random_device M;
    mt19937 gen(M());
    uniform_int_distribution < > dis(0, 999);
        //2. Tạo mảng random:
    int M_ngau_nhien[row][col];
        //3. Duyệt phần tử cho mảng ngẫu nhiên:
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            M_ngau_nhien[i][j] = dis(gen);
        }
    }
        //4. Xuất mảng ngẫu nhien vừa tạo:
    cout << "Mang ngau nhien duoc tao ra la: \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << M_ngau_nhien[i][j] << "\t";
        }
        cout << endl;
    }
    // MẢNG NHẠP TỪ BÀN PHÍM 
        //1. Tạo lệnh nhệp mảng:

    int M_nhap_tu_ban_phim[row][col]{};
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Nhap gia tri ma tran A tai [" << i << "][" << j << "]= ";
            cin >> M_nhap_tu_ban_phim[i][j];
        }
        cout << endl;
    }
        //2. Xuất mảng vừa nhập:
    cout << "Ma tran A = \n";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << M_nhap_tu_ban_phim[i][j]<< "\t";
        }
        cout << endl;
    }

    // DUYỆT THEO CHỈ SỐ DÒNG HOẶC CỘT ĐƯỢC NHẬP TỪ BÀN PHÍM 
        //1. Duyệt theo dòng:
            //a. Lệnh nhập dòng:
    int line;
    cout << "Enter 1 line [starts at 0]: ";
    cin >> line;
            //b. Lệnh in ra màn hình:
    cout << "Line[" << line << "]= ";
    for (int i = 0; i < col; i++) {
        cout << M_nhap_tu_ban_phim[line][i] << "\t";
    }
    cout << endl;   
        //2. Duyệt theo cột:
            //a. Lệnh nhập cột:
    int column;
    cout << "Enter 1 column [starts at 0]: ";
    cin >> column;
            //b. lệnh in ra màn hình:
    cout << "Column[" << column << "]= \n";
    for (int i = 0; i < row; i++) {
        cout << M_nhap_tu_ban_phim[i][column] << "\n";
    }
}

