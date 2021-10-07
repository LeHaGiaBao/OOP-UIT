#include<iostream>
#include"CTimeSpan.h"
using namespace std;

CTimeSpan::CTimeSpan(int H, int M, int S)
{
    Gio = H;
    Phut = M;
    Giay = S;
}

CTimeSpan::~CTimeSpan()
{
 
}

istream &operator >> (istream &In, CTimeSpan &DuLieu)
{
    cout << "Nhap vao du lieu Gio: ";
    In >> DuLieu.Gio;
    cout << "Nhap vao du lieu Phut: ";
    In >> DuLieu.Phut;
    cout << "Nhap vao du lieu Giay: ";
    In >> DuLieu.Giay;
    return In;
}

ostream &operator << (ostream &Out, CTimeSpan &DuLieu)
{
    while (DuLieu.Giay >= 60)
    {
        DuLieu.Giay = DuLieu.Giay - 60;
        DuLieu.Phut++;
    }
    while (DuLieu.Phut >= 60)
    {
        DuLieu.Phut = DuLieu.Phut - 60;
        DuLieu.Gio++;
    }
    Out << DuLieu.Gio << " gio " << DuLieu.Phut << " phut " << DuLieu.Giay << " giay ";
    return Out;
}

long CTimeSpan::TongSoThoiGian()
{
    return Gio*3600 + Phut*60 + Giay;
}

bool CTimeSpan::operator > (CTimeSpan &Dulieu)
{
    if (this->TongSoThoiGian() > Dulieu.TongSoThoiGian())
        return true;
    return false;
}

bool CTimeSpan::operator >= (CTimeSpan &Dulieu)
{
    if (this->TongSoThoiGian() >= Dulieu.TongSoThoiGian())
        return true;
    return false;
}

bool CTimeSpan::operator < (CTimeSpan &Dulieu)
{
    if (this->TongSoThoiGian() < Dulieu.TongSoThoiGian())
        return true;
    return false;
}

bool CTimeSpan::operator <= (CTimeSpan &Dulieu)
{
    if (this->TongSoThoiGian() <= Dulieu.TongSoThoiGian())
        return true;
    return false;
}

bool CTimeSpan::operator == (CTimeSpan &Dulieu)
{
    if (this->TongSoThoiGian() == Dulieu.TongSoThoiGian())
        return true;
    return false;
}

bool CTimeSpan::operator != (CTimeSpan &Dulieu)
{
    if (this->TongSoThoiGian() != Dulieu.TongSoThoiGian())
        return true;
    return false;
}