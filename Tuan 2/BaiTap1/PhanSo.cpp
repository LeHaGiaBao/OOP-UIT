#include<iostream>
#include"PhanSo.h"
using namespace std;

void PhanSo::set(double Tu, double Mau)
{
    TuSo = Tu;
    MauSo = Mau;
}

void PhanSo::Nhap()
{
    cin >> TuSo >> MauSo;
}

void PhanSo::Xuat()
{
    if (MauSo == 0)
    {
        cout << "Error";
    }
    else if (MauSo != 0)
    {
        if (TuSo == 0)
        {
            cout << "0";
        }
        else if ((TuSo > 0 && MauSo > 0) || (TuSo < 0 && MauSo < 0))
        {
            cout << TuSo << "/" << MauSo;
        } 
        else if (TuSo > 0 && MauSo < 0)
        {
            cout << -TuSo << "/" << -MauSo;
        }
        else
        {
            cout << TuSo << "/" << MauSo;
        }
    }
}

void PhanSo::Cong(PhanSo PS)
{
    TuSo = TuSo*PS.MauSo + MauSo*PS.TuSo;
    MauSo = MauSo*PS.MauSo;
}

void PhanSo::Tru(PhanSo PS)
{
    TuSo = TuSo*PS.MauSo - MauSo*PS.TuSo;
    MauSo = MauSo*PS.MauSo;
}

void PhanSo::Nhan(PhanSo PS)
{
    TuSo = TuSo*PS.TuSo;
    MauSo = MauSo*PS.MauSo;
}

void PhanSo::Chia(PhanSo PS)
{
    TuSo = TuSo*PS.MauSo;
    MauSo = MauSo*PS.MauSo;
}

int UocChungLonNhat(int SoThuNhat, int SoThuHai)
{
	if (SoThuHai == 0) return SoThuNhat;
	return UocChungLonNhat(SoThuHai, SoThuNhat % SoThuHai);
}

void PhanSo::ToiGianPhanSo(PhanSo &PhanSo)
{
	int UocChung = UocChungLonNhat(PhanSo.TuSo, PhanSo.MauSo);
	PhanSo.TuSo /= UocChung;
	PhanSo.MauSo /= UocChung;
}

int main()
{
    PhanSo PS1, PS2;
    cout << "Nhap lan luot tu va mau cua phan so thu nhat: ";
    PS1.Nhap();
    cout << "Nhap lan luot tu va mau cua phan so thu hai: ";
    PS2.Nhap();

    cout << "Phep Cong = ";
    PhanSo cong;
    cong = PS1;
    cong.Cong(PS2);
    cong.ToiGianPhanSo(cong);
    cong.Xuat();
    cout << endl;
    
    cout << "Phep Tru = ";
    PhanSo tru;
    tru = PS1;
    tru.Tru(PS2);
    tru.ToiGianPhanSo(tru);
    tru.Xuat();
    cout << endl;
    
    cout << "Phep Nhan = ";
    PhanSo nhan;
    nhan = PS1;
    nhan.Nhan(PS2);
    nhan.ToiGianPhanSo(nhan);
    nhan.Xuat();
    cout << endl;
    
    cout << "Phep Chia = ";
    PhanSo chia;
    chia = PS1;
    chia.Chia(PS2);
    chia.ToiGianPhanSo(chia);
    chia.Xuat();

    return 0;
}