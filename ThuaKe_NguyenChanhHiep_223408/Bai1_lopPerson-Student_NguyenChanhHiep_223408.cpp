/*

		bai thuc hanh buoi 4:
	XAY DUNG LOP PERSON - STUDENT:


*/

#include <iostream>
#define SIZE 100

using namespace std;

// Khai bao lop person
class Person{
	private:
		char hoTen[60];
		char gioiTinh[5];
		int ngay,thang, nam;
	public:
		void nhap();
		void xuat();
		
};
// khai bao lop dan xuat student
class Student: public Person{
	private:
		char lop[20];
		float diemThi;
	public:
		//ham lay diem
		float getDiemthi();
		void nhap();
		void xuat();
};

int main(){
	int n;
	Student ds[SIZE];
	do{
		cout << "Nhap so luong hoc sinh: "; cin >> n;
		if(n<=0) cout << "Danh sach phai co it nhat 1 nguoi, nhap lai!" << endl;
		if(n>SIZE) cout << "Danh sach qua dai, nhap lai!" << endl;
	}while(n<=0 || n > SIZE);
	for(int i = 0; i < n; i++){
		 cout << "NHAP HOC SINH THU " << i+1 << endl;
		 ds[i].nhap() ;
	}
	for(int i = 0; i < n; i++){
		cout <<"HOC SINH THU "<< i+1 << ": ";
		ds[i].xuat() ;
		cout << endl;
	}
	
	cout << "DANH SACH SAP XEP GIAM DAN THEO DIEM THI"<< endl;
	for(int i = 0; i < n; i++){
		for(int j =i + 1; j < n; j++){
			if(ds[i].getDiemthi() < ds[j].getDiemthi()){
				swap(ds[i],ds[j]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		 ds[i].xuat() ;
	}
		cout << "DANH SACH SAP XEP TAWNG DAN THEO DIEM THI"<< endl;
	for(int i = 0; i < n; i++){
		for(int j =i + 1; j < n; j++){
			if(ds[i].getDiemthi() > ds[j].getDiemthi()){
				swap(ds[i],ds[j]);
			}
		}
	}
	for(int i = 0; i < n; i++){
		 ds[i].xuat() ;
	}
	return 0;
}

//Dinh nghia lop Person
void Person::nhap() {
	fflush(stdin);
	cout << "Nhap Ho va Ten: "; gets(hoTen);
	cout << "Nhap gioi tinh: "; gets(gioiTinh);
	cout << "Nhap: ngay _ thang _ nam _ (ngay thang nam sinh) "; cin >> ngay >> thang >> nam;
}
void Person::xuat() {
	cout << "Ten: "<< hoTen << "\tGioi tinh: "<< gioiTinh <<"\tNam sinh: " << ngay << "/" << thang << "/"<< nam; 
}
//Dinh nghia lop dan xuat student
float Student::getDiemthi() {
	return diemThi;
}
void Student::nhap(){
	Person::nhap() ;
	fflush(stdin);
	cout << "Nhap vao Lop hoc: "; gets(lop);
	cout << "Nhap diem: "; cin >> diemThi;
}
void Student::xuat(){
	Person::xuat() ;
	cout << "\tLop hoc: " << lop << "\tDiem hoc phan: " << diemThi << endl;
}
