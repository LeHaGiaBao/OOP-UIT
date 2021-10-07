#pragma once
#include<iostream>
using namespace std;

class SoPhuc
{
private:
	double PhanThuc, PhanAo;
public:
	SoPhuc(double = 0, double = 0);
	~SoPhuc();
	SoPhuc operator + (SoPhuc&);
	SoPhuc operator - (SoPhuc&);
	SoPhuc operator * (SoPhuc&);
	SoPhuc operator / (SoPhuc&);
	bool operator == (SoPhuc&);
	bool operator != (SoPhuc&);
	friend istream &operator >>(istream &In, SoPhuc &DuLieu);
	friend ostream &operator <<(ostream &Out, SoPhuc &DuLieu);
};