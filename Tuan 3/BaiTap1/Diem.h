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
    void CaiDatDiem(double x = 0, double y = 0);
    double TraVeHoanhDo();
    double TraVeTungDo();
    void TinhTien();
    void Quay();
};