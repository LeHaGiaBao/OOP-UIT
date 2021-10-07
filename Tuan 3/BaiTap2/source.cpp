#include<iostream>
#include"Diem.h"
#include"Diem.cpp"
#include"TamGiac.h"
#include"TamGiac.cpp"
using namespace std;

int main()
{
    TamGiac ABC;
    ABC.Nhap();
    cout << "==========================" << endl;
    cout << "Tam giac tao boi 3 diem la" << endl;
    ABC.Xuat();
    cout << endl;
    ABC.TinhTien();
    cout << endl;
    ABC.Quay();
    cout << endl;
    ABC.PhongTo();
    cout << "Toa do 3 dinh sau khi phong to la" << endl;
    ABC.Xuat();
    cout << endl;
    ABC.ThuNho();
    cout << "Toa do 3 dinh sau khi thu nho la" << endl;
    ABC.Xuat();
    return 0;
}
