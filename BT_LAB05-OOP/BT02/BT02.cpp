#include "Phong.h"

int main() {
    Phong* danhSachPhong[5];
    danhSachPhong[0] = new Deluxe();  // Tạo phòng Deluxe
    danhSachPhong[1] = new Deluxe();  // Tạo phòng Deluxe
    danhSachPhong[2] = new Premium(); // Tạo phòng Premium
    danhSachPhong[3] = new Premium(); // Tạo phòng Premium
    danhSachPhong[4] = new Business();// Tạo phòng Business
    for (int i = 0; i < 5; i++) {
        cout << "Nhap thong tin cho phong thu " << i + 1 << ":" << endl;
        danhSachPhong[i]->Nhap();
    }
    for (int i = 0; i < 5; i++) {
        cout << "Thong tin phong thu " << i + 1 << ":" << endl;
        danhSachPhong[i]->Xuat();
    }
    double doanhThuMax = danhSachPhong[0]->TinhDoanhThu();
    string loaiPhongMax = "Deluxe"; 
    for (int i = 1; i < 5; i++) {
        if (danhSachPhong[i]->TinhDoanhThu() > doanhThuMax) {
            doanhThuMax = danhSachPhong[i]->TinhDoanhThu();
            if (dynamic_cast<Deluxe*>(danhSachPhong[i])) {
                loaiPhongMax = "Deluxe";
            }
            else if (dynamic_cast<Premium*>(danhSachPhong[i])) {
                loaiPhongMax = "Premium";
            }
            else if (dynamic_cast<Business*>(danhSachPhong[i])) {
                loaiPhongMax = "Business";
            }
        }
    }
    cout << "Loai phong co doanh thu cao nhat: " << loaiPhongMax << " voi doanh thu " << doanhThuMax << endl;
    for (int i = 0; i < 5; i++) {
        delete danhSachPhong[i];
    }
    return 0;
}
