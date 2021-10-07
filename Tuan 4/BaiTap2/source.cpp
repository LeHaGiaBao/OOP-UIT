#include<iostream>
#include<cmath>
#include"PhanSo.h"
#include"PhanSo.cpp"
using namespace std;

int main()
{
    PhanSo SoThuNhat, SoThuHai;
    cout << "Nhap phan so thu nhat: " << endl;
    cin >> SoThuNhat;
    cout << "Phan so thu nhat co dang: " << SoThuNhat << endl;
    cout << "Nhap phan so thu hai: " << endl;
    cin >> SoThuHai;
    cout << "Phan so thu hai co dang: " << SoThuHai << endl;
    cout << "Cac phep tinh thuc hien voi hai phan so la: " << endl;
    PhanSo PhepCong = SoThuNhat + SoThuHai;
    PhepCong.ToiGianPhanSo(PhepCong);
    cout << SoThuNhat << " + " << SoThuHai << " = " << PhepCong << endl;
    PhanSo PhepTru = SoThuNhat - SoThuHai;
    PhepTru.ToiGianPhanSo(PhepTru);
    cout << SoThuNhat << " - " << SoThuHai << " = " << PhepTru << endl;
    PhanSo PhepNhan = SoThuNhat * SoThuHai;
    PhepNhan.ToiGianPhanSo(PhepNhan);
    cout << SoThuNhat << " * " << SoThuHai << " = " << PhepNhan << endl;
    PhanSo PhepChia = SoThuNhat / SoThuHai;
    PhepChia.ToiGianPhanSo(PhepChia);
    cout << SoThuNhat << " / " << SoThuHai << " = " << PhepChia << endl;
    cout << "So sanh hai phan so: ";
	cout << "\nSo thu nhat == so thu hai: "; (SoThuNhat == SoThuHai) ? (cout << "TRUE") : (cout << "FALSE");
	cout << "\nSo thu nhat != so thu hai: "; (SoThuNhat != SoThuHai) ? (cout << "TRUE") : (cout << "FALSE");
    return 0;
}