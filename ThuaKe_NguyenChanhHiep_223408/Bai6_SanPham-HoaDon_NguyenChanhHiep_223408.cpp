/*6) Bài 5.6: Sản Phẩm – Hóa Đơn
Lập chương trình thực hiện các công việc sau:
Xây dựng lớp cơ sở sản phẩm gồm:
    o Thuộc tính: Tên sản phẩm, năm sản xuất, giá thành
    o Phương thức: Nhập, xuất thông tin 
Xây dựng lớp hoá đơn bán sản phẩm kế thừa từ lớp sản phẩm có thêm:
    o Thuộc tính: Số lượng bán, giá bán
    o Phương thức: Nhập, xuất thông tin, tính thành tiền (=số lượng * giá bán), tính thuế (=10% thành tiền), tính lãi (chênh lệch giá bán * số lượng bán).
Chương trình chính thực hiện:
    o Nhập danh sách N hoá đơn bán sản phẩm
    o Sắp xếp danh sách theo tiền lãi giảm dần
    o Hiện ra màn hình danh sách gồm: số thứ tự, tên sản phẩm, giá thành, số lượng bán, giá bán, thành tiền, thuế và tiền lãi.
    o Tính tổng tiền của các hoá đơn bán sản phẩm
    o Cho biết thông tin các hoá đơn bán sản phẩm có tiền thuế cao nhất
*/
#include <iostream>
#include <iomanip> 

using namespace std;

// Khai báo class SanPham
class SanPham{
    private:
        char tenSP[50];
        int namSX;
        long long giaThanh;
    public:
        void nhap_SP();
        void xuat_SP();
        long long getGiaThanh();
};

// Khai báo class HoaDon
class HoaDon: public SanPham {
    private:
        int soLuong;
        long long giaBan;
    public:
        void nhap_HD();
        void xuat_HD();
        long long thanhTien();
        long long thue();
        long long lai();
};

int main(){
    HoaDon ds[100];
    int n; cout << "Nhap vao so luong hoa don: "; cin >> n;
    for(int i = 0; i < n; i++){
        cout << "------> Nhap Hoa Don so " << i + 1 << ":" << endl;
        ds[i].nhap_HD();
    }
    for(int i = 0; i < n; i++){
        cout << "------ Hoa Don so " << i + 1 << ": ---->" << endl;
        ds[i].xuat_HD();
        cout << "; Thanh tien: " << ds[i].thanhTien();
        cout << "; Thue: " << ds[i].thue();
        cout << "; Lai: " << ds[i].lai() << endl;
    }
    cout << "======= TONG TIEN hoa don ban san pham ========" << endl;
    long long sum = 0;
    for(int i = 0; i < n; i++){
        cout << "Hoa don " << i + 1 << ": ";
        cout << ds[i].thanhTien();
        sum += ds[i].thanhTien();
        cout << endl;
    }
    cout << "\t\tTONG = " << sum << endl;
    cout << "======= HOA DON CO THUA CAO NHAT ========" << endl;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(ds[i].thue() > ds[j].thue()){
                cout << "------> Nhap Hoa Don so " << i + 1 << " Co thue cao nhat" << endl;
            }
        }
    }
    return 0;
}


// Định nghĩa phương thức nhap_SP() của lớp SanPham
void SanPham::nhap_SP(){
    cin.ignore();
    cout << "Ten san pham: "; cin.getline(tenSP, 50);
    cout << "Nam san xuat: "; cin >> namSX;
    cout << "Gia thanh cua san pham: "; cin >> giaThanh;
}

// Định nghĩa phương thức xuat_SP() của lớp SanPham
void SanPham::xuat_SP(){
    cout << "Ten san pham: " << tenSP << "; NSX: " << namSX << "; Gia thanh: " << giaThanh;
}

// Định nghĩa phương thức nhap_HD() của lớp HoaDon
void HoaDon::nhap_HD(){
    SanPham::nhap_SP();
    cin.ignore();
    cout << "Nhap so luong ban: "; cin >> soLuong;
    cout << "Nhap gia ban: "; cin >> giaBan;
}

// Định nghĩa phương thức xuat_HD() của lớp HoaDon
void HoaDon::xuat_HD(){
    SanPham::xuat_SP();
    cout << "; So luong: " << soLuong << "; Gia ban: " << giaBan;
}

// Định nghĩa phương thức thanhTien() của lớp HoaDon
long long HoaDon::thanhTien(){
    return soLuong * giaBan;
}

// Định nghĩa phương thức thue() của lớp HoaDon
long long HoaDon::thue(){
    return thanhTien() * 10 / 100;
}

// Định nghĩa phương thức lai() của lớp HoaDon
long long HoaDon::lai(){
    return (giaBan - getGiaThanh()) * soLuong;
}

// Định nghĩa phương thức getGiaThanh() của lớp SanPham
long long SanPham::getGiaThanh(){
    return giaThanh;
}
