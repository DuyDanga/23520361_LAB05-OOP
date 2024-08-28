#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class NhanVien {
protected:
	int maSo;
	string ten;
	double luongCoBan;
public:
	NhanVien() :maSo(), ten(), luongCoBan() {}
	NhanVien(int ms, string ten, double luongcoban) :maSo(ms), ten(ten), luongCoBan(luongcoban) {}
	virtual void Nhap();
	virtual void Xuat();
	virtual double TienThuong() const = 0;
};

class QuanLy : public NhanVien {
private:
	double tyLeThuong;
public:
	QuanLy() :NhanVien(), tyLeThuong() {}
	QuanLy(int ms, string ten, double luongcoban, double tl) :NhanVien(ms, ten, luongcoban), tyLeThuong(tl) {}
	void Nhap() override;
	double TienThuong() const override;
	void Xuat()override;

};

class KySu :NhanVien {
private:
	int soGio;
public:
	KySu() :NhanVien(), soGio() {}
	KySu(int ms, string ten, double luongcoban, int sg) :NhanVien(ms, ten, luongcoban), soGio(sg) {}
	void Nhap() override;
	double TienThuong()const override;
	void Xuat() override;
};


