#include<iostream>
#include<cmath>
using namespace std;

struct ToaDo
{
    double HoanhDo;
    double TungDo;
};

void NhapToaDo(ToaDo &X, int i)
{
    cout << "Nhap lan luot toa do X va Y cua toa do thu " << i << ": ";
    cin >> X.HoanhDo >> X.TungDo;
}

void XuatToaDo(ToaDo X, ToaDo Y)
{
    cout << "2 diem co khoang cach lon nhat la: " << endl;
    cout << "(" << X.HoanhDo << ";" << X.TungDo << ")" << endl;
    cout << "(" << Y.HoanhDo << ";" << Y.TungDo << ")";
}

double KhoangCach(ToaDo X, ToaDo Y)
{
    return sqrt(pow((X.HoanhDo - Y.HoanhDo), 2) + pow((X.TungDo - Y.TungDo), 2));
}

int main()
{
    int SoPhanTu;
    cout << "Nhap so diem n: ";
    cin >> SoPhanTu;
    ToaDo *Mang = new ToaDo[SoPhanTu];
    for (int i = 0; i < SoPhanTu; i++)
    {
        NhapToaDo(Mang[i], i);
    }
    int DiemThuNhat = 0;
    int DiemThuHai = 1;
    double Max = KhoangCach(Mang[0], Mang[1]);
    for (int i = 0; i < SoPhanTu; i++)
    {
        for (int j = i+1; j < SoPhanTu; j++)
        {
            if (Max < KhoangCach(Mang[i], Mang[j]))
            {
                Max = KhoangCach(Mang[i], Mang[j]);
                DiemThuNhat = i;
                DiemThuHai = j;
            }
        }
    }
    XuatToaDo(Mang[DiemThuNhat], Mang[DiemThuHai]);
    return 0;
}