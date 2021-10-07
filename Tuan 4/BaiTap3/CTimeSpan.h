#pragma once
#include<iostream>
using namespace std;

class CTimeSpan
{
private:
    int Gio;
    int Phut;
    int Giay;
public:
    CTimeSpan(int = 0, int = 0, int = 0);
    ~CTimeSpan();
    long TongSoThoiGian();
    bool operator > (CTimeSpan &);
    bool operator >= (CTimeSpan &);
    bool operator < (CTimeSpan &);
    bool operator <= (CTimeSpan &);
    bool operator == (CTimeSpan &);
    bool operator != (CTimeSpan &);
    friend istream &operator >> (istream &In, CTimeSpan &DuLieu);
    friend ostream &operator << (ostream &Out, CTimeSpan &DuLieu);
};