#include"NhanVien.h"

NhanVien::NhanVien()
{

}

NhanVien::~NhanVien()
{

}

void NhanVien::Nhap()
{
    cout << "Nhap ho va ten: ";
    cin >> HoTen;
    cout << "Nhap ngay sinh: ";
    cin >> Ngay;
    cout << "Nhap thang sinh: ";
    cin >> Thang;
    cout << "Nhap nam sinh: ";
    cin >> Nam;
}

void NhanVien::Xuat()
{
    cout << "Ho va ten nhan vien: " << HoTen << endl;
    cout << "Ngay thang nam sinh: " << Ngay << "/" << Thang << "/" << Nam << endl;
}

long NhanVien::Luong()
{
    return 0;
}