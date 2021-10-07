#include<iostream>
#include<cmath>
#include"Diem.h"
using namespace std;

Diem::Diem()
{

}

Diem::~Diem()
{

}

void Diem::CaiDatDiem(double x, double y)
{
    HoanhDo = x;
    TungDo = y;
}

double Diem::TraVeHoanhDo()
{
    return HoanhDo;
}

double Diem::TraVeTungDo()
{
    return TungDo;
}

void Diem::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> HoanhDo;
    cout << "Nhap tung do: ";
    cin >> TungDo;
}

void Diem::Xuat()
{
    cout << "(" << HoanhDo << ";" << TungDo << ")";
}

void Diem::TinhTien(double X, double Y)
{
    Diem DiemTinhTien;
    DiemTinhTien.HoanhDo = HoanhDo + X;
    DiemTinhTien.TungDo = TungDo + Y;;
    cout << "(" << DiemTinhTien.HoanhDo << ";" << DiemTinhTien.TungDo << ")"; 
}

long long GiaiThua(int n)
{
    long long GiaTriGiaiThua = 1;
    for (int i = 1; i <= n; i++)
    {
        GiaTriGiaiThua = GiaTriGiaiThua * i;
    }
    return GiaTriGiaiThua;
}

void Diem::Quay(double GocQuay)
{
    Diem DiemQuay;
    DiemQuay.HoanhDo = HoanhDo;
    DiemQuay.TungDo = TungDo;
    double BanKinh = sqrt(pow(DiemQuay.HoanhDo, 2) + pow(DiemQuay.TungDo, 2));
    DiemQuay.HoanhDo = BanKinh * cos(GocQuay);
    DiemQuay.TungDo = BanKinh * sqrt(1 - pow(cos(GocQuay), 2));
    cout << "(" << DiemQuay.HoanhDo << ";" << DiemQuay.TungDo << ")";
}