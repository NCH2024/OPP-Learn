

// Viêt chương trình nhập vào 1 chuỗi ký tự từ bàn phím 
// đảo ngược chuỗi đó va xuất ra màn hình 

#include <iostream>

using namespace std;

int main()
{
    const int max = 200;
    char str[max];
    cout << "Nhap vao chuoi ky tu: ";
    cin.getline(str, max);
    cout << "Mang vua nhap la: " << str << endl;
    cout << "Mang sau dao nguoc la: ";
    for (int i = (strlen(str) - 1); i >= 0; i--) {
        cout << str[i];
    }
}
