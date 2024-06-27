

#include <iostream>
using namespace std;


int main()
{
	int nam;
	cout << "Hay nhap vao so nam can tinh: ";
	cin >> nam;

	if ((nam % 4 == 0) && (nam % 100 != 0) || (nam % 100 == 0))
	{
		cout << nam << " la Nam nhuan" << endl;
	}
	else
	{
		cout << nam << " la Nam khong nhuan" << endl;
	}

return 0;
}

