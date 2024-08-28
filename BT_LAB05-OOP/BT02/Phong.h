#pragma once
using namespace std;
#include <iostream>
class Phong {
protected:
    int soDem;
    double phiDichVu;
public:
    Phong():soDem(0),phiDichVu(0){}
    Phong(int dem, double dichVu): soDem(0),phiDichVu(0){}
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual double TinhDoanhThu() = 0;
};
class Deluxe : public Phong {
private:
    double phiPhucVu;
public:
    Deluxe();
    Deluxe(int dem, double dichVu, double phucVu);
    void Nhap() override;
    void Xuat() override;
    double TinhDoanhThu() override;
};
class Premium : public Phong {
public:
    Premium();
    Premium(int dem, double dichVu);
    void Nhap() override;
    void Xuat() override;
    double TinhDoanhThu() override;
};
class Business : public Phong {
public:
    Business();
    Business(int dem);
    void Nhap() override;
    void Xuat() override;
    double TinhDoanhThu() override;
};


