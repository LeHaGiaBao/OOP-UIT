#include<iostream>
using namespace std;

struct NgayThangNam
{
    int Ngay, Thang, Nam;
};

void NhapDuLieu(NgayThangNam &DuLieu)
{
    cout << "Nhap ngay: ";
	cin >> DuLieu.Ngay;
    cout << "Nhap thang: ";
    cin >> DuLieu.Thang;
    cout << "Nhap nam: ";
    cin >> DuLieu.Nam;
}

int TimNamNhuan(int Year)
{
	if ((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)) return 1;
	return 0;
}

void XuatDuLieu(NgayThangNam DuLieu)
{
    if (DuLieu.Thang == 12)
    {
        if (DuLieu.Ngay == 31)
        {
            cout << "Ngay ke tiep la ngay 1/1/" << DuLieu.Nam + 1;
        }
        else
        {
            cout << "Ngay ke tiep la ngay " << DuLieu.Ngay + 1 << "/12/" << DuLieu.Nam;
        }
    }
	else if (DuLieu.Thang == 1 || DuLieu.Thang == 3 || DuLieu.Thang == 5 || DuLieu.Thang == 7 || DuLieu.Thang == 8 || DuLieu.Thang == 10)
	{
		if (DuLieu.Ngay == 31)
		{
			cout << "Ngay ke tiep la ngay 1/" << DuLieu.Thang + 1 << "/" << DuLieu.Nam;
		}
		else
		{
			cout << "Ngay ke tiep la ngay " << DuLieu.Ngay + 1 << "/" << DuLieu.Thang<< "/" << DuLieu.Nam;
		}
	}
	else if (DuLieu.Thang == 4 || DuLieu.Thang == 6 || DuLieu.Thang == 9 || DuLieu.Thang == 11)
	{
		if (DuLieu.Ngay == 30)
		{
			cout << "Ngay ke tiep la ngay 1/" << DuLieu.Thang + 1 << "/" << DuLieu.Nam;
		}
		else
		{
			cout << "Ngay ke tiep la ngay " << DuLieu.Ngay + 1 << "/" << DuLieu.Thang<< "/" << DuLieu.Nam;
		}
	}
	else if (DuLieu.Thang == 2)
	{
		if (TimNamNhuan(DuLieu.Nam) == 1)
		{
			if (DuLieu.Ngay == 29)
			{
				cout << "Ngay ke tiep la ngay 1/" << DuLieu.Thang + 1 << "/" << DuLieu.Nam;
			}
			else
			{
				cout << "Ngay ke tiep la ngay " << DuLieu.Ngay + 1 << "/" << DuLieu.Thang<< "/" << DuLieu.Nam;
			}
		}
		else
		{
			if (DuLieu.Ngay == 28)
			{
				cout << "Ngay ke tiep la ngay 1/" << DuLieu.Thang + 1 << "/" << DuLieu.Nam;
			}
			else
			{
				cout << "Ngay ke tiep la ngay " << DuLieu.Ngay + 1 << "/" << DuLieu.Thang<< "/" << DuLieu.Nam;
			}
		}
	}
}

int main()
{
    NgayThangNam DuLieu;
    cout << "Nhap ngay thang nam hop le" << endl;
    NhapDuLieu(DuLieu);
    XuatDuLieu(DuLieu);
    return 0;
}