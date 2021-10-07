#include"cattle.h"
#include"cattle.cpp"
#include"cow.h"
#include"cow.cpp"
#include"goat.h"
#include"goat.cpp"
#include"sheep.h"
#include"sheep.cpp"

int main()
{
    int a, b, c;
    cout << "Nhap so luong bo: ";
    cin >> a;
    cout << "Nhap so luong cuu: ";
    cin >> b;
    cout << "Nhap so luong de: ";
    cin >> c;
    int n = a + b + c;
    vector<cattle*> list(n);
    for (int i = 0; i < a; i++)
        list[i] = new cow;
    for (int i = a; i < b+a; i++)
        list[i] = new sheep;
    for (int i = b; i < n; i++)
        list[i] = new goat;
    for (int i = 0; i < n; i++)
        list[i]->Keu();
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i = 0; i < n; i++)
    {
        if (list[i]->getloai() == 1)sum1 += list[i]->SinhCon();
        else if (list[i]->getloai() == 2)sum2 += list[i]->SinhCon();
        else if (list[i]->getloai() == 3)sum3 += list[i]->SinhCon();
    }
    cout << "So luong gia suc trong nong trai sau khi sinh con la: " << endl;
    cout << "Bo: " << a + sum1 << endl;
    cout << "De: " << b + sum2 << endl;
    cout << "Cuu: " << c + sum3 << endl;
    int sua = 0;
    for (int i = 0; i < n; i++)
        sua += list[i]->Sua();
    cout << "Tong so lit sua: " << sua << endl;
}