#include"BinhThuong.h"

BinhThuong::BinhThuong()
{
    SoTang = 1;
}

BinhThuong::~BinhThuong()
{

}

void BinhThuong::Nhap()
{
    cout << "Nhap thong tin cua can ho thuong" << endl;
    NhaThue::Nhap();
    cout << "Nhap so tang cua can ho: ";
    cin >> SoTang;
}

void BinhThuong::Xuat()
{
    cout << "Thong tin cua can ho thuong" << endl;
    NhaThue::Xuat();
    cout << "So tang cua can ho: " << SoTang << endl;
}