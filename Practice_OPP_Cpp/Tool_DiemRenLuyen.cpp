#include <iostream>
using namespace std;

void NhapDiemMuc(int[], int);
void XuatDiemMuc(int[], int);
int TinhTongDiemMuc(int[], int);
int ChuanHoaTongDiem(int, int);
void XuLyMuc(int[], int, int);
void XepLoai(int);

int main() {
    cout << "---TOOL TINH DIEM REN LUYEN---" << endl;
    int respond, n1 = 8, n2 = 7, n3 = 7, n4 = 5, n5 = 6, A1[8], A2[7], A3[7], A4[5], A5[6];

    do {
        cout << "Nhap vao so 1 de tiep tuc, neu khong nhap vao 0 !\t"; 
        cin >> respond;
        XuLyMuc(A1, n1, 20);
  
        XuLyMuc(A2, n2, 25);

        XuLyMuc(A3, n3, 20);

        XuLyMuc(A4, n4, 25);

        XuLyMuc(A5, n5, 10);

        int TONG = TinhTongDiemMuc(A1, n1) + TinhTongDiemMuc(A2, n2) + TinhTongDiemMuc(A3, n3) + TinhTongDiemMuc(A4, n4) + TinhTongDiemMuc(A5, n5);
        int TONGChuanHoa = ChuanHoaTongDiem(TONG, 100);

        cout << "DIEM REN LUYEN : " << TONGChuanHoa << "\t >>> ";
        XepLoai(TONGChuanHoa);

    } while (respond == 1);

    cout << "XIN CAM ON";
    return 0;
}

void NhapDiemMuc(int a[], int n) {
    for (int i = 1; i <= n; i++) {
        do {
            cout << "Muc cham " << i << ":\t"; 
            cin >> a[i];
            if (a[i] > 100) {
                cout << "Vui long nhap diem nho hon hoac bang 100." << endl;
            }
        } while (a[i] > 100);
    }
}

void XuatDiemMuc(int a[], int n) {
    cout << "Point [ ";
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "]" << endl;
}

int TinhTongDiemMuc(int a[], int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        tong += a[i];
    }
    return tong;
}

int ChuanHoaTongDiem(int tong, int gioiHan) {
    if (tong > gioiHan) {
        return gioiHan;
    }
    return tong;
}

void XuLyMuc(int a[], int n, int gioiHan) {
    cout << "Nhap diem muc: " << endl;
    NhapDiemMuc(a, n);
    cout << "Diem muc: "; 
    XuatDiemMuc(a, n);

    int tong = TinhTongDiemMuc(a, n);
    int tongChuanHoa = ChuanHoaTongDiem(tong, gioiHan);

    cout << "Tong diem muc: " << tongChuanHoa << endl;
}

void XepLoai(int n) {
    if (n < 35) {
        cout << "Xep loai KEM" << endl;
    } else if (n >= 35 && n < 50) {
        cout << "Xep loai YEU" << endl;
    } else if (n >= 50 && n < 65) {
        cout << "Xep loai TRUNG BINH" << endl;
    } else if (n >= 65 && n < 80) {
        cout << "Xep loai KHA" << endl;
    } else if (n >= 80 && n < 90) {
        cout << "Xep loai TOT" << endl;
    } else {
        cout << "Xep loai XUAT SAC" << endl;
    }
}

