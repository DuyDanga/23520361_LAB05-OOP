#include "GiaSuc.h"
#include <cstdlib> 
#include <ctime>   

GiaSuc::GiaSuc(int sl) : soLuong(sl), soLitSua(0) {}

int GiaSuc::getSoLuong() const {
    return soLuong;
}

int GiaSuc::getSoLitSua() const {
    return soLitSua;
}

// Định nghĩa các phương thức của lớp Bo
Bo::Bo(int sl) : GiaSuc(sl) {}

void Bo::PhatTiengKeu() {
    cout << "Bo: Moo!" << endl;
}

void Bo::SinhCon() {
    int soCon = rand() % (soLuong + 1); // Sinh ngẫu nhiên số con
    soLuong += soCon;
    cout << "Bo sinh " << soCon << " con." << endl;
}

void Bo::ChoSua() {
    int tongSua = 0;
    for (int i = 0; i < soLuong; i++) {
        int sua = rand() % 21; // Cho ngẫu nhiên từ 0 đến 20 lít sữa
        tongSua += sua;
    }
    soLitSua += tongSua;
    cout << "Bo cho " << tongSua << " lit sua." << endl;
}

// Định nghĩa các phương thức của lớp Cuu
Cuu::Cuu(int sl) : GiaSuc(sl) {}

void Cuu::PhatTiengKeu() {
    cout << "Cuu: Bee!" << endl;
}

void Cuu::SinhCon() {
    int soCon = rand() % (soLuong + 1); // Sinh ngẫu nhiên số con
    soLuong += soCon;
    cout << "Cuu sinh " << soCon << " con." << endl;
}

void Cuu::ChoSua() {
    int tongSua = 0;
    for (int i = 0; i < soLuong; i++) {
        int sua = rand() % 6; // Cho ngẫu nhiên từ 0 đến 5 lít sữa
        tongSua += sua;
    }
    soLitSua += tongSua;
    cout << "Cuu cho " << tongSua << " lit sua." << endl;
}

// Định nghĩa các phương thức của lớp De
De::De(int sl) : GiaSuc(sl) {}

void De::PhatTiengKeu() {
    cout << "De: Mee!" << endl;
}

void De::SinhCon() {
    int soCon = rand() % (soLuong + 1); // Sinh ngẫu nhiên số con
    soLuong += soCon;
    cout << "De sinh " << soCon << " con." << endl;
}

void De::ChoSua() {
    int tongSua = 0;
    for (int i = 0; i < soLuong; i++) {
        int sua = rand() % 11; // Cho ngẫu nhiên từ 0 đến 10 lít sữa
        tongSua += sua;
    }
    soLitSua += tongSua;
    cout << "De cho " << tongSua << " lit sua." << endl;
}
