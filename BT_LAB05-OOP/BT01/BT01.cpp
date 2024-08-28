#include<iostream>
#include"NhanVIen.h"
#include<string>
#include<iomanip>

using namespace std;


int main() {
	QuanLy ql;
	KySu ks;

	cout << "Nhap thong tin cho Quan Ly:" << endl;
	ql.Nhap();

	cout << "\nNhap thong tin cho Ky Su:" << endl;
	ks.Nhap();

	cout << "\nThong tin chi tiet cua Quan Ly:" << endl;
	ql.Xuat();

	cout << "\nThong tin chi tiet cua Ky Su:" << endl;
	ks.Xuat();
	return 0;
}