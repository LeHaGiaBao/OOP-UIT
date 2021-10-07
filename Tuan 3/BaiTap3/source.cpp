#include<iostream>
#include"Diem.h"
#include"Diem.cpp"
#include"DaGiac.h"
#include"DaGiac.cpp"
using namespace std;

int main()
{
    DaGiac A;
    A.Nhap();
    A.Xuat();
    A.TinhTien();
    A.Quay();
    A.PhongTo();
    A.ThuNho();
    return 0;
}