#include<iostream>
#include"CDate.h"
#include<cmath>
using namespace std;

CDate::CDate(int Day, int Month, int Year)
{
    Ngay = Day;
    Thang = Month;
    Nam = Year;
}

CDate::~CDate()
{

}

bool CDate::CheckDuLieu(int &Day, int &Month, int &Year)
{
    switch (Month)
    {
        case 1:case 3:case 5: case 7: case 8: case 10: case 12:
        {
            if (Day <= 0 || Day > 31)
            {
                return false;
            }
            break;
        }
        case 4: case 6: case 9: case 11:
        {
            if (Day <= 0 || Day > 30)
            {
                return false;
            }
            break;
        }
        case 2:
        {
            if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
            {
                if (Day <= 0 || Day > 29)
                {
                    return false;
                }
            }
            else if (Day <= 0 || Day > 28)
            {
                return false;
            }
            break;
        }
        default:
        {
            return false;
            break;
        }
    }
    return true;
}

istream &operator >> (istream &In, CDate &DuLieu)
{
    bool KiemTra;
    do
    {
        KiemTra = false;
        cout << "Nhap du lieu ngay: ";
        In >> DuLieu.Ngay;
        cout << "Nhap du lieu thang: ";
        In >> DuLieu.Thang;
        cout << "Nhap du lieu nam: ";
        In >> DuLieu.Nam;
        KiemTra = DuLieu.CheckDuLieu(DuLieu.Ngay, DuLieu.Thang, DuLieu.Nam);
        if (KiemTra == false)
        {
            cout << "Du lieu nhap vao khong hop le. Vui long nhap lai" << endl;
        }
    } while (!KiemTra);
    return In;
}

ostream &operator << (ostream &Out, CDate &DuLieu)
{
    Out << "ngay " << DuLieu.Ngay << " thang " << DuLieu.Thang << " nam " << DuLieu.Nam;
    return Out;
}

CDate CDate::operator+(int &DuLieu)
{
    CDate Date;
    Date.Ngay = this->Ngay;
    Date.Thang = this->Thang;
    Date.Nam = this->Nam;
    int Temp = Date.Ngay + DuLieu;
    do
    {
        switch (Date.Thang)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            {
                if (Temp > 31)
                {
                    Date.Thang++;
                    if (Date.Thang == 13)
                    {
                        Date.Thang = 1;
                        Date.Nam++;
                    }
                    Temp -= 31;
                }
                else
                {
                    Date.Ngay = Temp;
                    Temp = 0;
                }
                break;
            }
            case 4: case 6: case 9: case 11:
            {
                if (Temp > 30)
                {
                    Date.Thang++;
                    Temp -= 30;
                }
                else 
                {
                    Date.Ngay = Temp;
                    Temp = 0;
                }
                break;
            }
            case 2:
            {
                if ((Date.Nam % 4 == 0 && Date.Nam % 100 != 0) || (Date.Nam % 400 == 0))
                {
                    if (Temp > 29)
                    {
                        Date.Thang++;
                        Temp -= 29;
                    }
                    else
                    {
                        Date.Ngay = Temp;
                        Temp = 0;
                    }
                }
                else
                {
                    if (Temp > 28)
                    {
                        Date.Thang++;
                        Temp -= 28;
                    }
                    else
                    {
                        Date.Ngay = Temp;
                        Temp = 0;
                    }
                }
                break;
            }
        }
    } while (Temp > 0);
    return Date;
}   

CDate CDate::operator-(int &DuLieu)
{
    CDate Date;
    Date.Ngay = this->Ngay;
    Date.Thang = this->Thang;
    Date.Nam = this->Nam;
    int Temp = DuLieu;
    do
    {
        if (Date.Ngay > Temp)
        {
            Date.Ngay -= Temp;
            Temp = 0;
        }
        else 
        {
            Temp -= Date.Ngay;
            Date.Thang--;
            switch (Date.Thang)
            {
                case 1: case 3: case 5: case 7: case 8: case 10:
                {
                    Date.Ngay = 31;
                    break;
                }
                case 4: case 6: case 9: case 11:
                {
                    Date.Ngay = 30;
                    break;
                }
                case 2:
                {
                    if ((Date.Nam % 4 == 0 && Date.Nam % 100 != 0) || (Date.Nam % 400 == 0))
                    {
                        Date.Ngay = 29;
                    }
                    else
                    {
                        Date.Ngay = 28;
                    }
                    break;
                }
                case 0:
                {
                    Date.Thang = 12;
                    Date.Nam--;
                    Date.Ngay = 31;
                    break;
                }
            }
        }
    } while (Temp > 0);
    return Date;
}

long CDate::operator-(CDate &DuLieu)
{
    CDate Date;
    Date.Ngay = this->Ngay;
    Date.Thang = this->Thang;
    Date.Nam = this->Nam;
    long Temp1 = Date.Ngay;
    do
    {
        switch (Date.Thang)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            {
                Temp1 += 31;
                Date.Thang--;
                if (Date.Thang == 0)
                {
                    Date.Nam--;
                    Date.Thang = 12;
                }
                break;
            }
            case 4: case 6: case 9: case 11:
            {
                Temp1 += 30;
                Date.Thang--;
                break;
            }
            case 2:
            {
                if ((Date.Nam % 4 == 0 && Date.Nam % 100 != 0) || (Date.Nam % 400 == 0))
                {
                    Temp1 += 29;
                    Date.Thang--;
                }
                else
                {
                    Temp1 += 28;
                    Date.Thang--;
                }
                break;
            }
        }
    } while (Date.Nam > 0);
    Date.Ngay = DuLieu.Ngay;
    Date.Thang = DuLieu.Thang;
    Date.Nam = DuLieu.Nam;
    long Temp2 = Date.Ngay;
    do
    {
        switch (Date.Thang)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            {
                Temp2 += 31;
                Date.Thang--;
                if (Date.Thang == 0)
                {
                    Date.Nam--;
                    Date.Thang = 12;
                }
                break;
            }
            case 4: case 6: case 9: case 11:
            {
                Temp2 += 30;
                Date.Thang--;
                break;
            }
            case 2:
            {
                if ((Date.Nam % 4 == 0 && Date.Nam % 100 != 0) || (Date.Nam % 400 == 0))
                {
                    Temp2 += 29;
                    Date.Thang--;
                }
                else
                {
                    Temp2 += 28;
                    Date.Thang--;
                }
                break;
            }
        }
    } while (Date.Nam > 0);
    return abs(Temp1 - Temp2);
}

CDate CDate::operator++(int DuLieu)
{
    CDate Temp;
    Temp.Ngay = this->Ngay;
    Temp.Thang = this->Thang;
    Temp.Nam = this->Nam;
    Temp.Ngay++;
    switch (Temp.Thang)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        {
            if (Temp.Ngay > 31)
            {
                Temp.Ngay = 1;
                Temp.Thang++;
                if (Temp.Thang > 12)
                {
                    Temp.Nam++;
                    Temp.Thang = 1;
                }
            }
            break;
        }
        case 4: case 6: case 9: case 11:
        {
            if (Temp.Ngay > 30)
            {
                Temp.Ngay = 1;
                Temp.Thang++;
            }
            break;
        }
        case 2:
        {
            if ((Temp.Nam % 4 == 0 && Temp.Nam % 100 != 100) || (Temp.Nam % 400 == 0))
            {
                if (Temp.Ngay > 29)
                {
                    Temp.Ngay = 1;
                    Temp.Thang++;
                }
            }
            else
            {
                if (Temp.Ngay > 28)
                {
                    Temp.Ngay = 1;
                    Temp.Thang++;
                }
            }
            break;
        }
    }
    return Temp;
}

CDate CDate::operator--(int DuLieu)
{
    CDate Temp;
    Temp.Ngay = this->Ngay;
    Temp.Thang = this->Thang;
    Temp.Nam = this->Nam;
    Temp.Ngay--;
    if (Ngay == 0)
    {
        Temp.Thang--;
        switch (Temp.Thang)
        {
            case 1: case 3: case 5: case 7: case 8: case 10:
            {
                Temp.Ngay = 31;
                break;
            }
            case 0:
            {
                Temp.Ngay = 31;
                Temp.Thang = 12;
                Temp.Nam--;
                break;
            }
            case 4: case 6: case 9: case 11:
            {
                Temp.Ngay = 30;
                break;
            }
            case 2:
            {
                if ((Temp.Nam % 4 == 0 && Temp.Nam % 100 != 0) || (Temp.Nam % 400 == 0))
                {
                    Temp.Ngay = 29;
                }
                else
                {
                    Temp.Ngay = 28;
                }
                break;
            }
        }
    }
    return Temp;
}