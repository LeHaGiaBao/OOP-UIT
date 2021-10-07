#include<iostream>
#include"CTime.h"
using namespace std;

CTime::CTime(int a, int b, int c)
{
    Gio = (a < 0 || a > 23) ? 0 : a;
    Phut = (b < 0 || b > 59) ? 0 : a;
    Giay = (c < 0 || c > 59) ? 0 : a;
}

CTime::~CTime()
{

}

istream &operator >> (istream &In, CTime &DuLieu)
{
    cout << "Nhap du lieu gio: ";
    In >> DuLieu.Gio;
    cout << "Nhap du lieu phut: ";
    In >> DuLieu.Phut;
    cout << "Nhap du lieu giay: ";
    In >> DuLieu.Giay;
    return In;
}

ostream &operator << (ostream &Out, CTime &DuLieu)
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
    Out << DuLieu.Gio << " gio " << DuLieu.Phut << " phut " << DuLieu.Giay << " giay";
    return Out;
}

CTime CTime::operator+(int &DuLieu)
{
    CTime Temp;
    Temp.Gio = this->Gio;
    Temp.Phut = this->Phut;
    Temp.Giay = this->Giay;
    Temp.Giay = Temp.Giay + DuLieu;
    return Temp;
}

CTime CTime::operator-(int &DuLieu)
{
    CTime Temp;
    Temp.Gio = this->Gio;
    Temp.Phut = this->Phut;
    Temp.Giay = this->Giay;
    Temp.Giay = Temp.Giay - DuLieu;
    while (Temp.Giay <= 0)
    {
        Temp.Giay = 60 + Temp.Giay;
        Temp.Phut--;
    }
    while (Temp.Phut <= 0)
    {
        Temp.Phut = 60 + Temp.Phut;
        Temp.Gio--;
    }
    if (Temp.Gio <= 0) Temp.Gio = 0;
    return Temp;
}

CTime CTime::operator-(CTime &DuLieu)
{
    CTime Temp;
    Temp.Gio = this->Gio - DuLieu.Gio;
    Temp.Phut = this->Phut - DuLieu.Phut;
    Temp.Giay = this->Giay - DuLieu.Giay;
    while (Temp.Giay <= 0)
    {
        Temp.Giay = 60 + Temp.Giay;
        Temp.Phut--;
    }
    while (Temp.Phut <= 0)
    {
        Temp.Phut = 60 + Temp.Phut;
        Temp.Gio--;
    }
    if (Temp.Gio <= 0) Temp.Gio = 0;
    return Temp;
}

CTime CTime::operator++(int DuLieu)
{
    Giay++;
    return *this;
}

CTime CTime::operator--(int DuLieu)
{
    Giay--;
    if (Giay == 0)
	{
		Giay = 59;
		Phut--;
	}
	if (Phut == 0)
	{
		Phut = 59;
		Gio--;
	}
    if (Gio <= 0) Gio = 0;
    return *this;
}