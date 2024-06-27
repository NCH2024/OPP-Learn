#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Chao mung den voi thu vien dien tu!" << endl;
    int bat_dau;
    cout << "Moi ban nhap 1 de tiep tuc. Neu muon thoat hay nhap 0!" << endl;
    cin >> bat_dau;
    if (bat_dau == 1)
    {
        int so_chon;
        cout << "Ban muon tim kiem loai sach nao?" << endl;
        cout <<
            "1. Sach chuyen nganh\n" <<
            "2. Sach giao trinh\n" <<
            "3. Sach tham khao\n" <<
            "4. Tai lieu hoc phan\n" << endl;
        cout << "Hay chon so tuong uong tu 1-4 : " << endl;
        cin >> so_chon;
        while (so_chon < 1 || so_chon > 4)
        {
            cout << "Ban nhap so chua dung!\n"
                "Moi ban nhap lai! " << endl;
            cin >> so_chon;
        }
        switch (so_chon)
        {
        case 1:
            cout << "-----------------------------------------------------" << endl;
            cout << "SACH CHUYEN NGANH" << endl;
            cout << "-----------------------------------------------------" << endl;
            cout << "Ban muon tim kiem chuyen nganh nao?" << endl;
            int ten_nganh;
            cout <<
                "1. Cong nghe thong tin \n"
                "2. Du lich \n"
                "3. Luat \n"
                "4. Mang may tinh \n"
                "...chua update" << endl;
            cin >> ten_nganh;

            if (ten_nganh == 1)
            {
                cout << "-----------------------------------------------------" << endl;
                cout << "CONG NGHE THONG TIN" << endl;
                cout << "-----------------------------------------------------" << endl;
                std::string mon_hoc1;
                cout << "Hay nhap ten mon hoc can tim tai lieu!" << endl;
                cin >> mon_hoc1;
                cout << "Hien tai mon hoc: " << mon_hoc1 << "... chua co du lieu, vui long thu lai sau!" << endl;
            }
            if (ten_nganh == 2)

            {
                cout << "-----------------------------------------------------" << endl;
                cout << "MANG MAY TINH" << endl;
                cout << "-----------------------------------------------------" << endl;
                std::string mon_hoc2;
                cout << "Hay nhap ten mon hoc can tim tai lieu!" << endl;
                cin >> mon_hoc2;
                cout << "Hien tai mon hoc: " << mon_hoc2 << "... chua co du lieu, vui long thu lai sau!" << endl;
            }
            if (ten_nganh == 3)
            {
                cout << "-----------------------------------------------------" << endl;
                cout << "SU PHAM" << endl;
                cout << "-----------------------------------------------------" << endl;
                std::string mon_hoc4;
                cout << "Hay nhap ten mon hoc can tim tai lieu!" << endl;
                cin >> mon_hoc4;
                cout << "Hien tai mon hoc: " << mon_hoc4 << "... chua co du lieu, vui long thu lai sau!" << endl;
            }
            if (ten_nganh == 4)
            {
                cout << "-----------------------------------------------------" << endl;
                cout << "DU LICH" << endl;
                cout << "-----------------------------------------------------" << endl;
                std::string mon_hoc4;
                cout << "Hay nhap ten mon hoc can tim tai lieu!" << endl;
                cin >> mon_hoc4;
                cout << "Hien tai mon hoc: " << mon_hoc4 << "... chua co du lieu, vui long thu lai sau!" << endl;
            }
            if (ten_nganh == 4)
            {
                cout << "-----------------------------------------------------" << endl;
                cout << "DU LICH" << endl;
                cout << "-----------------------------------------------------" << endl;
                std::string mon_hoc2;
                cout << "Hay nhap ten mon hoc can tim tai lieu!" << endl;
                cin >> mon_hoc2;
                cout << "Hien tai mon hoc: " << mon_hoc2 << "... chua co du lieu, vui long thu lai sau!" << endl;
            }
            else
            {
            }
        case 2:

        default:
            break;
        }
    }
    else
    {
        cout << "Cam on ban da ghe tham!" << endl;
    }
    return 0;
}
