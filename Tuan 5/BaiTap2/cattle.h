#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class cattle
{
protected:
    int Loai;
public:
    cattle();
    ~cattle();
    virtual void Keu() = 0;
    virtual int Sua() = 0;
    virtual int SinhCon() = 0;
    virtual int getloai() = 0;
};

