#include "Phong.h"

Deluxe::Deluxe() : Phong(0,0), phiPhucVu(0) {}

Deluxe::Deluxe(int dem, double dichVu, double phucVu) {
    soDem = dem;
    phiDichVu = dichVu;
    phiPhucVu = phucVu;
}

// Định nghĩa các phương thức cho lớp Deluxe
void Deluxe::Nhap() {
    cout << "Nhap so dem: ";
    cin >> soDem;
    cout << "Nhap phi dich vu: ";
    cin >> phiDichVu;
    cout << "Nhap phi phuc vu: ";
    cin >> phiPhucVu;
}

void Deluxe::Xuat() {
    cout << "Loai phong: Deluxe" << endl;
    cout << "Doanh thu: " << TinhDoanhThu() << endl;
}

double Deluxe::TinhDoanhThu() {
    return soDem * 750000 + phiDichVu + phiPhucVu;
}

Premium::Premium() : Phong(0, 0) {}

Premium::Premium(int dem, double dichVu) {
    soDem = dem;
    phiDichVu = dichVu;
}

// Định nghĩa các phương thức cho lớp Premium
void Premium::Nhap() {
    cout << "Nhap so dem: ";
    cin >> soDem;
    cout << "Nhap phi dich vu: ";
    cin >> phiDichVu;
}

void Premium::Xuat() {
    cout << "Loai phong: Premium" << endl;
    cout << "Doanh thu: " << TinhDoanhThu() << endl;
}

double Premium::TinhDoanhThu() {
    return soDem * 500000 + phiDichVu;
}

Business::Business() : Phong(0, 0) {}

Business::Business(int dem) {
    soDem = dem;
}

// Định nghĩa các phương thức cho lớp Business
void Business::Nhap() {
    cout << "Nhap so dem: ";
    cin >> soDem;
}

void Business::Xuat() {
    cout << "Loai phong: Business" << endl;
    cout << "Doanh thu: " << TinhDoanhThu() << endl;
}

double Business::TinhDoanhThu() {
    return soDem * 300000;
}
