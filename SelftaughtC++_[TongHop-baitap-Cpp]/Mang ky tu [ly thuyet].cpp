

/*
*           MẢNG KÝ TỰ :
*   1. Tìm hiểu về mang ký tự 
*   2. Nhập xuất chuỗi                                  - cin.getline
*   3. Sao chép chuỗi ký tự                             - strcpy_s
*   4. Nối chuỗi                                        - strcat_s
*   5. Tìm kiếm ký tự và chuỗi ký tự                    - strchr/strstr
*   6. So sánh 2 chuỗi                                  - strcmp
*   7. Đổi ký tự trong chuỗi sang hoa và thường         - toupper/tolower 
*/

#include <iostream>
#include <cstring> //thu viện khi dùng lệnh: strcpy_s, strncpy_s , strcat_s, strncat_s ,...v.v
using namespace std;

int main()
{
    //1. TÌM HIỂU VỀ MẢNG KÝ TỰ 
    // dùng mảng 1 chiều:

    char kyTu[5] = { 'a','b','c','d' }; //luôn chừa 1 vị trí cuối cho ký tự null '\0'
    cout << "Mang ky tu la: " << kyTu << endl;

    //dùng con trỏ 

    char* P_KyTu;
    P_KyTu = new char[51]; //cấp phát bộ nhớ cho chuỗi 
    //gán các giá trị cho chuỗi 
    P_KyTu[0] = 'a';
    P_KyTu[1] = 'b';
    P_KyTu[2] = '\0';
    cout << "Mang ky tu dung con tro: " << P_KyTu << endl;

    //dùng hằng chuỗi 

    char chuoi[] = "Hello";
    cout << chuoi << endl;
    cout << size(chuoi) << endl; // Kiểm tra kích thước mảng 
    /*---------------------------------------------------------------------------------------------------------------------------- - */
    cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
    //2. NHẬP XUẤT CHUỖI 

    //cách 1 dùng mang ký tự:
    const int max = 100;
    char A[max];
    cout << "Cach 1: Moi nhap chuoi: ";
    cin.getline(A, max);
    cout << "Chuoi sau khi nhap: " << A << endl;

    cin.clear();  // xóa trạng thái lỗi 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Xóa bộ nhớ tối đa đã lưu trữ 

    //cách 2 dùng con trỏ:
    char* B = new char[max];
    cout << "Cach 2: Moi nhap chuoi: ";
    cin.getline(B, max);
    cout << "Chuoi sau khi nhap: " << B << endl;

    cin.clear();  // xóa trạng thái lỗi 
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Xóa bộ nhớ tối đa đã lưu trữ 
    /*---------------------------------------------------------------------------------------------------------------------------- - */
    cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
    // 3. SAO CHÉP CHUỖI KÝ TỰ
            // trước khi thực hiện lệnh sao chép cần khai báo thư viện #include <cstring>
    char SaoChep[] = "Hello everyone!";
    char SaoChep2[20];
    //lệnh sao chép:
    strcpy_s(SaoChep2, sizeof(SaoChep2), SaoChep);
    cout << "Chuoi ban dau: " << SaoChep << endl;
    cout << "Chuoi sao chep: " << SaoChep2 << endl;
    //sao chép theo số lượng n ký tự:
    char SaoChep3[6];
    strncpy_s(SaoChep3, sizeof(SaoChep3), SaoChep, 5);
    cout << "Chuoi sao chep theo so luong ky tu: " << SaoChep3 << endl;
    /*---------------------------------------------------------------------------------------------------------------------------- - */
    cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
    //4. NỐI CHUỖI:
            // trước khi thao tác lệnh cần kiểm tra và khai báo thư viện #include <cstring>
    char str1[100] = "Hello ";
    char str2[] = "Everyone!";
    //Nối:
    strcat_s(str1, str2); //Nối chuỗi 2 cho 1.
    cout << "Chuoi duoc noi la: " << endl;
    cout << str1 << endl;

    // ví dụ: Người dùng nhập vào 2 chuỗi str3 và str4. sau đó thực hiện câu lệnh nối chuỗi
    char str3[100], str4[100];

    cout << "Hay nhap vao chuoi str3: ";
    cin.getline(str3, 100);

    cout << "Hay nhap vao chuoi str4: ";
    cin.getline(str4, 100);

    strcat_s(str3, str4);
    cout << "Chuoi cua ban sau khi noi la:\n";
    cout << str3 << endl;

    // Nối theo số lượng n ký tự:

    char str5[100] = "Chao cac ban ";
    char str6[] = "Hello everyone";
    //Nối:

    strncat_s(str5, sizeof(str5), str6, 5);
    cout << "Chuoi sau khi noi n ky tu la: " << str5 << endl;
    /*---------------------------------------------------------------------------------------------------------------------------- - */
    cout << "\n---------------------------------------------------------------------------------------------------------------------\n";
    // 5. TÌM KIẾM KÝ TỰ VÀ CHUỖI KÝ TỰ 
            // tìm kiếm nên phải dùng con trỏ trỏ từng vị trí index 
            // Tìm kiếm KÝ TỰ: strchr
    char* thuTu, kyTuX;
    kyTuX = 'h';
    char str7[100] = "nguyen chanh hiep";
    cout << "Chuoi duoc tim kiem : " << str7 << endl;
    // Tìm kiếm:
    thuTu = strchr(str7, kyTuX);
    if (thuTu == NULL)
        cout << "khong tim thay =(" << endl;
    else
        cout << "Tim thay tai vi tri " << (thuTu - str7) << endl;
    // Tìm kiếm CHUỖI : strstr
    char* thuTu2;
    char str8[100] = "nguyen chanh hiep";
    //Tìm kiếm:
    thuTu2 = strstr(str8, "hiep");
    if (thuTu2 == NULL)
        cout << "Khong tim thay =(" << endl;
    else
        cout << "Tim thay chuoi tai vi tri : " << (thuTu2 - str8) << endl;
    /*---------------------------------------------------------------------------------------------------------------------------- - */
    cout << "\n---------------------------------------------------------------------------------------------------------------------\n";

    // 6. SO SÁNH HAI CHUỖI :

    char soSanh1[] = "Hiep";
    char soSanh2[] = "Hiep";
    char soSanh3[] = "CHiep";
    char soSanh4[] = "cHiep";

    int kq1 = strcmp(soSanh1, soSanh2);
    int kq2 = strcmp(soSanh3, soSanh4);
    int kq3 = strcmp(soSanh4, soSanh3);
    cout << "Hiep ---?--- Hiep: " << kq1 << endl;
    cout << "CHiep ---?--- cHiep: " << kq2 << endl;
    cout << "cHiep ---?--- CHiep: " << kq3 << endl;
    int kq4 = strncmp(soSanh3, soSanh4, 2);
    cout << "So sanh 2 ky tu dau cua CHiep ---?--- cHiep: " << kq4 << endl;
    /*---------------------------------------------------------------------------------------------------------------------------- - */
    cout << "\n---------------------------------------------------------------------------------------------------------------------\n";

    // 7. DỔI KÝ TỰ SANG HOA VÀ THƯỜNG:
    //toupper:
            //Cách 1: toupper(char):
    char vietHoa = toupper('a');
    cout << "toupper(char): " << vietHoa << endl;
    //Cách 2: toupper(int ASII):
    char vietHoaASSI = toupper(97);
    cout << "toupper(int ASII): " << vietHoaASSI << endl;
    //tolower:
            //Cách 1: tolower(char):
    char vietThuong = tolower('A');
    cout << "tolower(char): " << vietThuong << endl;
    //Cách 2: tolower(int ASII):
    char vietThuongASII = tolower(97);
    cout << "tolower(char): " << vietThuongASII << endl;
    //Nâng cao, cho người dùng nhập vào chuối, chuyển toàn bộ sang hoa hoặc thường:
    char NhapKyTu[max];
    cout << "Hay nhap vao chuoi ky tu cua ban: ";
    cin.getline(NhapKyTu, max);
    cout << "Chuoi vua nhap: " << NhapKyTu << endl;
    //chuyen chuoi:
    for (int i = 0; i < strlen(NhapKyTu); i++) {
        NhapKyTu[i] = tolower(NhapKyTu[i]);
    }
    cout << "chuoi sau khi chuyen sang thuong: " << NhapKyTu << endl;
    for (int i = 0; i < strlen(NhapKyTu); i++) {
        NhapKyTu[i] = toupper(NhapKyTu[i]);
    }
    cout << "Chuoi sau khi chuyen sang hoa: " << NhapKyTu << endl;
   
}