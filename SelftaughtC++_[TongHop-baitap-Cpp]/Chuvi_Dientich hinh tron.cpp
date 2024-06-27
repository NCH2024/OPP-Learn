/* Đề bài:
* tính chu vi và diện tích hình tròn
* nhập vào bán kính r từ bàn phím , và in ra kết quả
* a. Tính chu vi =?
* b. Tính diện tích =?
* gợi ý:
* CV= 2*PI*r
* DT= PI*r*r
*/

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
    double r;
    cout << "Hay nhap vao ban kinh (cm) :" << endl;
    cin >> r;
    float Chu_vi = r * M_PI * 2;
    float Dien_tich = M_PI * pow(r,2);

    cout << "Day la ket qua" << endl;
    cout << "Chu vi hinh tron " << "voi r = "<< r <<" la: " << Chu_vi << "cm^2" << endl;
    cout << "Dien tich hinh tron " << "voi r = " << r << " la: "<<Dien_tich<<"cm^3" << endl;


    return 0;
}

