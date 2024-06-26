#include <iostream>
#include <cmath>

using namespace std;
//Khoi tao lop TamGiac
class TamGiac {
		double canhA, canhB, canhC;
	public:
		TamGiac(double canhA = 0,double canhB = 0, double canhC = 0) {
			this->canhA = canhA;
			this->canhB = canhB;
			this->canhC = canhC;
		}
		void nhap();
		void xuat();
		int hopLe();
		void phanLoai();
		double tinhChuVi();
		double tinhDienTich();
};

//Ham chay chuong trinh
int main() {
	TamGiac ABC;

	cout << "Nhap do dai cac canh cua tam giac: "<< endl;
	do {
		ABC.nhap() ;
		if (!ABC.hopLe()) cout << "Day khong phai 3 canh cua tam giac, nhap lai" <<endl;
	} while(!ABC.hopLe());
	ABC.xuat();
	ABC.phanLoai();
	cout << "Chu vi: " << ABC.tinhChuVi() << endl;
	cout << "Dien tich: " << ABC.tinhDienTich() << endl;

	return 0;
}

//Dinh nghia ngoai lop TamGiac

void TamGiac::nhap() {
	cout << "Nhap do dai canh a = ";
	cin >> canhA;
	cout << "Nhap do dai canh b = ";
	cin >> canhB;
	cout << "Nhap do dai canh c = ";
	cin >> canhC;
}
void TamGiac::xuat() {
	cout << "Tam giac ABC: (" << canhA << ", " << canhB << ", " << canhC <<")" << endl;
}
int TamGiac::hopLe() {
	double A = canhA, B = canhB, C = canhC;
	return (A + B > C || A + C > B || B + C > A)
	       && (A > 0 && B > 0 && C > 0);
}
void TamGiac::phanLoai() {
	double a,b,c;
	a = canhA;
	b = canhB;
	c = canhC;
	if(a == b || b == c)
		cout << "Tam giac Deu" << endl;
	else if ((a == b && b != c)|| (b == c && c != a) || (c == a && a != b))
		cout << "Tam giac Can" << endl;
	else if((a*a+b*b == canhC*c)||(a*a+c*c==b*b)||(a*a==b*b+c*c))
		cout << "Tam giac Vuong" << endl;
	else if ((a==b&&b!=c&&2*a*a==c*c)||(b==c&&c!=a&&2*b*b==a)||(c==a&&a != b && 2*c*c==b*b))
		cout << "Tam giac Vuong Can" << endl;
	else cout << "Tam giac Thuong" << endl;
}
double TamGiac::tinhChuVi() {
	return (canhA + canhB + canhC);
}
double TamGiac::tinhDienTich() {
	double A = canhA, B = canhB, C = canhC;
	return sqrt(((A + B + C) / 2) * ((A + B + C) / 2 - A) * ((A + B + C) / 2 - B) * ((A + B + C) / 2 - C));
}


