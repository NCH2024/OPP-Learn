/*
* Tìm số chia hết cho 3 trong khoản tư 10 đến 50
*/
#include <iostream>
using namespace std;

int main()
{
	for (int i = 10; i < 51; i++)
	{
		if (i % 3 != 0)
			continue;
		cout << i << endl;
	}
	return 0;
}
