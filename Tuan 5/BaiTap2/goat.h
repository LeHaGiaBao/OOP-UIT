#pragma once
#include "cattle.h"

class goat: public cattle
{
public:
    goat();
    ~goat();
    void Keu() override;
    int Sua() override;
    int SinhCon() override;
    int getloai() override;
};