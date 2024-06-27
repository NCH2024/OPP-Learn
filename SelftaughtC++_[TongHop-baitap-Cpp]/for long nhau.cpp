/* Bài ví dụ về for lồng nhau trong C++
* For lồng nhau nói nôm na như các ma trận đã từng học trong toán cao cấp
* dòng for ngoài cùng tương ứng với chỉ số hàng
* dòng for bên trong tương ứng với chỉ số cột
* cú pháp :
*			for ()
*			{ for ()
*				{};
*			};
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "Mai yeu em !" << endl;
	cout << endl; 

	/*for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cout << i << j << " ";
		}
		cout << endl;
	}*/


	// vẽ chữ LOVE bằng for lồng nhau 

    for (int i = 0; i <= 6; i++) {
        for (int j = 0; j <= 18; j++) 
		{
            if (i==1 && (j==1||j==5||j==6||j==7||j==9||j==13||j==15||j==16||j==17)||
				i==2 && (j==1||j==5||j==7||j==9||j==13|| j==15)||
				i == 3 && (j == 1 || j == 5 || j == 7 || j == 9 || j == 13 || j == 15||j==16||j==17)||
				i == 4 && (j == 1 || j == 5 || j == 7 || j == 10 || j == 12 || j == 15)||
				i == 5 && (j == 1||j==2||j==3|| j == 5||j==6 || j == 7 || j == 11 || j == 15||j==16||j==17))
                cout << "     "; 
            else 
			{
                cout << "LOVE ";
            }
        }
        cout << "\n";
    }

    return 0;
}
