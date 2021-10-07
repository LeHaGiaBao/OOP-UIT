#pragma once
#include"NhanVien.h"

class NhanVienVanPhong : virtual public NhanVien
{
protected:
    long SoNgayLamViec;
public:
    NhanVienVanPhong();
    ~NhanVienVanPhong();
    virtual void Nhap();
    virtual void Xuat();
    virtual long Luong();
};