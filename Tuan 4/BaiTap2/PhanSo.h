#pragma once
#include<iostream>
using namespace std;

class PhanSo
{
private:
    double TuSo, MauSo;
public:
    PhanSo(double = 1, double = 1);
    ~PhanSo();
    void ToiGianPhanSo (PhanSo&);
    PhanSo operator + (PhanSo&);
    PhanSo operator - (PhanSo&);
    PhanSo operator * (PhanSo&);
    PhanSo operator / (PhanSo&);
    bool operator == (PhanSo&);
    bool operator != (PhanSo&);
    friend istream &operator >> (istream &In, PhanSo &DuLieu);
    friend ostream &operator << (ostream &Out, PhanSo &DuLieu);
};