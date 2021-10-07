#include"CongTyABC.h"
#include"NhaThue.h"
#include"ChungCu.h"
#include"BinhThuong.h"

CongTyABC::CongTyABC()
{
    SoCanHo = 0;
    DuLieu = new NhaThue * [SoCanHo];
    SoCanHoTrong = 0;
    SoCanHoThuong = 0; 
    SoChungCu = 0;
    TongTienChoThue = 0;
    TongTienDatCoc = 0;
}

CongTyABC::~CongTyABC()
{
    delete[]DuLieu;
}

void CongTyABC::Nhap()
{
    cout << "Nhap so can ho cong ty ABC quan ly: ";
    cin >> SoCanHo;
    int LuaChon = 0;
    for (int i = 0; i < SoCanHo; i++)
    {
        do
        { 
            cout << "======================================" << endl;
            cout << "Nhap thong tin can ho thu: " << i + 1 << endl;
            cout << "Nhap so 1 neu can ho la chung cu" << endl;
            cout << "Nhap so 2 neu can ho la can ho thuong" << endl;
            cout << "Nhap su lua chon: ";
            cin >> LuaChon;
            if (LuaChon != 1 && LuaChon != 2)
            {
                cout << "Nhap sai. Vui long nhap lai!" << endl;
            }   
        } while (LuaChon != 1 && LuaChon != 2);
        if (LuaChon == 1)
        {
            DuLieu[i] = new ChungCu;
            DuLieu[i]->Nhap();
            if (DuLieu[i]->TinhTrang() == 0)
            {
                SoChungCu++;
                TongTienChoThue += DuLieu[i]->ThueThang();
                TongTienDatCoc += DuLieu[i]->DatCoc();
            }
            else if (DuLieu[i]->TinhTrang() == 1)
            {
                SoCanHoTrong++;
            }
        }
        else if (LuaChon == 2)
        {
            DuLieu[i] = new BinhThuong;
            DuLieu[i]->Nhap();
            if (DuLieu[i]->TinhTrang() == 0)
            {
                SoCanHoThuong++;
                TongTienChoThue += DuLieu[i]->ThueThang();
                TongTienDatCoc += DuLieu[i]->DatCoc();
            }
            else if (DuLieu[i]->TinhTrang() == 1)
            {
                SoCanHoTrong++;
            }
        }
    }
}

void CongTyABC::Xuat()
{
    cout << "========================================" << endl;
    cout << "THONG TIN QUAN LY CUA CONG TY ABC" << endl;
    cout << "So luong can ho cong ty quan ly: " << SoCanHo << endl;
    cout << "So luong can ho con trong: " << SoCanHoTrong << endl;
    cout << "So luong can ho cho thue: " << SoChungCu + SoCanHoThuong << endl;
    cout << "So chung cu da cho thue: " << SoChungCu << endl;
    cout << "So can ho thuong da cho thue: " << SoCanHoThuong << endl;
    cout << "Thong tin chi tiet cac can ho: " << endl;
    for (int i = 0; i < SoCanHo; i++)
    {
        cout << "=================================" << endl;
        cout << "Thong tin can ho thu: " << i + 1 << endl;
        DuLieu[i]->Xuat();
    }
    cout << "Tong so tien thue phong trong thang: " << TongTienChoThue << endl;
    cout << "Tong so tien dat coc trong thang: " << TongTienDatCoc << endl;
}