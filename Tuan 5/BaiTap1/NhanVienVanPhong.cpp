#include"NhanVienVanPhong.h"

NhanVienVanPhong::NhanVienVanPhong()
{

}

NhanVienVanPhong::~NhanVienVanPhong()
{

}

void NhanVienVanPhong::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap so ngay lam viec: ";
    cin >> SoNgayLamViec;
}

void NhanVienVanPhong::Xuat()
{
    NhanVien::Xuat();
    cout << "So ngay lam viec: " << SoNgayLamViec << endl;
}

long NhanVienVanPhong::Luong()
{
    return SoNgayLamViec * 100000;
}