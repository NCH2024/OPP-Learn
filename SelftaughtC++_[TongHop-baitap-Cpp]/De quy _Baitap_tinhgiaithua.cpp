//Cơ bản về phương pháp đệ quy trong C++
//VD: về dùng đệ quy trong tính gia thừa 

#include <iostream>
using namespace std;

//Hàm tính giai thừa 

int Giaithua(int n) {
    if (n <= 1)
        return 1;
    return n * Giaithua(n - 1);  //Dùng đệ quy gọi lại hàm chính nó 
}

// Hàm fibonacci

int f(int n) {
    if (n <= 2) {
        return 1;
    }
    return f(n - 1) + f(n - 2);  //lấy giá trị tại f 3 + f4 
}

int main()
{
    //Gọi lại hàm tính giai thừa 
    int ketqua = Giaithua(4);
    cout << "Ket qua = " << ketqua << "\n";
    
    //Gọi hàm fibonacci
    int ketqua2 = f(5);
    cout << "Ket qua = " << ketqua2 << "\n";

}
