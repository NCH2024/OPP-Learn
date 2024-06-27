

#include <iostream>
using namespace std;


int main()
{   //nhap mang tu ban phim 
    int size;
    cout << "Enter size: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter array[" << i <<"]:";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
        cout << "A[" << i << "]= " << arr[i] << endl;
    // Tinh tong cac phan tu trong mang
    int Tong = 0;
    for (int i = 0; i < size; i++)
        Tong += arr[i];
    cout << "Tong cac phan tu mang : " << Tong << endl;
    //tim gia tri lon nhat va gia tri nho nhat
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    delete[] arr;

    return 0;
}
