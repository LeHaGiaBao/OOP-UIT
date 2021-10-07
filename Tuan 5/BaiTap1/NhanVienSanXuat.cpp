#include"NhanVienSanXuat.h"

NhanVienSanXuat::NhanVienSanXuat()
{

}

NhanVienSanXuat::~NhanVienSanXuat()
{

}

void NhanVienSanXuat::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap muc luong co ban: ";
    cin >> LuongCoBan;
    cout << "Nhap so san pham: ";
    cin >> SoSanPham;
}

void NhanVienSanXuat::Xuat()
{
    NhanVien::Xuat();
    cout << "Muc luong co ban: " << LuongCoBan << endl;
    cout << "So san pham lam duoc: " << SoSanPham << endl;
}

long NhanVienSanXuat::Luong()
{
    return LuongCoBan + (SoSanPham * 5000);
}