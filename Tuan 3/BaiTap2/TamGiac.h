#pragma once
#include"Diem.h"

class TamGiac
{
private:
    Diem A, B, C;
public:
    TamGiac();
    ~TamGiac();
    void Nhap();
    void Xuat();
    void CaiDatDiem(Diem, Diem, Diem);
    void TinhTien();
    void Quay();
    void PhongTo();
    void ThuNho();
};