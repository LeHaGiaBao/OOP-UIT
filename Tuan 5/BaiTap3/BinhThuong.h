#pragma once
#include"NhaThue.h"

class BinhThuong : virtual public NhaThue
{
protected:
    int SoTang;
public:
    BinhThuong();
    ~BinhThuong();
    virtual void Nhap();
    virtual void Xuat();
};