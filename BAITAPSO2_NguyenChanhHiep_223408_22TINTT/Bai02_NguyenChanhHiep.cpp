/*Bai 2: Giai va bien luan phuong trinh bac hai*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	cout << "-GIAI PHUONG TRINH-" << endl;
	float a, b, c, delta, x, x1, x2;
	cout << "Nhap vao he so a = "; cin >> a;
	cout << "Nhap vao he so b = "; cin >> b;
	cout << "Nhap vao he so c = "; cin >> c;

	//Neu a == 0
	if (a == 0) {
		cout << "Phuong trinh co dang:\t" << b << "x + " << c << " = 0" << endl;
		if (b == 0 && c == 0) cout << "Phuong trinh co vo so nghiem" << endl;
		else if (b == 0 && c != 0) cout << "Phuong trinh vo nghiem" << endl;
		else cout << "Nghiem cua phuong trinh la: x = \t" << -c / b << endl;
	}
	//Neu a != 0
	else {
		delta = b * b - 4 * a * c;
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		x = -b / (2 * a);
		cout << "Phuong trinh co dang: " << a << "x^2 + " << b << "x + " << c << " = 0" << endl;
		if (delta > 0) {
			cout << "Delta = " << delta << endl;
			cout << "Phuong trinh co 2 ngiem phan biet: X1 =\t" << x1 << " ; x2 =\t" << x2 << endl;
		}
		else if (delta == 0) {

			cout << "Delta = " << delta << "\tPhuong trinh co nghiem kep x =\t" << x1 << endl;
		}
		else {
			cout << "Delta = " << delta << "\tPhuong trinh vo nghiem!" << endl;
		}
	}
	return 0;
}