#include <iostream>
using namespace std;
//Khai bao class Diem2D
class Diem2D{
	private:
		int x, y;
	public:
		Diem2D();
		Diem2D(int);
		Diem2D(int, int);
		~Diem2D(){};
		void setX(int);
		void setY(int);
		int getX();
		int getY();
		void TinhTien(int, int);
		void Nhap();
		void Xuat();
};


int main(){
	Diem2D a;
	a.Nhap();
	cout << "Diem 2D : A = ";
	a.Xuat();
	a.TinhTien(10,10); cout << "Diem A tinh tien toa do (10,10), ta duoc: "; a.Xuat() ; 
	cout << "----------------------------" << endl;
	Diem2D b;
	Diem2D f(1);
	Diem2D c(3,5);
	cout << "Diem B (mac dinh): "; b.Xuat() ;
	cout << "Diem C (truyen 2 doi so): "; c.Xuat() ;
	cout << "Diem F (truyen 1 doi so): "; f.Xuat() ;

	cout << "----------------------------" << endl;
	Diem2D e(1,2);
	cout << "Diem E ban dau: "; e.Xuat() ;
	cout << "\tThay doi gia tri E(x = 2, y = 3) : "; e.setX(2);e.setY(3);
	cout << "(" << e.getX() << ";" << e.getY() <<")" << endl;

	return 0;
}

//Dinh nghia class Diem2D
Diem2D::Diem2D(){
	x = y = 0;
}
Diem2D::Diem2D(int x){
	this->x = x;
	y = 0;
}
Diem2D::Diem2D(int x, int y){
	this->x = x;
	this->y = y;
} 
void Diem2D::setX(int x){
	this->x = x;
}
void Diem2D::setY(int y){
	this->y = y;
}
int Diem2D::getX(){
	return x;
}
int Diem2D::getY(){
	return y;
}
void Diem2D::TinhTien(int x, int y){
	this->x += x;
	this->y += y;
}
void Diem2D::Nhap(){
	cout << "Nhap vao X = "; cin >> x;
	cout << "Nhap vao Y = "; cin >> y;
}
void Diem2D::Xuat() {
	cout << "(" << x << ";" << y << ")"<<endl;
}

