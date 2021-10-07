#include"QuanLyNhanVien.h"
#include"NhanVienSanXuat.h"
#include"NhanVienVanPhong.h"

QuanLyNhanVien::QuanLyNhanVien()
{
    SoLuongNhanVien = 0;
    DuLieu = new NhanVien * [SoLuongNhanVien];
    TongSoLuongPhaiTra = 0;
    LuongCaoNhat = 0; Max = 0;
    LuongThapNhat = 0; Min = 0;
}

QuanLyNhanVien::~QuanLyNhanVien()
{
    delete[]DuLieu;
}

void QuanLyNhanVien::Nhap()
{
    cout << "Nhap so luong nhan vien: ";
    cin >> SoLuongNhanVien;
    int LuaChon = 0;
    for (int i = 0; i < SoLuongNhanVien; i++)
    {
        do
        {
            cout << "==============================" << endl;
            cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
            cout << "Menu nhap du lieu:" << endl;
            cout << "Nhap so 1 neu la nhan vien san xuat" << endl;
            cout << "Nhap so 2 neu la nhan vien van phong" << endl;
            cout << "Nhap su lua chon: ";
            cin >> LuaChon;
            if (LuaChon != 1 && LuaChon != 2)
            {
                cout << "Nhap sai lua chon, vui long nhap lai!" << endl;
            }
        } while (LuaChon != 1 && LuaChon != 2);
        if (LuaChon == 1)
        {
            DuLieu[i] = new NhanVienSanXuat;
        }
        else if (LuaChon == 2)
        {
            DuLieu[i] = new NhanVienVanPhong;
        }
        DuLieu[i]->Nhap();
        TongSoLuongPhaiTra += DuLieu[i]->Luong();
    }
}

void QuanLyNhanVien::Xuat()
{
    cout << "So luong nhan vien cua cong ty: " << SoLuongNhanVien << endl;
    for (int i = 0; i < SoLuongNhanVien; i++)
    {
        cout << "=================================================" << endl;
        cout << "Thong tin nhan vien thu: " << i + 1 << endl;
        DuLieu[i]->Xuat();
        cout << "Tien luong nhan duoc: " << DuLieu[i]->Luong() << endl;
    }
    cout << "======================================================" << endl;
    cout << "Tong so tien luong ma cong ty phai tra cho nhan vien: " << TongSoLuongPhaiTra << endl;
    LuongCaoNhat = DuLieu[0]->Luong();
    LuongThapNhat = DuLieu[0]->Luong();
    for (int i = 0; i < SoLuongNhanVien; i++)
    {
        if (DuLieu[i]->Luong() > LuongCaoNhat)
        {
            LuongCaoNhat = DuLieu[i]->Luong();
            Max = i;
        }
        if (DuLieu[i]->Luong() < LuongThapNhat)
        {
            LuongThapNhat = DuLieu[i]->Luong();
            Min = i;
        }
    }
    cout << "Nhan vien co muc luong cao nhat la: " << endl;
    DuLieu[Max]->Xuat();
    cout << endl;
    cout << "Nhan vien co muc luong thap nhat la: " << endl;
    DuLieu[Min]->Xuat();
    cout << endl;
}