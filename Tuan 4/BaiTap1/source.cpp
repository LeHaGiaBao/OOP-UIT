#include<iostream>
#include<cmath>
#include"SoPhuc.h"
#include"SoPhuc.cpp"
using namespace std;

int main()
{
	SoPhuc SoThuNhat, SoThuHai;
	cout << "Nhap so thu nhat: " << endl;
	cin >> SoThuNhat;
	cout << "So phuc thu nhat co dang: " << SoThuNhat << endl;
	cout << "Nhap so thu hai: " << endl;
	cin >> SoThuHai;
	cout << "So phuc thu hai co dang: " << SoThuHai << endl;
	cout << "Cac phep tinh thuc hien voi hai so la: " << endl;
	SoPhuc PhepCong = SoThuNhat + SoThuHai;
	cout << SoThuNhat << " + " << SoThuHai << " = " << PhepCong << endl;
	SoPhuc PhepTru = SoThuNhat - SoThuHai;
	cout << SoThuNhat << " - " << SoThuHai << " = " << PhepTru << endl;
	SoPhuc PhepNhan = SoThuNhat * SoThuHai;
	cout << SoThuNhat << " * " << SoThuHai << " = " << PhepNhan << endl;
	SoPhuc PhepChia = SoThuNhat / SoThuHai;
	cout << SoThuNhat << "/ " << SoThuHai << " = " << PhepChia << endl;
	cout << "So sanh hai so: ";
	cout << "\nSo thu nhat == so thu hai: "; (SoThuNhat == SoThuHai) ? (cout << "TRUE") : (cout << "FALSE");
	cout << "\nSo thu nhat != so thu hai: "; (SoThuNhat != SoThuHai) ? (cout << "TRUE") : (cout << "FALSE");
	return 0;
}