/* chương trình kiểm tra số ngày của 1 tháng , có yêu câuf người dùng nhập vào số liệu:
*Tháng 1, 3, 5, 7, 8, 10, 12 có 31 ngày 
*Tháng 4,6,9,11 có 30 ngày
*Tháng 2 có 28 hoặc 29 ngày 
*(mở rộng chương trình nếu tháng 2 của năm nhuận thì tháng 2 có 29 ngày và ngược lại)
*/


#include <iostream>
using namespace std;


int main()
{
	int month;
	cout << "Hay nhap vao mot thang: " << endl;
	cin >> month;

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout <<"Thang" << month << " la thang co 31 ngay." << endl;
		break;

	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang"<<month << " la thang co 30 ngay." << endl;
		break;

	case 2:
		cout << month << " la thang co 28 hoac 29 ngay." << endl;
		break;
	default :cout << " Ban nhap thang tao lao!" << endl;
		break;
	}
	// Nâng cao chương trình : tính tháng 2 theo nam nhuan 
	
	if (month == 2)
	{
		cout << "Ban co muon biet no co 28 hay 29 ngay theo nam khong?" << endl;
		int respond;
		cout << "Neu muon ban nhap (1) de tiep tuc, neu khong hay nhap vao (0)" << endl;
		cin >> respond;
		switch (respond)
		{
		case 1: 
		
			int year;
			cout << "Hay nhap vao 1 nam: " << endl;
			cin >> year;
				if ((year % 4 == 0) && (year % 100 != 0) || (year % 100 == 0))
				{
					cout << "Thang 2 cua nam " << year <<"(nam nhuan)" << " co 29 ngay!" << endl;
				}
				else
				{
					cout << "Thang 2 cua nam " << year << "(nam khong nhuan)" << " co 28 ngay!" << endl;
					cout << "Thang 2 cua nam " << year << "(nam khong nhuan)" << " co 28 ngay!" << endl;
				}
		break;

		default: cout << "Khong dung! Hay thu lai sau!" << endl;
		break;
		}
	}
	else
	{
		cout << "" << endl;
	}

return 0;
}
