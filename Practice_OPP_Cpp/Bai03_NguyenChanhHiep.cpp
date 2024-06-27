/*Bai 3: Tim UCLN và BCNN*/
#include "iostream"
using namespace std;
int UCLN(int, int);
int BCNN(int, int);
int main() {
	int a, b;
	cout << "---TIM UCLN & BCNN---" << endl;
	do {
		cout << "Nhap vao a = "; cin >> a;
		cout << "Nhap vao b = "; cin >> b;
	} while (a <= 0 || b <= 0);
	cout << "UCLN(" << a << "," << b << ") = " << UCLN(a, b) << endl;
	cout << "BCNN(" << a << "," << b << ") = " << BCNN(a, b) << endl;
}

int UCLN(int a, int b) {
	while (a != b) {
		if (a > b)	a = a - b;
		else		b = b - a;
	}
	return a;
}
int BCNN(int a, int b) {
	return ((a * b) / (UCLN(a, b)));
}