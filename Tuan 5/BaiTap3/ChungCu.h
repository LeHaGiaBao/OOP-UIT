#pragma once
#include"NhaThue.h"

class ChungCu : virtual public NhaThue
{
protected:
    int TangMay;
public:
    ChungCu();
    ~ChungCu();
    virtual void Nhap();
    virtual void Xuat();
};