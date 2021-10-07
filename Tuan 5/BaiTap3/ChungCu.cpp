#include"ChungCu.h"

ChungCu::ChungCu()
{
    TangMay = 1;
}

ChungCu::~ChungCu()
{

}

void ChungCu::Nhap()
{
    cout << "Nhap thong tin cua can ho chung cu" << endl;
    NhaThue::Nhap();
    cout << "Nhap vao can ho o tang: ";
    cin >> TangMay;
}

void ChungCu::Xuat()
{
    cout << "Thong tin cua chung cu" << endl;
    NhaThue::Xuat();
    cout << "Can ho o tang: " << TangMay << endl;
}