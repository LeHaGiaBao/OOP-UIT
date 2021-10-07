#include<iostream>
#include<cmath>
#include"Diem.h"
#include"Diem.cpp"
using namespace std;

int main()
{
    Diem ToaDo;
    ToaDo.Nhap();
    ToaDo.Xuat();
    cout << endl;
    ToaDo.TinhTien();
    cout << endl;
    ToaDo.Quay();
    return 0;
}