#include <iostream>
#include <cstdio>
#define SIZE 100
using namespace std;

class Card{
	char tuaDe[100], tacGia[50];
	int soLuongBan;
	public:
		int getSoLuongBan();
		void nhap();
		void xuat();
}; 

int main(){
	int n;
	Card ds [SIZE];
	do{
		cout << "Nhap vao so dau sach: "; cin >> n;
	}while(n <= 0 || n > SIZE);
	for(int i = 0; i < n; i++){
		ds[i].nhap() ;
	}
	
	Card max = ds[0];
	for(int i = 0; i < n; i++){
		if(max.getSoLuongBan() < ds[1].getSoLuongBan() )
		max = ds[i];
	}
	cout << "SAch co so luong ban nhieu nhat la: " <<endl;
	max.xuat() ;
	
	return 0;
}
//dinh nghia ngoai class Card

int Card::getSoLuongBan() {
	return soLuongBan;
}
void Card::nhap() {
	cin.ignore(); fflush(stdin);
	cout <<"Nhap tua sach: "; gets(tuaDe);
	cout <<"Nhap tac gia: "; gets(tacGia);
	cout <<"Nhap so luong ban ra: "; cin >> soLuongBan;
}
void Card::xuat() {
	cout << tuaDe << " === " << tacGia << " === " << soLuongBan << endl;
}
