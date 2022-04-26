#include "Ttime.h"

Ttime::Ttime(int godziny, int minuty)
{
    this -> minuty = minuty;
    this -> godziny = godziny;
}

Ttime::~Ttime()
{
    //dtor
}

Ttime Ttime::operator+(Ttime a)
{
    Ttime suma(0,0);
    suma.godziny = this -> godziny + a.godziny;
    suma.minuty = this ->  minuty + a.minuty;
    if(suma.minuty>59)
    {
        suma.godziny = suma.godziny+1;
        suma.minuty = suma.minuty-60;
    }
    return suma;
}

Ttime Ttime::operator-(Ttime a)
{
    Ttime roznica(0,0);
    if(godziny < a.godziny)
    {
        roznica.godziny = a.godziny - this -> godziny;
        roznica.minuty = a.minuty - this -> minuty;
    }
    else
    {
        roznica.godziny = this -> godziny - a.godziny;
        roznica.minuty = this ->  minuty - a.minuty;
    }
    if(roznica.minuty<0)
    {
        roznica.godziny=roznica.godziny-1;
        roznica.minuty=roznica.minuty+60;
    }
    return roznica;
}
