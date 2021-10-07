#pragma once

class Diem
{
private:
    double HoanhDo, TungDo;
public:
    Diem();
    ~Diem();
    void Nhap();
    void Xuat();
    void CaiDatDiem(double = 0, double = 0);
    double TraVeHoanhDo();
    double TraVeTungDo();
    void TinhTien(double, double);
    void Quay(double);
};