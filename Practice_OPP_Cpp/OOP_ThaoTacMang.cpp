#include <iostream>
#include <algorithm>
#include <unistd.h>
#include <string>
#define SIZE 100
using namespace std;

class ThaoTacMang {
private:
    int A[SIZE], n;

public:
    void Nhap_n();
    void NhapMang();
    void XuatMang();
    int TinhTongMang();
    void DayTongChan();
    void DayTongLe();
    bool CheckSNT(int a);
    void DaySNT();
    int TimMax();
    int TimMin();
    void XepTangDan();
    void XepGiamDan();
    int VitriMax();
    int VitriMin();
    void HoanVi(int* a, int* b);
    void HoanViMaxMin();
    int DemSoLuongPT();
    void SoChiaHetCho2();
    int UCLN_MaxMin();
    int BCNN_MaxMin();
    void TimKiemPTNhapVao();
    void DemSoLanXuatHien();
    float TinhTrungBinhMang();
    void ChenMang();
    void XoaMang();

    void ChucNang();
    void TinhToanMang();
    void TimKiemTrongMang();
    void SuaChuaMang();
    void TiepTuc();
};

void veThanhTienTrinh(int tientrinh);
void Pr(int ThoiGianDung);
int KiemTraSoNhap(int DieuKien);
template<typename T>
string InMau(T Chu, string TenMau);

#include <iostream>
#include <string>

using namespace std;

// Hàm ð? v? khung h?nh ch? nh?t v?i n?i dung
void VeKhung(int chieurong, int chieucao, const string& noidung) {
    // In ðý?ng k? ð?u tiên c?a khung
    cout << "+" << string(chieurong - 2, '-') << "+" << endl;
    
    // In n?i dung c?a khung
    int nd_length = noidung.length();
    int padding = (chieurong - 2 - nd_length) / 2;
    cout << "|";
    cout << string(padding, ' ') << noidung << string(padding + (nd_length % 2), ' ');
    cout << "|" << endl;

    // In ph?n tr?ng dý?i n?i dung
    for (int i = 0; i < chieucao - 3; ++i) {
        cout << "|" << string(chieurong - 2, ' ') << "|" << endl;
    }
    
    // In ðý?ng k? cu?i cùng c?a khung
    cout << "+" << string(chieurong - 2, '-') << "+" << endl;
}



int main() {
    ThaoTacMang a;
    VeKhung (30, 5,InMau("--------CHUONG TRINH THAO TAC MANG-------", "Tim")); 
    a.Nhap_n();
    a.NhapMang();
    a.XuatMang();
    a.TiepTuc();

    return 0;
}

// Các phýõng th?c c?a l?p ThaoTacMang

void ThaoTacMang::Nhap_n() {
    do {
        cout << "Nhap vao so luong phan tu: ";
        cin >> n;
    } while (n > 100);
}

void ThaoTacMang::NhapMang() {
    cout << InMau("-NHAP MANG-", "Tim") << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phan tu:\tA[" << InMau(to_string(i), "Do")<< "] = ";
        cin >> A[i];
    }
}

void ThaoTacMang::XuatMang() {
    cout << "\tXuat Mang: A = { ";
    for (int i = 0; i < n; i++) {
        cout << InMau(to_string(A[i]), "XanhDuong")<< "  ";
    }
    cout << "}" << endl;
}

int ThaoTacMang::TinhTongMang() {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += A[i];
    }
    return tong;
}

void ThaoTacMang::DayTongChan() {
    cout << InMau("-TONG CHAN-", "Tim") << endl;
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0)
            tong += A[i];
    }
    cout << tong << endl;
}

void ThaoTacMang::DayTongLe() {
    cout << InMau("-TONG LE-", "Tim") << endl;
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0)
            tong += A[i];
    }
    cout << tong << endl;
}

bool ThaoTacMang::CheckSNT(int a) {
    if (a < 2)
        return false;
    for (int i = 2; i <= a / 2; i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

void ThaoTacMang::DaySNT() {
    cout << InMau("-DAY SO NGUYEN TO-", "Tim") << endl;
    for (int i = 0; i < n; i++) {
        if (CheckSNT(A[i])) {
            cout << A[i] << " ";
        }
    }
}

int ThaoTacMang::TimMax() {
    int Max = A[0];
    for (int i = 0; i < n; i++) {
        if (A[i] > Max)
            Max = A[i];
    }
    return Max;
}

int ThaoTacMang::TimMin() {
    int Min = A[0];
    for (int i = 0; i < n; i++) {
        if (A[i] < Min) {
            Min = A[i];
        }
    }
    return Min;
}

void ThaoTacMang::XepTangDan() {
    cout << InMau("-XEP MANG THEO CHIEU TANG DAN-", "Tim") << endl;
    sort(A, A + n);
    XuatMang();
}

void ThaoTacMang::XepGiamDan() {
    cout << InMau("-XEP MANG THEO CHIEU GIAM DAN-", "Tim") << endl;
    sort(A, A + n, greater<int>());
    XuatMang();
}

int ThaoTacMang::VitriMax() {
    int max = A[0];
    int vitri = 0;
    for (int i = 0; i < n; i++)
        if (A[i] > max) {
            max = A[i];
            vitri = i;
        }
    return vitri;
}

int ThaoTacMang::VitriMin() {
    int min = A[0];
    int vitri = 0;
    for (int i = 0; i < n; i++)
        if (A[i] < min) {
            min = A[i];
            vitri = i;
        }
    return vitri;
}

void ThaoTacMang::HoanVi(int* a, int* b) {
    int f;
    f = *a;
    *a = *b;
    *b = f;
}

void ThaoTacMang::HoanViMaxMin() {
    cout << InMau("-HOAN VI MAX MIN TRONG MANG-", "Tim") << endl;
    HoanVi(&A[VitriMax()], &A[VitriMin()]);
    XuatMang();
}

int ThaoTacMang::DemSoLuongPT() {
    return n;
}

void ThaoTacMang::SoChiaHetCho2() {
    cout << InMau("So chia het cho 2 la: ", "Tim");
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            cout << A[i] << "\t";
        }
    }
    cout << endl;
}

int ThaoTacMang::UCLN_MaxMin() {
    int a = TimMax();
    int b = TimMin();
    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int ThaoTacMang::BCNN_MaxMin() {
    int max = TimMax();
    int min = TimMin();
    return (max * min) / UCLN_MaxMin();
}

void ThaoTacMang::TimKiemPTNhapVao() {
    int x, TimKiem = 0;
    cout << InMau("Nhap vao phan tu can tim vi tri: ", "Tim");
    cin >> x;
    cout << "Phan tu " << x << " co vi tri la : ";
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            cout << "A[" << i << "]\t";
            TimKiem = 1;
        }
    }
    cout << endl;
    if (!TimKiem) {
        cout << InMau("So nhap khong co trong mang!", "Tim") << endl;
    }
}

void ThaoTacMang::DemSoLanXuatHien() {
    int x, Dem = 0;
    cout << InMau("Dem so lan xuat hien cua so (nhap vao 1 so): ", "Tim");
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            Dem++;
        }
    }
    if (Dem == 0)
        cout << InMau("So " + to_string(x) + " khong co trong mang", "Tim") << endl;
    else
        cout << InMau("So " + to_string(x) + " Xuat hien " + to_string(Dem) + " lan trong mang!", "Tim") << endl;
}

float ThaoTacMang::TinhTrungBinhMang() {
    return TinhTongMang() / (float)DemSoLuongPT();
}

void ThaoTacMang::ChucNang() {
    int a;
    cout << InMau("Chon tien ich cua ban:\n1. Tinh toan mang\n2. Tim kiem trong mang\n3. Thay doi, sua chua mang\n", "Tim");
    a = KiemTraSoNhap(3);
    switch (a) {
    case 1:
        TinhToanMang();
        break;
    case 2:
        TimKiemTrongMang();
        break;
    case 3:
        SuaChuaMang();
        break;
    }
}

void ThaoTacMang::ChenMang() {
    cout << InMau("-CHEN GIA TRI VAO MANG-", "Tim") << endl;
    int Vitri, GTchen;
    do {
        cout << "Nhap vao vi tri can chen: A[to 0 from " << n - 1 << "] = "; cin >> Vitri;
        if (Vitri <= 0 || Vitri >= n) {
            cout << "Nhap lai vi tri, luu y: (Vitri >= 0 || Vitri <= " << n - 1 << ")" << endl;
        }
    } while (Vitri <= 0 || Vitri > n);
    cout << "Nhap vao Gia tri can chen: A[" << Vitri << "] = "; cin >> GTchen;
    for (int i = n + 1; i > Vitri; i--) {
        A[i] = A[i - 1];
    }
    A[Vitri] = GTchen;
    n++;
    cout << "-\nMang sau khi chen la: ";
    XuatMang();
}

void ThaoTacMang::XoaMang() {
    cout << InMau("-XOA PHAN TU TAI VI TRI BAT KY-", "Tim") << endl;
    int Vitri;
    do {
        cout << "Nhap vao vi tri can chen: A[to 0 from " << n << "] = "; cin >> Vitri;
        if (Vitri <= 0 || Vitri >= n) {
            cout << "Nhap lai vi tri, luu y: (Vitri >= 0 || Vitri > " << n << ")";
        }
    } while (Vitri <= 0 || Vitri > n);
    for (int i = Vitri; i < n - 1; i++) {
        A[i] = A[i + 1];
    }
    n--;
    cout << "Mang sau khi xoa la: ";
    XuatMang();
}

void ThaoTacMang::TinhToanMang() {
    int a;
    cout << InMau("Chon phep tinh sau:\n\t1. Tinh tong mang\n\t2. Tinh Trung Binh mang\n\t3. Tinh Tong day so chan\n\t4. Tinh tong day so le\n\t5. Tim UCLN cua MAX va MIN\n\t6. Tim BCNN cua MAX va MIN\n", "Tim");
    a = KiemTraSoNhap(6);
    switch (a) {
    case 1:
        Pr(900);
        cout << "Tong mang: " << TinhTongMang() << endl;
        break;
    case 2:
        Pr(900);
        cout << "Trung binh mang: " << TinhTrungBinhMang() << endl;
        break;
    case 3:
        Pr(900);
        DayTongChan();
        break;
    case 4:
        Pr(900);
        DayTongLe();
        break;
    case 5:
        Pr(900);
        cout << "Uoc chung lon nhat cua max va min: " << UCLN_MaxMin() << endl;
        break;
    case 6:
        Pr(900);
        cout << "Boi chung nho nhat cua max va min : " << BCNN_MaxMin() << endl;
        break;
    }
}

void ThaoTacMang::TimKiemTrongMang(){
    int a;
    cout << InMau("Chon tim kiem:\n\t1. Tim so lon nhat\n\t2. Tim so nho nhat\n\t3. Tim vi tri so lon nhat\n\t4. Tim vi tri so nho nhat\n\t5. Tim kiem phan tu nhap vao\n\t6. Dem so lan xuat hien cua 1 phan tu nao do\n", "Tim");
    a = KiemTraSoNhap(6);
    switch (a){
        case 1:
            Pr(900);
            cout << "So lon nhat la: "<< TimMax() << endl;
            break;
        case 2:
            Pr(900);
            cout << "So nho nhat la: "<< TimMin() << endl;
            break;
        case 3:
            Pr(900);
            cout << "Vi tri so lon nhat : A[" << VitriMax() << "]" << endl;
            break;
        case 4:
            Pr(900);
            cout << "Vi tri so nho nhat: A[" << VitriMin() << "]" << endl;
            break;
        case 5:
            Pr(1000);
            cout << "Tim kiem phan tu nhap vao tu ban phim" << endl;
            TimKiemPTNhapVao();
            break;
        case 6:
            Pr(800);
            DemSoLanXuatHien();
            break;
    }
}

void ThaoTacMang::SuaChuaMang(){
    int a;
    cout << InMau("Chon chuc nang sua chua mang:\n\t1. Chen them phan tu\n\t2. Xoa phan tu\n\t3. Xep Giam dan cac phan tu\n\t4. Xep tang dan cac phan tu\n\t5. Hoan vi hai so MAX va MIN\n", "Tim");
    a = KiemTraSoNhap(5);
    switch(a){
        case 1:
            Pr(800);
            ChenMang();
            break;
        case 2:
            Pr(900);
            XoaMang();
            break;
        case 3:
            Pr(1000);
            XepGiamDan();
            break;
        case 4:
            Pr(1000);
            XepTangDan();
            break;
        case 5:
            Pr(900);
            HoanViMaxMin();
            break;
    }
}

void ThaoTacMang::TiepTuc() {
    int respond;
    do{
        Pr(10000);
        ChucNang();
        do{
        cout << "\n-----------------------------------------------\nNhap vao (1) neu muon tiep tuc chuong trinh, neu khong bam phim 0!\t Rep : ";
        cin >> respond;
        if(respond != 1 && respond != 0) {
                cout << InMau("\t\t>>>>>>>>>>>ERROR...Vui long nhap theo yeu cau....>>>>>", "Tim");
                cout << endl;
            }
        }while(respond != 1 && respond != 0);
    }while (respond == 1);

    cout << InMau("\n\t\t\t\t<  CAM ON DA SU DUNG PHAN MEM!  >", "Vang"); cout << endl;
}

void veThanhTienTrinh(int tientrinh) {
    const int chieurong = 70;

    cout << "(";
    int vitri = chieurong * tientrinh / 100;
    for (int i = 0; i < chieurong; ++i) {
        if (i < vitri) cout << "-";
        else if (i == vitri) cout << InMau(">", "Vang");
        else cout << " ";
    }
    cout << ") " << int(tientrinh * 100.0 / 100) << " %\r";
    cout.flush();
}
void Pr(int ThoiGianDung){
    for (int i = 0; i <= 100; ++i) {
        veThanhTienTrinh(i);
        usleep(ThoiGianDung); 
    }
    cout << InMau("\t\t\t<........SUCCESS........>", "XanhLa");
    cout << endl;
}

int KiemTraSoNhap(int DieuKien){
    int a;
    do{
         cin >> a;
         if(a < 1 || a > DieuKien) {
            cout <<InMau("\t\t\t <ERROR!>", "Do");
            cout << InMau(" Vui long nhap lai ...", "XanhDuong");
            cout << endl;
        }
    }while(a < 1 || a > DieuKien);
    return a;
}

template<typename T>
string InMau(T Chu, string TenMau) {
    string MaMau;
    
    if (TenMau == "Den")       MaMau = "30";
    else if (TenMau== "Do")    MaMau = "31";
    else if (TenMau == "XanhLa")  MaMau = "32";
    else if (TenMau == "Vang") MaMau = "33";
    else if (TenMau == "XanhDuong")   MaMau = "34";
    else if (TenMau == "Tim") MaMau = "35";
    else if (TenMau == "XanhLo")   MaMau = "36";
    else if (TenMau == "Trang")  MaMau = "37";
    else {
        MaMau = "0";
    }
    return "\033[" + MaMau + "m" + Chu + "\033[0m";
}


