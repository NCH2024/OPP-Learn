/*
* Bài lý thuyết cơ bản về hàm 
* có return (int) và không có return (void)
*/

#include <iostream>
using namespace std;

int Cong(int x, int y)
{
    return x + y;
}
void Xinchao(string gioitinh)
{
    if (gioitinh._Equal("nu"))
        cout << "Xin chao chi!\n";
    else if (gioitinh._Equal("nam"))
        cout << "Xin chao anh!\n";
}
int main()
{
    int kq = Cong(10, 3);
    int Kq2 = Cong(20, -3);
    cout << "kq= " << kq <<"\n";
    cout << "kq2= " << Kq2 << "\n";

    Xinchao("nu");
    Xinchao("nam");
}
