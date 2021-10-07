#include "cow.h"

cow::cow()
{
    Loai = 1;
}

cow::~cow()
{
}

void cow::Keu()
{
    cout << "Um bo" << endl;
}

int cow::Sua()
{
    return rand() % 20;
}

int cow::SinhCon()
{
    return 1 + rand() % 8;
}

int cow::getloai()
{
    return Loai;
}
