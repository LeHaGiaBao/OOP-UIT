#include<iostream>
#include"Diem.h"
#include"TamGiac.h"
#include<cmath>

using namespace std;

TamGiac::TamGiac()
{

}

TamGiac::~TamGiac()
{

}

void TamGiac::Nhap()
{
    int KiemTra;
    do 
    {
        KiemTra = 0;
        cout << "=====================" << endl;
        cout << "Nhap diem A" << endl;
        A.Nhap();
        cout << "=====================" << endl;
        cout << "Nhap diem B" << endl;
        B.Nhap();
        cout << "=====================" << endl;
        cout << "Nhap diem C" << endl;
        C.Nhap();
        if (A.TraVeHoanhDo() == B.TraVeHoanhDo() == C.TraVeHoanhDo()
            || A.TraVeTungDo() == B.TraVeTungDo() == C.TraVeTungDo()
            || (A.TraVeHoanhDo() == B.TraVeHoanhDo() && A.TraVeTungDo() == B.TraVeTungDo())
            || (B.TraVeHoanhDo() == C.TraVeHoanhDo() && B.TraVeTungDo() == C.TraVeTungDo())
            || (A.TraVeHoanhDo() == C.TraVeHoanhDo() && A.TraVeTungDo() == C.TraVeTungDo())
        )
        {
            KiemTra = 1;
            cout << "\n Tam giac vua nhap khong ton tai! Vui long nhap lai. ";
        }
        cout << endl;
    } while (KiemTra);
}

void TamGiac::Xuat()
{
    cout << "Toa do diem A la: "; A.Xuat();
    cout << "\nToa do diem B la: "; B.Xuat();
    cout << "\nToa do diem C la: "; C.Xuat();
}

void TamGiac::CaiDatDiem(Diem X, Diem Y, Diem Z)
{
    A = X;
    B = Y;
    C = Z;
}

void TamGiac::TinhTien()
{
    cout << "====================" << endl;
    cout << "Nhap vecto tinh tien" << endl;
    double X,Y;
    cout << "Nhap hoanh do: ";
    cin >> X;
    cout << "Nhap tung do: ";
    cin >> Y;
    cout << "Diem A sau khi tinh tien theo vecto (" << X << ";" << Y << ") la: ";
    A.TinhTien(X, Y);
    cout << endl;
    cout << "Diem B sau khi tinh tien theo vecto (" << X << ";" << Y << ") la: ";
    B.TinhTien(X, Y);
    cout << endl;
    cout << "Diem C sau khi tinh tien theo vecto (" << X << ";" << Y << ") la: ";
    C.TinhTien(X, Y);
}

void TamGiac::Quay()
{
    cout << "===================================" << endl;
    double GocQuay;
    cout << "Nhap vao goc quay: ";
    cin >> GocQuay;
    cout << "Diem A qua goc quay tam O goc quay " << GocQuay << " la: ";
    A.Quay(GocQuay);
    cout << endl;
    cout << "Diem B qua goc quay tam O goc quay " << GocQuay << " la: ";
    B.Quay(GocQuay);
    cout << endl;
    cout << "Diem C qua goc quay tam O goc quay " << GocQuay << " la: ";
    C.Quay(GocQuay);
}

void TamGiac::PhongTo()
{
    cout << "================================" << endl;
    double Phong;
    cout << "Nhap he so phong: ";
    cin >> Phong;
    A.CaiDatDiem(A.TraVeHoanhDo() * Phong, A.TraVeTungDo() * Phong);
    B.CaiDatDiem(B.TraVeHoanhDo() * Phong, B.TraVeTungDo() * Phong);
    C.CaiDatDiem(C.TraVeHoanhDo() * Phong, C.TraVeTungDo() * Phong);
}

void TamGiac::ThuNho()
{
    cout << "================================" << endl;
    double Thu;
    cout << "Nhap he so thu: ";
    cin >> Thu;
    A.CaiDatDiem(A.TraVeHoanhDo() * (1.0/Thu), A.TraVeTungDo() * (1.0/Thu));
    B.CaiDatDiem(B.TraVeHoanhDo() * (1.0/Thu), B.TraVeTungDo() * (1.0/Thu));
    C.CaiDatDiem(C.TraVeHoanhDo() * (1.0/Thu), C.TraVeTungDo() * (1.0/Thu));
}