#pragma once
#include"NhanVien.h"

class QuanLyNhanVien
{
protected:
    NhanVien** DuLieu;
    long SoLuongNhanVien;
    long TongSoLuongPhaiTra;
    long LuongCaoNhat, Max;
    long LuongThapNhat, Min;
public:
    QuanLyNhanVien();
    ~QuanLyNhanVien();
    void Nhap();
    void Xuat();
};