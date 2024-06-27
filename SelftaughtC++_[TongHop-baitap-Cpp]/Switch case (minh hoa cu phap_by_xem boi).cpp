

#include <iostream>
#include <string>
using namespace std;

struct Thong_tin   //khai báo thông tin người xem bói 
{
	int ngay, thang, nam;
	string ho_ten;
	float chieu_cao;
	float can_nang;
};
int main(void)
{
	struct Thong_tin nhap;
	cout << "Hay cho toi biet ten ban la gi: ";
	cin >> nhap.ho_ten;
	cout << "Hay nhap ngay sinh cua ban: ";
	cin >> nhap.ngay;
	cout << "Thang sinh la: ";
	cin >> nhap.thang;
	cout << "Nam sinh la: ";
	cin >> nhap.nam;
	cout << "Hay nhap lan luot can nang va chieu cao cua ban nhe! " << endl;
	cout << "can nang: ";
	cin >> nhap.can_nang;
	cout << "" << endl;
	cout << "chieu cao: ";
	cin >> nhap.chieu_cao;


	return 0;
}
