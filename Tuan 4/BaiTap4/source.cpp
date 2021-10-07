#include<iostream>
#include"CTime.h"
#include"CTime.cpp"
using namespace std;

int main()
{
    CTime ThoiGian;
    cout << "Nhap vao  du lieu thoi gian: " << endl;
    cin >> ThoiGian;
    cout << "Thoi gian sau khi nhap la: " << ThoiGian << endl;
    cout << "Nhap vao giay cong them: ";
    int GiayCongThem;
    cin >> GiayCongThem;
    CTime PhepCong = ThoiGian + GiayCongThem;
    cout << "Thoi gian sau khi cong them la: " << PhepCong << endl;
    cout << "Nhap vao giay tru di: ";
    int GiayTruDi;
    cin >> GiayTruDi;
    CTime PhepTru = ThoiGian - GiayTruDi;
    cout << "Thoi gian sau khi tru di la: " << PhepTru << endl;
    cout << "Nhap vao du lieu thoi gian muon tru: " << endl;
    CTime ThoiGianTru;
    cin >> ThoiGianTru;
    cout << "Du lieu vua nhap la: " << ThoiGianTru << endl;
    CTime CTimeSpan = ThoiGian - ThoiGianTru;
    cout << "Tru hai thoi gian voi nhau ta duoc: " << CTimeSpan << endl;
    CTime CongThemGiay = ThoiGian++;
    cout << "Thoi gian sau khi tang 1 giay: " << CongThemGiay << endl;
    CTime TruDiGiay = ThoiGian--;
    cout << "Thoi gian sau khi tru di 1 giay: " << TruDiGiay << endl;
    return 0;
}   