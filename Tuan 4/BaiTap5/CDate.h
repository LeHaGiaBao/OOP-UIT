#pragma once
#include<iostream>
using namespace std;

class CDate
{
private:
    int Ngay, Thang, Nam;
public:
    CDate(int = 0, int = 0, int = 0);
    ~CDate();
    bool CheckDuLieu(int &, int &, int &);
    CDate operator + (int&);
    CDate operator - (int&);
    long operator - (CDate&);
    CDate operator++(int);
    CDate operator--(int);
    friend istream &operator >> (istream &In, CDate &Dulieu);
    friend ostream &operator << (ostream &Out, CDate &DuLieu);
};