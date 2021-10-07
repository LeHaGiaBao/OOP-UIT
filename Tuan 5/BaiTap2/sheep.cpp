#include "sheep.h"

sheep::sheep()
{
    Loai = 2;
}

sheep::~sheep()
{
}

void sheep::Keu()
{
    cout << "Be be" << endl;
}

int sheep::Sua()
{
    return rand() % 5;
}

int sheep::SinhCon()
{
    return 1 + rand() % 8;
}

int sheep::getloai()
{
    return Loai;
}
