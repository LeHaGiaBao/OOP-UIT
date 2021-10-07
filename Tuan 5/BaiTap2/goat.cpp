#include "goat.h"

goat::goat()
{
    Loai = 3;
}

goat::~goat()
{
}

void goat::Keu()
{
    cout << "Hee hee" << endl;
}

int goat::Sua()
{
    return rand() % 10;
}

int goat::SinhCon()
{
    return 1 + rand() % 8;
}

int goat::getloai()
{
    return Loai;
}
