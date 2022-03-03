#include "Flyttekasse.h"

Flyttekasse::Flyttekasse(int b, int h, int d)
{
    bredde_ = (0 <= b && b <= 70 ? b : 50);
    højde_ = (0 <= h && h <= 40 ? h : 35);
    dybde_ = (0 <= d && d <= 40 ? d : 35);
}

double Flyttekasse::beregnVolumen() const
{
    // returnerer flyttekassens volumen i Liter
    return (bredde_ * højde_ * dybde_) / 1000.0;
}
