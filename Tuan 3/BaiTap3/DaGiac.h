#pragma once
#include"Diem.h"

class DaGiac
{
private:
    int SoDinh;
    Diem *DanhSach = new Diem[SoDinh];
public:
    DaGiac();
    ~DaGiac();
    void Nhap();
    void Xuat();
    void TinhTien();
    void Quay();
    void PhongTo();
    void ThuNho();
};