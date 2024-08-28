#include "NhanVien.h"

void NhanVien::Nhap() {
	cout << "Nhap ma so nhan vien: ";
	cin >> maSo;

	cout << "Nhap ten nhan vien: ";
	cin.ignore();
	getline(cin, ten);
	cout << "Nhap luong co ban: ";
	cin >> luongCoBan;
}
void NhanVien::Xuat() {
	cout << "Ma so nhan vien: " << maSo << endl;
	cout << "Ten nhan vien: " << ten << endl;
	cout << fixed << setprecision(0) << "Luong co ban : " << luongCoBan << endl;
}

void QuanLy::Nhap()  {
	NhanVien::Nhap();
	cout << "Nhap ty le thuong: ";cin >> tyLeThuong;
	cin.ignore();
}
double QuanLy::TienThuong() const {
	return luongCoBan * (tyLeThuong / 100);
}
void QuanLy::Xuat() {
	NhanVien::Xuat();
	cout << fixed << setprecision(0) << "Ty le thuong: " << tyLeThuong << endl;
	cout << fixed << setprecision(0) << " Tien thuong: " << TienThuong() << endl;
}

void KySu::Nhap() {
	NhanVien::Nhap();
	cout << "Nhap so gio lam them: ";cin >> soGio;
	cin.ignore();
}
double KySu::TienThuong()const  {
	return soGio * 100000;
}
void KySu::Xuat() {
	NhanVien::Xuat();
	cout << "So gio lam them: " << soGio << endl;
	cout << fixed << setprecision(0) << "Tien thuong: " << TienThuong() << endl;
}