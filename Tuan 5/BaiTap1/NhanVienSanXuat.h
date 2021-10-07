#pragma once
#include"NhanVien.h"

class NhanVienSanXuat : virtual public NhanVien
{
protected:
    long LuongCoBan, SoSanPham;
public:
    NhanVienSanXuat();
    ~NhanVienSanXuat();
    virtual void Nhap();
    virtual void Xuat();
    virtual long Luong();
};