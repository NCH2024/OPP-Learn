/*

	BAI 2: XAY DUNG LOP DIEM 

*/
#include <iostream>
#include <cmath>
using namespace std;

//Khoi tao lop Diem
class Diem {
	double x, y;
	public:
		Diem(): x(0),y(0){};
		~Diem(){};
		friend istream& operator>> (istream &is, Diem &e){
			cout << "Nhap vao x = " ; is >> e.x;
			cout << "Nhap vao y = " ; is >> e.y;
			return is;
		}
		friend ostream& operator<< (ostream &os, Diem p){
			cout << "(" << p.x << " ; " << p.y << ")" ;
			return os;
		}
		double khoangCanh(Diem);
		double dienTich(Diem,Diem);
		double chuVi(Diem,Diem);
};

int main(){
	Diem u, v;
	cin >> u; cout << "Diem thu nhat " << u << endl;
	cin >> v; cout << "Diem thu hai " << v << endl;
	cout << "Khoang cach giua " << u << " va " << v << " la: " << u.khoangCanh(v) << endl;
	cout << "Chu vi cua hai diem\t" << u << "," << v << " = " << u.chuVi(u, v) << endl;
	cout << "Dien tich cua hai diem\t" << u << "," << v << " = " << u.dienTich(u, v) << endl;
	
	return 0;
}

//Phan dinh nghia ham ngoai class Diem
double Diem::khoangCanh(Diem u){
	return sqrt(pow(u.x - x, 2) + pow(u.y - y, 2));
}
double Diem::dienTich(Diem u, Diem v){
	return abs((u.x - v.x) * (u.y - v.y));
}

double Diem::chuVi(Diem u, Diem v){
	return 2*sqrt(pow(u.x - v.x, 2) + pow(u.y - v.y, 2));
}
