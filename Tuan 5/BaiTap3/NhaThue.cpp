#include"NhaThue.h"

NhaThue::NhaThue()
{
    TienDatCoc = 0;
    TienThueThang = 0;
    TinhTrangCanHo = 0;
}

NhaThue::~NhaThue()
{

}

void NhaThue::Nhap()
{
    cout << "Nhap vao dia chi can ho: ";
    cin >> DiaChi;
    cout << "Nhap vao so tien dat coc: ";
    cin >> TienDatCoc;
    cout << "Nhap vao so tien thue hang thang: ";
    cin >> TienThueThang;
    do
    {
        cout << "Nhap so 0 neu dang cho thue" << endl;
        cout << "Nhap so 1 neu dang con trong" << endl;
        cout << "Nhap lua chon: ";
        cin >> TinhTrangCanHo;
        if (TinhTrangCanHo != 0 && TinhTrangCanHo != 1)
        {
            cout << "Nhap sai. Vui long nhap lai!" << endl;
        }
    } while (TinhTrangCanHo != 0 && TinhTrangCanHo != 1);
}

void NhaThue::Xuat()
{
    cout << "Dia chi can ho: " << DiaChi << endl;
    cout << "Tien dat coc la: " << TienDatCoc << endl;
    cout << "Tien thue hang thang la: " << TienThueThang << endl;
    cout << "Tinh trang can ho: ";
    if (TinhTrangCanHo == 0)
    {
        cout << "Cho thue" << endl;
    }
    else if (TinhTrangCanHo == 1)
    {
        cout << "Con trong" << endl;
    }
}

long NhaThue::DatCoc()
{
    return TienDatCoc;
}

long NhaThue::ThueThang()
{
    return TienThueThang;
}

bool NhaThue::TinhTrang()
{
    return TinhTrangCanHo;
}