#pragma once
#include "cattle.h"

class sheep: public cattle
{
public:
    sheep();
    ~sheep();
    void Keu() override;
    int Sua() override;
    int SinhCon() override;
    int getloai() override;
};