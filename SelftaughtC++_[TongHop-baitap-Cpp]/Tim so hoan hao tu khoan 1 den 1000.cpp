/* 
* Viết chương trình tìm số hoàn hảo trong khoản từ 1 đến 1000
* là một số nguyên dương mà tổng các ước nguyên dương của nó
* (các số nguyên dương bị chia hết ngoại trừ nó) bằng chính nó 
 */

#include <iostream>
using namespace std;

int main()
{
	cout << "Cac so hoan hao trong khoan tuw 1 - 1000 la: ";
	for (int n = 1; n <= 1000; n++)
	{
		int sum = 0;
			for (int i = 1; i < n; i++)
			{
				if (n % i == 0)
					sum += i;
			}
			if (sum == n)
				cout << n << "\t";
	}
	return 0;
}
