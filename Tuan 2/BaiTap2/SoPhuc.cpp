#include<iostream>
#include<cmath>
#include"SoPhuc.h"
using namespace std;

void SoPhuc::Nhap()
{
    cin >> PhanThuc >> PhanAo;
}

void SoPhuc::Xuat()
{
    cout << "(" << PhanThuc;
    if (PhanAo >= 0)
    {
        cout << "+" << PhanAo << "i)";
    }
    else 
    {
        cout << PhanAo << "i)";
    }
}

void SoPhuc::Cong(SoPhuc sophuc)
{
    PhanThuc = PhanThuc + sophuc.PhanThuc;
    PhanAo = PhanAo + sophuc.PhanAo;
}

void SoPhuc::Tru(SoPhuc sophuc)
{
    PhanThuc = PhanThuc - sophuc.PhanThuc;
    PhanAo = PhanAo - sophuc.PhanAo;
}

void SoPhuc::Nhan(SoPhuc sophuc)
{
    PhanThuc = (PhanThuc*sophuc.PhanThuc) - (PhanAo*sophuc.PhanAo);
    PhanAo = (PhanThuc*sophuc.PhanAo) + (PhanThuc*sophuc.PhanAo);
}

void SoPhuc::Chia(SoPhuc sophuc)
{
    PhanThuc = (PhanThuc*sophuc.PhanThuc + PhanAo*sophuc.PhanAo) / (pow(PhanAo,2) + pow(sophuc.PhanAo,2));
    PhanThuc = (PhanAo*sophuc.PhanThuc + PhanThuc*sophuc.PhanAo) / (pow(PhanAo,2) + pow(sophuc.PhanAo,2));
}

int main()
{
    SoPhuc sothunhat, sothuhai;
    cout << "Nhap lan luot phan thuc va ao cua so thu nhat: ";
    sothunhat.Nhap();
    cout << "Nhap lan luot phan thuc va ao cua so thu hai: ";
    sothuhai.Nhap();

    cout << "Phep Cong 2 so phuc la: ";
    SoPhuc cong;
    cong = sothunhat;
    cong.Cong(sothuhai);
    cong.Xuat();
    cout << endl;

    cout << "Phep Cong 2 so phuc la: ";
    SoPhuc tru;
    tru = sothunhat;
    tru.Tru(sothuhai);
    tru.Xuat();
    cout << endl;

    cout << "Phep Cong 2 so phuc la: ";
    SoPhuc nhan;
    nhan = sothunhat;
    nhan.Nhan(sothuhai);
    nhan.Xuat();
    cout << endl;

    cout << "Phep Cong 2 so phuc la: ";
    SoPhuc chia;
    chia = sothunhat;
    chia.Chia(sothuhai);
    chia.Xuat();
    cout << endl;

    return 0;
}