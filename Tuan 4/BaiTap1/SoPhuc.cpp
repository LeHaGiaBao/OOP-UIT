#include<iostream>
#include<cmath>
#include"SoPhuc.h"
using namespace std;

SoPhuc::SoPhuc(double Thuc, double Ao)
{
	PhanThuc = Thuc;
	PhanAo = Ao;
}

SoPhuc::~SoPhuc()
{

}

istream &operator >>(istream &In, SoPhuc &DuLieu)
{
	cout << "Nhap vao phan thuc: ";
	In >> DuLieu.PhanThuc;
	cout << "Nhap vao phan ao: ";
	In >> DuLieu.PhanAo;
	return In;
}

ostream &operator << (ostream &Out, SoPhuc &DuLieu)
{
	if (DuLieu.PhanThuc == 0 && DuLieu.PhanAo == 0)
	{
		Out << "0";
	}
	else if (DuLieu.PhanThuc != 0 && DuLieu.PhanAo == 0)
	{
		Out << DuLieu.PhanThuc;
	}
	else if (DuLieu.PhanThuc == 0 && DuLieu.PhanAo != 0)
	{
		Out << DuLieu.PhanAo << "i";
	}
	else
	{
		if (DuLieu.PhanAo > 0)
		{
			Out << DuLieu.PhanThuc << " + " << DuLieu.PhanAo << "i";
		} 
		else
		{
			Out << DuLieu.PhanThuc << " - " << abs(DuLieu.PhanAo) << "i";
		}
	}
	return Out;
}

SoPhuc SoPhuc::operator+(SoPhuc &DuLieu)
{
	SoPhuc Temp;
	Temp.PhanThuc = this->PhanThuc + DuLieu.PhanThuc;
	Temp.PhanAo = this->PhanAo + DuLieu.PhanAo;
	return Temp;
}

SoPhuc SoPhuc::operator-(SoPhuc &DuLieu)
{
	SoPhuc Temp;
	Temp.PhanThuc = this->PhanThuc - DuLieu.PhanThuc;
	Temp.PhanAo = this->PhanAo - DuLieu.PhanAo;
	return Temp;
}

SoPhuc SoPhuc::operator*(SoPhuc& DuLieu)
{
	SoPhuc Temp;
	Temp.PhanThuc = (this->PhanThuc * DuLieu.PhanThuc) - (this->PhanAo * DuLieu.PhanAo);
	Temp.PhanAo = (this->PhanThuc * DuLieu.PhanAo) + (this->PhanAo * DuLieu.PhanThuc);
	return Temp;
}

SoPhuc SoPhuc::operator/(SoPhuc& DuLieu)
{
	SoPhuc Temp;
	Temp.PhanThuc = ((this->PhanThuc * DuLieu.PhanThuc) + (this->PhanAo * DuLieu.PhanAo)) / (pow(DuLieu.PhanThuc, 2) + pow(DuLieu.PhanAo, 2));
	Temp.PhanAo = ((this->PhanAo * DuLieu.PhanThuc) + (this->PhanThuc * DuLieu.PhanAo)) / (pow(DuLieu.PhanThuc, 2) + pow(DuLieu.PhanAo, 2));
	return Temp;
}

bool SoPhuc::operator==(SoPhuc& DuLieu)
{
	if (this->PhanThuc == DuLieu.PhanThuc)
		return true;
	return false;
}

bool SoPhuc::operator!=(SoPhuc& DuLieu)
{
	if (this->PhanThuc != DuLieu.PhanThuc)
		return true;
	return false;
}