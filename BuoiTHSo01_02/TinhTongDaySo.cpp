#include <iostream>

using namespace std;

class tongDaySo {
	private:
		int n;
	public:
		tongDaySo(); 
		tongDaySo(int n): n(n) {};
		int tinhTong() const;
};

int main() {
	int n;
	cout << "Nhap n = " ; cin >> n;
	tongDaySo A(n);
	cout << "Tong day so : " << A.tinhTong() << endl; 

	return 0;
}

int tongDaySo::tinhTong() const {
	int sum;
	for(int i = 0; i < n; i++) {
		sum += i;
	}
	return sum;
}
