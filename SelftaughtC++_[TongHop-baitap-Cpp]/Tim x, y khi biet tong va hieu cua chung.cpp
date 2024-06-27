


#include <iostream>
using namespace std;


int main()
{
	float tong, hieu;
	cout << "Hay nhap tong cua 2 so! ";
	cin >> tong;
	cout << "Tiep theo hay nhap hieu cua 2 so! ";
	cin >> hieu;

	float x = (tong + hieu) / 2;
	float y = tong - x;

	cout << "Vay x va y se la: " << "("<< x<< ";"<< y<<")" << endl;

	return 0;
}

