
/*
	BAI 1: CAI DAT LOP NUMBER (su dung tai dinh nghia ham)

*/
#include <iostream>

using namespace std;

//Khai bao lop Number
class Number{
	float x;
	public:
		Number(): x(0){};
		~Number(){};
		friend istream& operator >> (istream &is, Number &u){
			cout << "Nhap vao gia tri x: "; 
			is >> u.x;
			return is;
		} ;
		friend ostream& operator << (ostream &os, Number u){	
			cout <<  u.x << endl;
			return os;
		};
		
		Number operator+ (Number);
		Number operator- (Number);
		Number operator* (Number);
		Number operator/ (Number);
};

int main(){
	Number a , b, cong, tru, nhan, chia;
	cin >> a >> b;
	cout << a << b;
	cong = a+b;
	tru = a-b;
	nhan = a*b;
	chia = a/b;
	cout << "Tong: " << cong <<endl;
	cout << "Tru: " << tru << endl;
	cout << "Nhan: " << nhan << endl;
	cout << "chia: " << chia << endl;
	return 0;
}

//tai dinh nghia ngoai class Number

Number Number::operator+(Number n){
	Number t;
	t.x = x + n.x ;
	return t;
}
Number Number::operator-(Number n){
	Number t;
	t.x = x - n.x ;
	return t;
}
Number Number::operator*(Number n){
	Number t;
	t.x = x * n.x ;
	return t;
}
Number Number::operator/(Number n){
	Number t;
	t.x = x / n.x ;
	return t;
}
