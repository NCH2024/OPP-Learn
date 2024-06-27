/*
7) Bài 5.7: Cán Bộ - Giảng Viên
Trong một trường Đại học cần quản lý cán bộ và giảng viên. 
    Cán bộ gồm các thông tin: Mã cán bộ, mã đơn vị, năm sinh, hệ số lương, phụ cấp 
ăn ca, bảo hiểm. 
    Giảng viên cần bổ sung thêm các thông tin: phụ cấp đứng lớp =25% lương cơ bản
và phụ cấp độc hại (nếu có) = 10% lương cơ bản.
    Hãy lập chương trình quản lý cán bộ và giảng viên sao cho kế thừa được các dữ
liệu dùng chung thực hiện tính lương cho cán bộ và giảng viên tương ứng, in ra 
danh sách cán bộ và giảng viên phải đóng thuế thu nhập (lương thực 
lĩnh>5000000).
*/
//  THÊM :bài này dùng tái định nghĩa nhập xuất cho lớp giang viên

#include <iostream>
#include <iomanip>
#include <string>
#define luongCoBan 1500000
using namespace std;

//khai bao class CanBo
class CanBo {
    private:
        string maCaBo, maDonVi;
        double namSinh, heSoLuong, PC_TangCa, baoHiem;
    public:
        void nhap_CanBo();
        void xuat_CanBo();
        double getHeSoLuong(){return heSoLuong;};
        double getHeSoLuong(){return PC_TangCa;};
        double getBaoHiem(){return baoHiem;};
};
//khai bao class GiangVien
class GiangVien{
    private:
        int PC_DungLop, PC_DocHai;
    public:
        friend istream& operator>> (istream &is, GiangVien &a){}; 
        friend ostream operator<< (ostream &os, GiangVien){};
};

/*
Nguyen Thanh Thiet
DH22TIN01
225990
// */
// #include <iostream>
// #include <iomanip>
// #define luongCoBan 1500000
// using namespace std;
// class CanBo{
// 	string maCanBo;
// 	string maDonVi;
// 	string namSinh;
// 	double heSoLuong;
// 	double phuCapTangCa;
// 	double baoHiem;
// 	public:
// 		void Nhap();
// 		void Xuat();
// 		double getHeSoLuong();
// 		double getPhuCapTangCa();
// 		double getBaoHiem();
// };
// double CanBo::getBaoHiem(){
// 	return baoHiem;
// }
// double CanBo::getPhuCapTangCa(){
// 	return phuCapTangCa;
// }
// double CanBo::getHeSoLuong(){
// 	return heSoLuong;
// }
// void CanBo::Nhap(){
// 	cout<<"Nhap ma can bo: ";
// 	cin>>maCanBo;
// 	cout<<"Nhap ma don vi: ";
// 	cin>>maDonVi;
// 	cout<<"Nhap nam sinh: ";
// 	cin>>namSinh;
// 	cout<<"Nhap he so luong: ";
// 	cin>>heSoLuong;
// 	cout<<"Nhap phu cap tang ca: ";
// 	cin>>phuCapTangCa;
// 	cout<<"Nhap bao hiem: ";
// 	cin>>baoHiem;
// }
// void CanBo::Xuat(){
// 	cout<<"Ma can bo: "<<maCanBo<<endl;
// 	cout<<"Ma don vi: "<<maDonVi<<endl;
// 	cout<<"Nam sinh: "<<namSinh<<endl;
// 	cout<<"He so luong: "<<heSoLuong<<endl;
// 	cout<<"Phu cap tang ca: "<<phuCapTangCa<<endl;
// 	cout<<"Bao hiem: "<<baoHiem<<endl;
// }
// class GiangVien:public CanBo{
// 	double phuCapDungLop;
// 	double phuCapDocHai;
// 	public:
// 		void Nhap();
// 		void Xuat();
// 		double luongThucLinh();
// };
// double GiangVien::luongThucLinh()
// {
// 	double luong=(CanBo::getHeSoLuong()*luongCoBan)+phuCapDocHai+phuCapDungLop+(CanBo::getPhuCapTangCa())-((CanBo::getBaoHiem()/100)*luongCoBan);
// 	return luong;
// }
// void GiangVien::Nhap(){
// 	CanBo::Nhap();
// 	phuCapDungLop=luongCoBan*0.25;
// 	phuCapDocHai=luongCoBan*0.1;
// }
// void GiangVien::Xuat(){
// 	CanBo::Xuat();
// 	cout<<"Phu cap dung lop: "<<phuCapDungLop<<endl;
// 	cout<<"Phu cap doc hai: "<<phuCapDocHai<<endl;
// 	cout<<"Luong thuc linh: "<<fixed<<setprecision(1)<<luongThucLinh()<<"VND"<<endl;
// }
// void NhapList(GiangVien *listGiangVien,int n){
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<"-- NHAP THONG TIN GIANG VIEN THU "<<i+1<<" --"<<endl;
// 		listGiangVien[i].Nhap();
// 	}
// }
// void XuatList(GiangVien *listGiangVien,int n)
// {
// 	for(int i=0;i<n;i++)
// 	{
// 		cout<<"-- THONG TIN GIANG VIEN THU "<<i+1<<" --"<<endl;
// 		listGiangVien[i].Xuat();
// 	}
// 	cout<<endl;
// }
// int main()
// {
// 	int n;
// 	cout<<"Nhap so luong giang vien: ";
// 	cin>>n;
// 	GiangVien *listGiangVien=new GiangVien[n];
	
// 	NhapList(listGiangVien,n);
// 	XuatList(listGiangVien,n);
// 	cout<<endl<<"-- DANH SACH GIANG VIEN PHAI DONG THUE --"<<endl;
// 	int dem=1;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(listGiangVien[i].luongThucLinh()>5000000)
// 		{
// 			cout<<"Giang vien "<<dem<<endl;
// 			listGiangVien[i].Xuat();
// 			dem++;
// 			cout<<endl;
// 		}
		     
// 	}
// 	delete[] listGiangVien;
// 	return 0;
// }