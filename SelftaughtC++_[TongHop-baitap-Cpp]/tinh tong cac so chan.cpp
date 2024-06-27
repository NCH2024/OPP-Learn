/* 
Viết chương trình nhập số a từ bàn phím,
Nếu a chẳn thì tính tổng từ 0 đến a 
Nếu a lẻ thì in ra màn hình dòng chữ 
"Tôi không tính tổng các số lẻ" và thóat chương trình 
*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Hay nhap so chang a: ";
    cin >> a;
    // kiem tra a
    if (a % 2 == 0)
    {
        int tong = 0;
        for (int i = 0; i <= a; i += 2) //do tính tổng các số chẳn nên tăng a lên 2 mỗi lần lặp 
        {
            tong += i;
            cout << "i= " << i << "\n";
        }
        cout << "Tong cua cac so tu 0 den " << a << " la: " << tong << endl;
    }
    else
    {
        cout << "Toi khong tinh tong cac so le";
    }
    return 0;
}

