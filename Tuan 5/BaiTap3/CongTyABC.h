#pragma once
#include"NhaThue.h"

class CongTyABC
{
protected:
    NhaThue **DuLieu;
    int SoCanHo;
    int SoCanHoTrong;
    int SoCanHoThuong, SoChungCu;
    long TongTienChoThue;
    long TongTienDatCoc;
public:
    CongTyABC();
    ~CongTyABC();
    void Nhap();
    void Xuat();
};