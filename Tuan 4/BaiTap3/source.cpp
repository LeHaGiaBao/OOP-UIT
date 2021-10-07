#include<iostream>
#include"CTimeSpan.h"
#include"CTimeSpan.cpp"
using namespace std;

int main()
{
    CTimeSpan ThoiGian1, ThoiGian2;
    cout << "Nhap vao du lieu thoi gian thu nhat: " << endl;
    cin >> ThoiGian1;
    cout << "Thoi gian thu nhat sau khi nhap vao la: " << ThoiGian1 << endl;
    cout << "Nhap vao du lieu thoi gian thu hai: " << endl;
    cin >> ThoiGian2;
    cout << "Thoi gian thu hai sau khi nhap vao la: " << ThoiGian2 << endl;
    cout << "So sanh hai thoi gian: ";
    cout << "\nThoi gian thu nhat > thoi gian thu hai la: "; (ThoiGian1 > ThoiGian2) ? (cout << "TRUE") : (cout << "FALSE");
    cout << "\nThoi gian thu nhat < thoi gian thu hai la: "; (ThoiGian1 < ThoiGian2) ? (cout << "TRUE") : (cout << "FALSE");
    cout << "\nThoi gian thu nhat >= thoi gian thu hai la: "; (ThoiGian1 >= ThoiGian2) ? (cout << "TRUE") : (cout << "FALSE");
    cout << "\nThoi gian thu nhat <= thoi gian thu hai la: "; (ThoiGian1 <= ThoiGian2) ? (cout << "TRUE") : (cout << "FALSE");
    cout << "\nThoi gian thu nhat == thoi gian thu hai la: "; (ThoiGian1 == ThoiGian2) ? (cout << "TRUE") : (cout << "FALSE");
    cout << "\nThoi gian thu nhat != thoi gian thu hai la: "; (ThoiGian1 != ThoiGian2) ? (cout << "TRUE") : (cout << "FALSE");
    return 0;
}