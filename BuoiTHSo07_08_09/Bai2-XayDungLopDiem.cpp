//Bai 2

#include <iostream>
#include <cmath>
using namespace std;


/*	Xây dựng lớp Diem2D (điểm trong không gian 2 chiều) như sau:
Thuộc tính
	x: kiểu số nguyên, hoành độ của điểm.
	y: kiểu số nguyên, tung độ của điểm.
	Phương thức
	Hàm khởi tạo mặc định không tham số.
	Hàm khởi tạo với 2 tham số là tọa độ x và tọa độ y.
	Hàm hủy.
	Hàm nhập và xuất tọa độ của điểm.
	Các phương thức truy xuất, cập nhật giá trị của các thuộc tính có phạm vi private.
	Hàm tính khoảng cách giữa 2 điểm.*/
class Diem2D {
	private:
		int x, y;
	public:
		Diem2D(): x(0), y(0) {};
		Diem2D(int,int);
		~Diem2D() {};
		void nhapDiem2D();
		void xuatDiem2D();
		void setX(int);
		void setY(int);
		int getX();
		int getY();
		float khoangCach(Diem2D);
};

/*Tạo lớp HinhTron (hình tròn sử dụng lớp Diem2D biểu diễn cho tâm của hình tròn):
	Thuộc tính
	Tam: kiểu Diem2D, tâm của hình tròn.
	BanKinh: kiểu số nguyên, bán kính của hình tròn.
	Phương thức
	Hàm khởi tạo mặc định không tham số.
	Hàm khởi tạo với 2 tham số là điểm tâm của hình tròn và bán kính hình tròn.
	Hàm hủy.
	Hàm nhập xuất thông tin của hình tròn.
	Hàm tính chu vi (2πr).
	Hàm tính diện tích (πr^2).*/
//class HinhTron {
//	public:
//		Diem2D Tam;
//		int banKinh;
//	public:
//		HinhTron();
//		HinhTron(Diem2D,int);
//		~Diem2D();
//		void nhapHinhTron();
//		void xuatHinhTron();
//		float chuVi_HinhTron();
//		float dienTich_HinhTron();
//};

/*Tạo lớp TamGiac (tam giác sử dụng lớp Diem2D để biểu diễn cho 3 đỉnh của tam giác)
	Thuộc tính
	d1, d2, d3: kiểu Diem2D, biểu diễn cho 3 đỉnh của tam giác.
	Phương thức
	Hàm khởi tạo mặc định không tham số.
	Hàm khởi tạo với 3 tham số là 3 điểm đại diện cho 3 đỉnh của tam giác.
	Hàm nhập, xuất thông tin của tam giác.
	Hàm kiểm tra 3 điểm vừa nhập có tạo thành tam giác hay không (chiều dài 1 cạnh bất kì phải nhỏ hơn tổng hai cạnh còn lại).
	Hàm tính chu vi (tổng độ dài 3 cạnh)
	Hàm tính diện tích:
	Gọi p là nửa chu vi, t1, t2, t3 là độ dài 3 cạnh của tam giác.
	Diện tích tam giác  = √(p(p-t1)(p-t2)(p-t3))
*/
//class TamGiac {
//	private:
//		Diem2D d1, d2, d3;
//	public:
//		TamGiac();
//		TamGiac(Diem2D, Diem2D, Diem2D);
//		~TamGiac();
//		void nhapTamGiac();
//		void xuatTamGiac();
//		int kiemTra();
//		int chiVi_TamGiac();
//		float dienTich_TamGiac();
//};

int main() {
	Diem2D A , B, C, D(999,999);
	D.xuatDiem2D();
	C.xuatDiem2D();
	A.nhapDiem2D(); A.xuatDiem2D();
	B.nhapDiem2D(); B.xuatDiem2D();
	cout << "KC " << A.khoangCach(B); 

	return 0;
}

//Dinh nghia class Diem2D
Diem2D::Diem2D(int x, int y) {
	this->x = x;
	this->y = y;
}
void Diem2D::nhapDiem2D (){
	cout << "Nhap vao cac gia tri cua DIEM 2D: " <<endl;
	cout << "Gia tri x = "; cin >> x;
	cout << "Gia tri y = "; cin >> y;
}
void Diem2D::xuatDiem2D(){
	cout << "(" << x << "; " << y << ")" << endl;
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
float Diem2D::khoangCach(Diem2D p){
	return 	sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}
//Dinh nghia class HinhTron
//Dinh nghia class TamGiac