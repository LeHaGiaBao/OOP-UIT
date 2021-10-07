#include<iostream>
using namespace std;

struct PhanSo
{
    int TuSo;
    int MauSo;
};

void NhapDuLieu(PhanSo &DuLieu)
{
    cout << "Nhap du lieu tu so: ";
    cin >> DuLieu.TuSo;
    do
    {
        cout << "Nhap du lieu mau so: ";
        cin >> DuLieu.MauSo;
    } while (DuLieu.MauSo == 0);
}

void XuatDuLieu(PhanSo &DuLieu)
{
    if (DuLieu.MauSo == 0)
    {
        cout << "Error" << endl;
    }
    else if (DuLieu.MauSo != 0)
    {
        if (DuLieu.TuSo == 0)
        {
            cout << "0" << endl;
        }
        else if ((DuLieu.TuSo > 0 && DuLieu.MauSo > 0) || (DuLieu.TuSo < 0 && DuLieu.MauSo < 0))
        {
            cout << DuLieu.TuSo << "/" << DuLieu.MauSo << endl;
        }
        else if (DuLieu.TuSo > 0 && DuLieu.MauSo < 0)
        {
            cout << -DuLieu.TuSo << "/" << -DuLieu.MauSo << endl;
        }
        else 
        {
            cout << DuLieu.TuSo << "/" << DuLieu.MauSo << endl;
        }
    }
}

int UocChungLonNhat(int a, int b)
{
    if (b == 0) return a;
    return UocChungLonNhat(b, a % b);
}

void ToiGianPhanSo(PhanSo &DuLieu)
{
    int UocChung = UocChungLonNhat(DuLieu.TuSo, DuLieu.MauSo);
    DuLieu.TuSo /= UocChung;
    DuLieu.MauSo /= UocChung;
}

double GiaTriCuaPhanSo(PhanSo DuLieu)
{
    ToiGianPhanSo(DuLieu);
    return (double)DuLieu.TuSo / (double)DuLieu.MauSo;
}

void SoSanhHaiPhanSo(PhanSo a, PhanSo b)
{
    double GiaTri1 = GiaTriCuaPhanSo(a);
    double GiaTri2 = GiaTriCuaPhanSo(b);
    if (GiaTri1 > GiaTri2) cout << "Phan so 1 lon hon phan so 2" << endl;
    else if (GiaTri1 < GiaTri2) cout << "Phan so 2 lon hon phan so 1" << endl;
    else cout << "Hai phan so bang nhau" << endl;
}

void PhepTinhCong(PhanSo a, PhanSo b)
{
    cout << "Tong cua 2 phan so la: ";
    PhanSo Tong;
    Tong.TuSo = (a.TuSo * b.MauSo) + (a.MauSo * b.TuSo);
    Tong.MauSo = (a.MauSo * b.MauSo);
    ToiGianPhanSo(Tong);
    XuatDuLieu(Tong);
}

void PhepTinhTru(PhanSo a, PhanSo b)
{
    cout << "Hieu cua 2 phan so la: ";
    PhanSo Hieu;
    Hieu.TuSo = (a.TuSo * b.MauSo) - (a.MauSo * b.TuSo);
    Hieu.MauSo = (a.MauSo * b.MauSo);
    ToiGianPhanSo(Hieu);
    XuatDuLieu(Hieu);
}

void PhepTinhNhan(PhanSo a, PhanSo b)
{
    cout << "Tich cua 2 phan so la: ";
    PhanSo Tich;
    Tich.TuSo = (a.TuSo * b.TuSo);
    Tich.MauSo = (a.MauSo * b.MauSo);
    ToiGianPhanSo(Tich);
    XuatDuLieu(Tich);
}

void PhepTinhChia(PhanSo a, PhanSo b)
{
    cout << "Thuong cua 2 phan so la: ";
    PhanSo Thuong;
    Thuong.TuSo = (a.TuSo * b.MauSo);
    Thuong.MauSo = (a.MauSo * b.TuSo);
    ToiGianPhanSo(Thuong);
    XuatDuLieu(Thuong);
}

int main()
{
    PhanSo PS1, PS2;
    cout << "Nhap du lieu phan so thu nhat: " << endl;
    NhapDuLieu(PS1);
    cout << "Nhap du lieu phan so thu hai: " << endl;
    NhapDuLieu(PS2);
    SoSanhHaiPhanSo(PS1, PS2);
    cout << "Ket qua cac phep tinh: " << endl;
    PhepTinhCong(PS1, PS2);
    PhepTinhTru(PS1, PS2);
    PhepTinhNhan(PS1, PS2);
    PhepTinhChia(PS1, PS2);
    return 0;
}