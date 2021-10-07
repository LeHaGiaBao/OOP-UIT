#include<iostream>
#include"CDate.h"
#include"CDate.cpp"
using namespace std;

int main()
{
    CDate DuLieu;
    cout << "Nhap vao du lieu ngay thang nam: " << endl;
    cin >> DuLieu;
    cout << "Du lieu sau khi nhap vao la: " << DuLieu << endl;
    cout << "Nhap vao so ngay cong them: ";
    int NgayCongThem;
    cin >> NgayCongThem;
    CDate PhepCong = DuLieu + NgayCongThem;
    cout << "Du lieu sau khi cong them la: " << PhepCong << endl;
    cout << "Nhap vao so ngay tru di: ";
    int NgayTruDi;
    cin >> NgayTruDi;
    CDate PhepTru = DuLieu - NgayTruDi;
    cout << "Du lieu sau khi tru di la: " << PhepTru << endl;
    cout << "Nhap vao vao du lieu ngay thang nam muon tru: " << endl;
    CDate DuLieuTruDi;
    cin >> DuLieuTruDi;
    cout << "Du lieu vua nhap la: " << DuLieuTruDi << endl;
    long CTimeSpan = DuLieu - DuLieuTruDi;
    cout << "Khoang cach giua hai du lieu la: " << CTimeSpan << " ngay" << endl;
    CDate CongThemNgay = DuLieu++;
    cout << "Du lieu tang them 1 ngay la: " << CongThemNgay << endl;
    CDate TruDiNgay = DuLieu--;
    cout << "Du lieu tru di 1 ngay la: " << TruDiNgay << endl;
    return 0;
}