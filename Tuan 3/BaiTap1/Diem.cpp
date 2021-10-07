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
    cout << "Toa do diem la: ";
    cout << "(" << HoanhDo << ";" << TungDo << ")";
}

void Diem::TinhTien()
{
    Diem DiemTinhTien;
    cout << "Nhap vecto tinh tien: " << endl;
    double X,Y;
    cout << "Nhap hoanh do: ";
    cin >> X;
    cout << "Nhap tung do: ";
    cin >> Y;
    DiemTinhTien.HoanhDo = HoanhDo + X;
    DiemTinhTien.TungDo = TungDo + Y;
    cout << "Diem sau khi tinh tien theo vecto (" << X << ";" << Y << ") la: ";
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

void Diem::Quay()
{
    double GocQuay;
    cout << "Nhap vao goc quay: ";
    cin >> GocQuay;
    double BanKinh = sqrt(pow(HoanhDo, 2) + pow(TungDo, 2));
    HoanhDo = BanKinh * cos(GocQuay);
    TungDo = BanKinh * sqrt(1 - pow(cos(GocQuay), 2));
    cout << "Diem qua goc quay tam O goc quay " << GocQuay << " la: ";
    cout << "(" << HoanhDo << ";" << TungDo << ")";
}