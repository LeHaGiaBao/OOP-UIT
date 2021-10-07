#pragma once
#include<iostream>
#include<string>
using namespace std;

class NhaThue
{
protected:
    char DiaChi[1000];
    long TienThueThang;
    long TienDatCoc;
    bool TinhTrangCanHo;
public:
    NhaThue();
    ~NhaThue();
    virtual void Nhap();
    virtual void Xuat();
    virtual long ThueThang();
    virtual long DatCoc();
    virtual bool TinhTrang();
};