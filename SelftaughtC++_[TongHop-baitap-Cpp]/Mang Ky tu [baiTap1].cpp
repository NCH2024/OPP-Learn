

// Viết chương trình nhập một chuỗi ký tự từ bàn phím. 
// Xuất ra màn hình ký tự mã ASII của chuỗi vừa nhập vào
// mỗi ký tuẹ xuống 1 dòng.

#include <iostream>

using namespace std;

int main()
{
    const int max = 200;
    char str[max];
    cout << "Nhap vao chuoi cua ban: ";
    cin.getline(str, max);
    for (int i = 0; i < strlen(str); i++) {
        cout <<"'"<< str[i]<<"'" << " Ma ASII la: " << (int)(str[i]) << endl;
    }
}
