#include "GiaSuc.h"
#include <cstdlib> 
#include <ctime>   

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int soBo, soCuu, soDe;

    cout << "Nhap so luong Bo: ";
    cin >> soBo;
    cout << "Nhap so luong Cuu: ";
    cin >> soCuu;
    cout << "Nhap so luong De: ";
    cin >> soDe;

    Bo bo(soBo);
    Cuu cuu(soCuu);
    De de(soDe);
    // Phát tiếng kêu khi đói
    cout << "Tieng keu khi gia suc doi:" << endl;
    bo.PhatTiengKeu();
    cuu.PhatTiengKeu();
    de.PhatTiengKeu();

    // Sinh con và cho sữa
    cout << "\nThong ke sau mot luot sinh con va cho sua:" << endl;
    bo.SinhCon();
    bo.ChoSua();
    cuu.SinhCon();
    cuu.ChoSua();
    de.SinhCon();
    de.ChoSua();

    // Xuất kết quả thống kê
    cout << "\nTong so luong Bo: " << bo.getSoLuong() << ", Tong so lit sua: " << bo.getSoLitSua() << endl;
    cout << "Tong so luong Cuu: " << cuu.getSoLuong() << ", Tong so lit sua: " << cuu.getSoLitSua() << endl;
    cout << "Tong so luong De: " << de.getSoLuong() << ", Tong so lit sua: " << de.getSoLitSua() << endl;

    return 0;
}
