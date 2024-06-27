/*
* viết chương trình :
*       1. tạo 1 mảng 1 chiều gom các phần tử là số nguyên gồm 7 phần tử ngẫu nhiên.
*       2. xuất các phân tử trong mảng
*       3. Đảo ngược mảng và xuất mảng sau khi đảo ngược
*       4. Sắp xếp mảng tăng dần
*       5. Tính tổng các giá trị trong mảng
*       6. cho người dùng nhập 1 số bất kỳ, kiểm tra xem số đó có năm trong mảng hay không , nếu có thì có nhiêu số ?
*/

#include <iostream>
#include <random>
#include <algorithm>
using namespace std;

int main()
{
    //1. tạo 1 mảng 1 chiều gom các phần tử là số nguyên gồm 7 phần tử ngẫu nhiên. 

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution < > dis(0, 99);

    int arr[7]{};
    for (int i = 0; i < size(arr); i++) {
        arr[i] = dis(gen);
    }
    // 2. xuất các phân tử trong mảng
    cout << "A[7] = ";
    for (int pt : arr) {
        cout << pt << " ";
    }
    cout << endl;
    // 3. Đảo ngược mảng và xuất mảng sau khi đảo ngược 
    cout << "Mang A sau khi sap xep dao nguoc A[7]: ";
    reverse(arr, arr + size(arr));
    for (int pt : arr) {
        cout << pt << " ";
    }
    cout << endl;
    // 4. Sắp xếp mảng tăng dần
    cout << "Mang A sap xep tang dan A[7]: ";
    sort(arr, arr + size(arr));
    for (int pt : arr) {
        cout << pt << " ";
    }
    cout << endl;
    //5. Tính tổng các giá trị trong mảng
    int sum = 0;
    for (int i = 0; i < size(arr); i++) {
        sum += arr[i];
    }
    cout << "Tong cac phan tu trong mang : " << sum << endl;
    //6. cho người dùng nhập 1 số bất kỳ, kiểm tra xem số đó có năm trong mảng hay không , nếu có thì có nhiêu số ?
    int number;
    cout << "Enter number: ";
    cin >> number;

    int soluong_phantu = 0;
    for (int i = 0; i < size(arr); i++) {           //Bien dich: cho i chạy từ không đến giá trị cuối của mảng, kiểm tra nếu number trùng với 
        if (number == arr[i])                                   // số trong mảng thì tăng biến số luọng lên 1.
            soluong_phantu++;
    }
    if (soluong_phantu == 0) {
        cout << "Khong co so " << number << " trong mang";
    }
    else {
        cout << "Co " << soluong_phantu << " so " << number << " trong mang";
    }
}
