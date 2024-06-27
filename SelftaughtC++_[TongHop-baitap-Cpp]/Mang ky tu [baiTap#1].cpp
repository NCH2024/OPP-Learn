

//Viết chương trình nhập vào một chuỗi ký tự từ bàn phím sau đó in ra độ dài của chuỗi đó.
//Hoán đổi chuỗi đã tạo và in ra màn hình 

#include <iostream>
using namespace std;

int main()
{
    char cha[200];
    cout << "Moi nhap vao chuoi : ";
    cin.getline(cha, 200);

    int doDai = strlen(cha);
    cout << "Do dai cua chuoi la: " << doDai << endl;

    for (int i = 0; i < doDai / 2; i++) {
        char temp = cha[i];
        cha[i] = cha[doDai - 1 - i];
        cha[doDai - 1 - i] = temp;
    }
    cout << "Chuoi dao nguoc la: " << cha << endl;
}
