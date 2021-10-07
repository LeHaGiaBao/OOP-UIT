#include<iostream>
#include<cmath>
#include"PhanSo.h"
using namespace std;

PhanSo::PhanSo(double Tu, double Mau)
{
    TuSo = Tu;
    MauSo = Mau;
}

PhanSo::~PhanSo()
{

}

int UocChungLonNhat(int SoThuNhat, int SoThuHai)
{
    if (SoThuHai == 0)
        return SoThuNhat;
    return UocChungLonNhat(SoThuHai, SoThuNhat % SoThuHai);
}

void PhanSo::ToiGianPhanSo(PhanSo &DuLieu)
{
    int UocChung = UocChungLonNhat(DuLieu.TuSo, DuLieu.MauSo);
    DuLieu.TuSo /= UocChung;
    DuLieu.MauSo /= UocChung;
}

istream &operator >> (istream &In, PhanSo &DuLieu)
{
    cout << "Nhap vao tu so: ";
    In >> DuLieu.TuSo;
    cout << "Nhap vao mau so: ";
    In >> DuLieu.MauSo;
    return In;
}

ostream &operator << (ostream &Out, PhanSo &DuLieu)
{
    if (DuLieu.TuSo == 0)
    {
        Out << "0";
    }
    else if ((DuLieu.TuSo > 0 && DuLieu.MauSo > 0) || (DuLieu.TuSo < 0 && DuLieu.MauSo < 0))
    {
        Out << DuLieu.TuSo << "/" << DuLieu.MauSo;
    }
    else if (DuLieu.TuSo > 0 && DuLieu.MauSo < 0)
    {
        Out << "-" << DuLieu.TuSo << "/" << abs(DuLieu.MauSo);
    }
    return Out;
}

PhanSo PhanSo::operator+(PhanSo &DuLieu)
{
    PhanSo Temp;
    Temp.TuSo = (this->TuSo * DuLieu.MauSo) + (this->MauSo * DuLieu.TuSo);
    Temp.MauSo = (this->MauSo * DuLieu.MauSo);
    return Temp; 
}

PhanSo PhanSo::operator-(PhanSo &DuLieu)
{
    PhanSo Temp;
    Temp.TuSo = (this->TuSo * DuLieu.MauSo) - (this->MauSo * DuLieu.TuSo);
    Temp.MauSo = (this->MauSo * DuLieu.MauSo);
    return Temp; 
}

PhanSo PhanSo::operator*(PhanSo &DuLieu)
{
    PhanSo Temp;
    Temp.TuSo = (this->TuSo * DuLieu.TuSo);
    Temp.MauSo = (this->MauSo * DuLieu.MauSo);
    return Temp; 
}

PhanSo PhanSo::operator/(PhanSo &DuLieu)
{
    PhanSo Temp;
    Temp.TuSo = (this->TuSo * DuLieu.MauSo);
    Temp.MauSo = (this->MauSo * DuLieu.TuSo);
    return Temp; 
}

bool PhanSo::operator==(PhanSo &DuLieu)
{
    if ((this->TuSo == DuLieu.TuSo) && (this->MauSo == DuLieu.MauSo))
        return true;
    return false;
}

bool PhanSo::operator!=(PhanSo &DuLieu)
{
    if ((this->TuSo != DuLieu.TuSo) || (this->MauSo != DuLieu.MauSo))
        return true;
    return false;
}