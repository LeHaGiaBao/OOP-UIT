#pragma once
#include<iostream>
using namespace std;

class CTime
{
private:
    int Gio, Phut, Giay;
public:
    CTime(int = 0, int = 0, int = 0);
    ~CTime();
    CTime operator+(int&);
    CTime operator-(int&);
    CTime operator-(CTime&);
    CTime operator++(int);
    CTime operator--(int);
    friend istream &operator >> (istream &In, CTime &DuLieu);
    friend ostream &operator << (ostream &Out, CTime &DuLieu);
};