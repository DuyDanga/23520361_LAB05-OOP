#pragma once
#include <iostream>
using namespace std;
class GiaSuc {
protected:
    int soLuong; 
    int soLitSua; 
public:
    GiaSuc(int sl = 0);
    virtual void PhatTiengKeu() = 0; 
    virtual void SinhCon() = 0;     
    virtual void ChoSua() = 0;       
    int getSoLuong() const;
    int getSoLitSua() const;
};

// Lớp Bo kế thừa từ GiaSuc
class Bo : public GiaSuc {
public:
    Bo(int sl = 0);

    void PhatTiengKeu() override;
    void SinhCon() override;
    void ChoSua() override;
};

// Lớp Cuu kế thừa từ GiaSuc
class Cuu : public GiaSuc {
public:
    Cuu(int sl = 0);

    void PhatTiengKeu() override;
    void SinhCon() override;
    void ChoSua() override;
};

// Lớp De kế thừa từ GiaSuc
class De : public GiaSuc {
public:
    De(int sl = 0);

    void PhatTiengKeu() override;
    void SinhCon() override;
    void ChoSua() override;
};

