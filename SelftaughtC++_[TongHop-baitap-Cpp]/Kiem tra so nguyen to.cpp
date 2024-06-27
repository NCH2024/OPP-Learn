/*
* Viết chương trình:
* nhập vào a > 0 và kiểm tra số nguyên tố 
* (số ng tố là số >1, va chia hết cho 1 và chính nó )
* kết thúc chương trình hỏi người dùng:
* Bạn có nuốn tiếp tục sử dụng phần mềm không?
* nếu chọn không thì thóat chương trình.
*/
#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int a;
		cout << "Hay nhap vao so nguyen to a: ";
		cin >> a;
		if (a <= 0)
		{
			cout << "Vui long nhap lai so nguyen a, luu y a > 0: \n";
			continue;
		}
		// kiểm tra so nguyên tố a
		bool isPrime = true; 
		for (int i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime)
			cout << a << " La so nguyen to!\n";
		else
			cout << a << " khong la so nguyen to!\n";
		string traloi;
		cout << "Ban co muon tiep tuc khong, neu co hay nhap phim bat ky.\nNeu khong hay nhap No hoac no!\n";
		cin >> traloi;
		if (traloi._Equal("no") || traloi._Equal("No"))
		{
			cout << "Cam on ban da su dung phan mem!\n";
			break;
		}
	}

	return 0;
}