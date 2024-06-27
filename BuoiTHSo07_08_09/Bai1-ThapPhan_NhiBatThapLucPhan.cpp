#include <iostream>
#include <stack>

using namespace std;

//Khoi tao class
class ThapPhan_NhiBatThapLucPhan {
	private:
		int soThapPhan;
		stack<int> soNhiPhan, soBatPhan, soThapLucPhan;
	public:
		ThapPhan_NhiBatThapLucPhan() : soThapPhan(0) {};
		ThapPhan_NhiBatThapLucPhan(int sothapphan) {
			soThapPhan=sothapphan;
		};
		~ThapPhan_NhiBatThapLucPhan();
		void nhap();
		void print();
		void chuyenSangNhiPhan();
		void chuyenSangBatPhan();
		void chuyenSangThapLucPhan();
};


//Ham chay chuong trinh
int main() {
	ThapPhan_NhiBatThapLucPhan a;
//	a.print() ;
	a.nhap() ;
	a.chuyenSangNhiPhan() ;
	a.chuyenSangBatPhan() ;
	a.chuyenSangThapLucPhan() ;
	a.print() ;

	return 0;
}

//Dinh nghia ngoai class

ThapPhan_NhiBatThapLucPhan::~ThapPhan_NhiBatThapLucPhan() {
	while (!soNhiPhan.empty() ) soNhiPhan.pop() ;
	while (!soBatPhan.empty() ) soBatPhan.pop() ;
	while (!soThapLucPhan.empty() ) soThapLucPhan.pop() ;
}

void ThapPhan_NhiBatThapLucPhan::nhap() {
	cout << "Nhap vao so thap phan: " ;
	cin >> soThapPhan;
}

void ThapPhan_NhiBatThapLucPhan::print() {
	cout << "So thap phan: " << soThapPhan << endl;

	cout << "So nhi phan : ";
	while (!soNhiPhan.empty() ) {
		cout << soNhiPhan.top() ;
		soNhiPhan.pop();
	}
	cout << endl;

	cout << "So bat phan: ";
	while (!soBatPhan.empty() ) {
		cout << soBatPhan.top() ;
		soBatPhan.pop() ;
	}
	cout << endl;

	cout << "So thap luc phan: ";
	while (!soThapLucPhan.empty() ) {
		if(soThapLucPhan.top() > 9) {
			cout << char(soThapLucPhan.top() + 55);
			soThapLucPhan.pop() ;
		} else {
			cout << soThapLucPhan.top();
			soThapLucPhan.pop() ;
		}

	}
	cout << endl;
}

void ThapPhan_NhiBatThapLucPhan::chuyenSangNhiPhan() {
	int temp = soThapPhan;
	while (temp > 0) {
		soNhiPhan.push(temp % 2);
		temp /= 2;
	}
}

void ThapPhan_NhiBatThapLucPhan::chuyenSangBatPhan() {
	int temp = soThapPhan;
	while (temp > 0) {
		soBatPhan.push(temp % 8) ;
		temp /= 8;
	}
}

void ThapPhan_NhiBatThapLucPhan::chuyenSangThapLucPhan() {
	int temp = soThapPhan;
	while (temp > 0) {
		int phanDu = temp % 16;
		soThapLucPhan.push(phanDu);
		temp /= 16;
	}
}



