/*
* Bai tập ví dụ về cach dùng mang trong c++
* 
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <random>

using namespace std;

int main()
{
    //khai báo mảng 
    int M[4];
    string M2[3];

    //khoi tao mang (có gán giá trị)
    int M3[] = { 1,5,6,8,9 };
    string M4[] = { "mot", "hai", "ba", "bon", "nam" };
    //truy xuat mang
    cout << M3[2] << M4[2] << endl;
    // kiem tra chieu dai mang
    int M5[] = { 1,8,9,10,2 };
    int chieudai = size(M5);
    cout << "chieu dai mang la:" << chieudai << "\n";
    cout << endl; 
    /*-------------------------------------------------------------------------------------------------------------------------------------*/
    cout << "----------------------------------------------------------------------------------------------\n";
    // duyệt mảng , tức là in ra man hình các phần tử trong mảng , chỉ để xem 

    cout << "cac phan tu cua mang la: ";
    int M6[] = { 10, 20, 30, 40, 50, 60 , 70, 80, 90, 100 };
    for (int phantu : M6) {
        cout << phantu;
        cout << " ";
    }
    cout << endl;
    //Duyệt mảng theo vị trí index 

    for (int i = 0; i < size(M6); i++) {
        //in ra số vị trí index trong mảng 
       // cout << "i = " << i << endl;
        //in ra các phần tử theo vị trí index trong mảng
        cout << M6[i] << "   ";
    }
    cout << endl; 
    /*-------------------------------------------------------------------------------------------------------------------------------------*/
    cout << "----------------------------------------------------------------------------------------------\n";
                        //thay đổi giá trị trong mảng 

                        //Cách 1: gọi trục tiêp phần tử từ mảng 

    int M7[] = { 1,2,3,4,5,6,8,8,9,10 };
    cout << "\nXuat gia tri M7 tai vi tri index 7 truoc khi doi: " << M7[6];
    M7[6] = { 7 };
    cout << "\nXuat gia tri M7 tai vi tri index 7 sau khi doi: " << M7[6];

    cout << endl;
    //Cách 2: Thay đổi giá trị nhiều phần tử (DÙNG FOR)

    int M8[] = { 10, 20 , 30, 40, 50 };
    for (int i = 0; i < size(M8); i++)
    {
        M8[i] += 20;
    }
    cout << "Mang sau khi thay doi: \n";// sau do dung for duyet cac phantu trong mang
    for (int pt : M8)
    {
        cout << pt << endl;
    }
    /*-------------------------------------------------------------------------------------------------------------------------------------*/
    cout << "----------------------------------------------------------------------------------------------\n";
        /*Viết chương trình tạo 1 mảng 1 chiều gồm 4 số nguyên,
        * Do người dùng nhập từ bàn phím .
        */
    int mang[4];
    cout << "Nhap gia tri mang:\n";
    for (int i = 0; i < size(mang); i++)   //Bước nhập 
    {
        cout << "Mang[" << i << "]= ";
        cin >> mang[i];
    }
    cout << "Mang[4] : ";                   // Bước xuất 
    for (int pt : mang)
        cout << pt << "; ";
    cout << endl;
    /*-------------------------------------------------------------------------------------------------------------------------------------*/
    cout << "----------------------------------------------------------------------------------------------\n";
        // SẮP XẾP MẢNG 
        // để sắp xếp mảng cần thêm thư viện #include <algorithm> 
//Giống như các thư viện String, Math . . . thư viện thuật toán – Algorithm trong C++ là một trong số các thư viện
//được sử dụng thường xuyên. Thư viện này cung cấp cho các bạn các hàm liên quan đến các thuật toán đơn giản.
//Ví dụ như hàm sắp xếp – sort, tìm min, max . . .

// Các hàm trong thư viện Algorithm tác động trên một phạm vi nhất định 
//là một giải ô nhớ có thể truy cập theo thứ tự, con trỏ.Ví dụ như mảng hoặc chuỗi.
    int mang2[5] = { 5,56,23,47,12 };
    sort(mang2, mang2 + size(mang2));                               //sort 
    cout << "Mang 2 sau khi sap xep tang dan la: ";
    for (int pt2:mang2)
        cout << pt2  << "; ";
    cout << endl;
    reverse(mang2, mang2 + size(mang2));
    cout << "Mang 2 sau khi sap xep giam dan la: ";                //reverse 
    for (int pt2 : mang2)
        cout << pt2 << "; ";
    cout << endl;
    /*-------------------------------------------------------------------------------------------------------------------------------------*/
    cout << "----------------------------------------------------------------------------------------------\n";
    //  TẠO MỘT MẢNG VỚI CÁC PHẦN TỬ NGẪU NHIÊN

    random_device rd;
    mt19937 gen(rd());                          // thuật toán ngẫu nhiên MT19937
    uniform_int_distribution < > dis(0, 99);    //khoảng ngẫu nhiên có thể thay đổi tùy ý 

    int mang3[10];
    for (int i = 0; i < size(mang3); i++) {
        mang3[i] = dis(gen);
    }
    cout << "Mang ngau nhien sau khi tao la: ";
    for (int pt3 : mang3) {
        cout << pt3 << " ";
    }
}


