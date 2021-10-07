#pragma once
#include "cattle.h"

class cow: public cattle
{
public:
    cow();
    ~cow();
    void Keu() override;
    int Sua() override;
    int SinhCon() override;
    int getloai() override;
};
