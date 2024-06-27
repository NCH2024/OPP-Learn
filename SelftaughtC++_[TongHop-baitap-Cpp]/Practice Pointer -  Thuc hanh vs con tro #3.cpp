

// Viết một chương trình c++ để nhập vào một chuỗi ký tự 
// và đếm số lần xuất hiện của một ký tự cho trước trong chuỗi 
// sử dụng con trỏ.

#include <iostream>

using namespace std;

int main()
{
    // Người dùng nhập số lượng ký tự của xâu 
    int n;
    cout << "Hay nhap so luong ky tu co trong chuoi cua ban: ";
    cin >> n;

    char* str = new char[n]; // khai báo con trỏ xâu
    cout << "Hay nhap ky tu trong xau cua ban: \n";
    for (int i = 0; i < n; i++) {
        cin >> *(str + i);
    }
    cout << "\n";
    // Xuất xâu 
    cout << "Xau ban vua nhap la: \n";
    for (int i = 0; i < n; i++) {
        cout << str[i] << "\t";
    }
    cout << endl;
    // Nhập ký tự cần đối chiếu 
    char a;
    cout << "Hay nhap ky tu ban can tim kiem: \n";
    cin >> a;
    // lệnh tìm kiếm ký tự 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (*(str + i) == a) {
            sum++;
        }
    }
    cout << endl;
    cout << "So ky tu [" << a << "] co trong chuoi ban vua nhap la: " << sum << endl;
    // Giai phong bo nho
    delete[] str;
}
