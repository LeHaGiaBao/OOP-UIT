#include<iostream>
#include"ThoiGian.h"
using namespace std;

ThoiGian::ThoiGian()
{

}

ThoiGian::~ThoiGian()
{

}

void ThoiGian::Nhap()
{
    int KiemTra;
    do
    {
        KiemTra = 0;
        cout << "Nhap vao Gio: ";
        cin >> Gio;
        if (Gio < 0 || Gio > 24)
        {
            KiemTra = 1;
            cout << "Gio nhap vao khong hop le. Vui long nhap lai!";
        }
    } while (KiemTra);
    cout << "Nhap vao Phut: ";
    cin >> Phut;
    cout << "Nhap vao Giay: ";
    cin >> Giay;
}

void ThoiGian::Xuat()
{
    cout << "Thoi gian sau khi xu ly la: ";
    cout << Gio << " gio " << Phut << " phut " << Giay << " giay"; 
}

void ThoiGian::CaiDatThoiGian(int X, int Y, int Z)
{
    Gio = X;
    Phut = Y;
    Giay = Z;
}

int ThoiGian::LayDuLieuGio()
{
    return Gio;
}

int ThoiGian::LayDuLieuPhut()
{
    return Phut;
}

int ThoiGian::LayDuLieuGiay()
{
    return Giay;
}

void ThoiGian::XuLyThoiGian()
{
    while (Giay >= 60)
    {
        Giay = Giay - 60;
        Phut++;
    }
    while (Phut >= 60)
    {
        Phut = Phut - 60;
        Gio++;
    }
}