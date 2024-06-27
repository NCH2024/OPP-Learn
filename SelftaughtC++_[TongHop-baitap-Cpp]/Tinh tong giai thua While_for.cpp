/*  Viết chương trình nhập vào số nguyên n , in ra kết quả n
*       Dùng vòng lặp for
*       Dùng vòng lặp while 
*/

#include <iostream>
using namespace std;

int main()
{
	int n, giai_thua = 1 ;
	cout << "Hay nhap vao so nguyen n: ";
	cin >> n;

	/* Dùng for
	for (int i = 1; i <= n; i++)
	{
		cout << i << endl;
		giai_thua *= i;
	}
	cout << n <<  "!= " << giai_thua;
	*/
	
	// Dùng while 
	int i = 1;
	while (i<=n)
	{
		giai_thua *= i;
		i++;
	}
	cout << n << "!= " << giai_thua;
}
