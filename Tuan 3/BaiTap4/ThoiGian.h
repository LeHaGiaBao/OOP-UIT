#pragma once
class ThoiGian
{
private:
    int Gio, Phut, Giay;
public:
    ThoiGian();
    ~ThoiGian();
    void Nhap();
    void Xuat();
    void CaiDatThoiGian(int, int, int);
    int LayDuLieuGio();
    int LayDuLieuPhut();
    int LayDuLieuGiay();
    void XuLyThoiGian();
};