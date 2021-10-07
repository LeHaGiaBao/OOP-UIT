#include<iostream>
using namespace std;

void NhapDuLieu(int SoPhanTu, int *Mang)
{
    for (int i = 0; i < SoPhanTu; i++)
    {
        cin >> Mang[i];
    }
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void SapXepMangTheoThuTuTangDan(int SoPhanTu, int *Mang)
{
    for (int i = 0; i < SoPhanTu - 1; i++)
    {
        for (int j = i+1; j < SoPhanTu; j++)
        {
            if (Mang[i] > Mang[j]) Swap(Mang[i], Mang[j]);
        }
    }
}

void XuatDuLieu(int SoPhanTu, int *Mang)
{
    for (int i = 0; i < SoPhanTu; i++)
    {
        cout << Mang[i] << " ";
    }
}

int main()
{
    cout << "Nhap so phan tu cua mang: ";
    int SoPhanTu;
    cin >> SoPhanTu;
    cout << "Nhap mang so nguyen: ";
    int *Mang = new int [SoPhanTu];
    NhapDuLieu(SoPhanTu,Mang);
    SapXepMangTheoThuTuTangDan(SoPhanTu,Mang);
    cout << "Mang sau khi da sap xep tang dan: ";
    XuatDuLieu(SoPhanTu,Mang);
    return 0;
}
