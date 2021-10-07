#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct HocSinh {
    string HoVaTen;
    double DiemToan;
    double DiemVan;
};

void NhapDuLieu(HocSinh &DuLieu)
{
    cout << "Nhap ho va ten: ";
    getline(std::cin,DuLieu.HoVaTen);
    cout << "Nhap diem Toan: ";
    cin >> DuLieu.DiemToan;
    cout << "Nhap diem Van: ";
    cin >> DuLieu.DiemVan;
}

void XuatDuLieu(HocSinh DuLieu)
{
    cout << "Ho va ten hoc sinh " << DuLieu.HoVaTen << endl;
    cout << "Diem mon Toan la: " << DuLieu.DiemToan << endl;
    cout << "Diem mon Van la: " << DuLieu.DiemVan << endl;
    double DiemTrungBinh = (DuLieu.DiemToan + DuLieu.DiemVan) / 2;
    cout << "Diem Trung Binh La: " << setprecision(2) << fixed << double(DiemTrungBinh);
}

int main()
{
    HocSinh DuLieu;
    cout << "Nhap du lieu cua hoc sinh: " << endl;
    NhapDuLieu(DuLieu);
    cout << "============================" << endl;
    XuatDuLieu(DuLieu);
    return 0;
}