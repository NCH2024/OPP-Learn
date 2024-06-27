/*
* Viết chương trình:
* Giải phương trình bậc hai :
*   1. Tìm nghiệm của ptb2 : a=1,b=2,c=3
*   2. Tìm nghiệm của ptb2 : a=1, b=2 , c=1
*   3. Tìm nghiệm của ptb2 : a=1 , b=2 , c= -1 
*/


#include <iostream>
#include <cmath>
using namespace std;

void GiaiPTB2(double a, double b, double c)
{
	int x1, x2;
	int delta = (b * b)- (4 * a * c);
	 // kiem tra delta
	// biểu thức chứa căn bậc 2 nên phải khai báo thư viện "cmath" 
	if (delta > 0)
	{
		x1 = ((-b) + sqrt(delta)) / 2 * a;
		x2 = ((-b) - sqrt(delta)) / 2 * a;
		cout << "Phuong trinh co 2 nghiem phan biet:\n";
		cout << "X1 = " << x1 << endl;
		cout << "X2 = " << x2 << endl;
	}
	else if (delta == 0)
	{
		x1 = (-b) / 2 * a;
		cout << "Phuong trinh co nghiep kep: X1 = X2 = " << x1 << endl;
	}
	else
		cout << "Phuong trinh vo nghiem\n";
}

int main()
{
// 1. Tìm nghiệm của ptb2 : a=1,b=2,c=3
	GiaiPTB2(1, 2, 3);
// 2. Tìm nghiệm của ptb2 : a=1, b=2 , c=1
	GiaiPTB2(1, 2, 1);
// 3. Tìm nghiệm của ptb2 : a=1 , b=2 , c=- 1
	GiaiPTB2(1, 2, -1);
	// Thêm câu lệnh hỏi người dùng muốn nhập bài toán vào không
	cout << "----------------------------------------------------\n---------------------------------------------------\n";
	string traloi;
	while (true)
	{
		cout << "Ban co muon nhap pt bac 2 tu ban phim khong?\nNeu muon hay nhap phim bat ki, neu khong hay nhap No/no\n";
		cin >> traloi;
		if (traloi._Equal("No") || traloi._Equal("no"))
		{
			cout << "---------------------------success------------------------------\n                         THANK YOU                  \n";
			break;
		}
		else {
			// Nâng cao
			// cho người dùng nhập tưg bàn phím
			int x, y, z;

			cout << "Moi nhap vao a: ";
			cin >> x;

			cout << "Moi nhap vao b: ";
			cin >> y;

			cout << "Moi nhap vao z: ";
			cin >> z;
			GiaiPTB2(x, y, z);
		}
	}
}
