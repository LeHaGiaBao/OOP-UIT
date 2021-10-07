#include<iostream>
#include"Diem.h"
#include"DaGiac.h"
#include<cmath>

using namespace std;

DaGiac::DaGiac()
{

}

DaGiac::~DaGiac()
{

}

void DaGiac::Nhap()
{
    int KiemTra;
    do
    {
        cout << "Nhap so dinh cua da giac: ";
        KiemTra = 0;
        cin >> SoDinh;
        if (SoDinh < 3)
        {
            KiemTra = 1;
            cout << "So dinh nhap vao khong hop le. Vui long nhap lai!" << endl;
        }
    } while (KiemTra);
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Nhap du lieu dinh thu " << i << endl;
        DanhSach[i].Nhap();
    }
}

void DaGiac::Xuat()
{
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Toa do dinh thu " << i << " la: ";
        DanhSach[i].Xuat();
        cout << endl;
    }
}

void DaGiac::TinhTien()
{
    cout << "====================" << endl;
    cout << "Nhap vecto tinh tien" << endl;
    double X,Y;
    cout << "Nhap hoanh do: ";
    cin >> X;
    cout << "Nhap tung do: ";
    cin >> Y;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Dinh thu " << i << " sau khi tinh tien theo vecto (" << X << ";" << Y << ") la: ";
        DanhSach[i].TinhTien(X, Y);
        cout << endl;
    }
}

void DaGiac::Quay()
{
    cout << "===================================" << endl;
    double GocQuay;
    cout << "Nhap vao goc quay: ";
    cin >> GocQuay;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Dinh thu " << i << " qua goc quay tam O goc quay " << GocQuay << " la: ";
        DanhSach[i].Quay(GocQuay);
        cout << endl;
    }
}

void DaGiac::PhongTo()
{
    cout << "================================" << endl;
    double Phong;
    cout << "Nhap he so phong: ";
    cin >> Phong;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Dinh thu " << i << " sau khi phong to la ";
        DanhSach[i].CaiDatDiem(DanhSach[i].TraVeHoanhDo() * Phong, DanhSach[i].TraVeTungDo() * Phong);
        DanhSach[i].Xuat();
        cout << endl;
    }
}

void DaGiac::ThuNho()
{
    cout << "================================" << endl;
    double Thu;
    cout << "Nhap he so thu: ";
    cin >> Thu;
    for (int i = 0; i < SoDinh; i++)
    {
        cout << "Dinh thu " << i << " sau khi thu nho la ";
        DanhSach[i].CaiDatDiem(DanhSach[i].TraVeHoanhDo() * (1.0/Thu), DanhSach[i].TraVeTungDo() * (1.0/Thu));
        DanhSach[i].Xuat();
        cout << endl;
    }
}