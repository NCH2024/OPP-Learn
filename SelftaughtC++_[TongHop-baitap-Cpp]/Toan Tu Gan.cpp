


#include <iostream>
using namespace std;



int main()
{
  // phép toán tủ gán 

	int x = 10;
	int a;
	a = x;
	a  += 5; // x = x + 5
	cout << "a = " << a << endl;
// phép gán trừ 

	int y;
	y = x;
	y -= 3;
	cout << "y = " << y <<endl;

// phép gán nhân 
	int z;
	z = x;
	z *= 3;
	cout << "z = " << z << endl;

// phép gán chia 
	int t;
	t = x;
	t /= 5;
	cout << "t = " << t << endl;

// phép gán chia lấy dư 
	int g;
	g = x;
	g %= 3;
	cout << "g = " << g << endl;

// phép so sánh 

	int h = 23;
	int k = 6;

	cout << (h == k) << endl;
	cout << (h != k) << endl;
	cout << (h < k) << endl;
	cout << (h > k) << endl;
	cout << (h <= k) << endl;
	cout << (h >= k) << endl;

	return 0;
}
