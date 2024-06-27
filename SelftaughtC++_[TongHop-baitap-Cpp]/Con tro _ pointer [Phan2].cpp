/*
* bài tập :
*   1. Viét hàm (function) hoán vị hai biến a, b là số thực bằng cách sữ dụng con trỏ 
*   2. Viết chương trình nhập vào 2 số a và b. Dùng hàm trên để đổi chỗ a và b.
*/

#include <iostream>
using namespace std;

// Viết hàm function:
void hoanvi(double* a, double* b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    double a, b;
    cout << "Moi nhap vao a: ";
    cin >> a;
    cout << "Moi nhap vao b: ";
    cin >> b;
    // Gán giá trị vừa nhập vào hàm function

    hoanvi(&a, &b);

    cout << "Gia tri a se la: " << a << endl;
    cout << "Gia tri b se la: " << b << endl;
}
