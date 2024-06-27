#include <iostream>
#include <string>
using namespace std;

class Game
{
public:
    std::string name;
    double so_luong_nguoi_choi;
    std::string hinh_thuc;
    double chi_phi;
    bool choi_offline;

};

int main()
{
    Game mihoyo;
    double cai_gia_phai_tra = 0.0;
    int thoi_gian_choi;
    cout << "hay nhap thoi gian ban muon choi: ";
    cin >> thoi_gian_choi;
    mihoyo.name = "Genshin impact";
    mihoyo.so_luong_nguoi_choi = 1000;
    mihoyo.hinh_thuc = "nhap vai";
    mihoyo.chi_phi = 300;
    mihoyo.choi_offline = false;
    cai_gia_phai_tra = mihoyo.chi_phi * thoi_gian_choi;
    cout << "Voi tua game " << mihoyo.name << " la game " << mihoyo.hinh_thuc << "thi ban phai tra: " << cai_gia_phai_tra << "USD " << "cho :" << thoi_gian_choi << "gio choi" << endl;

    return 0;
}