#include "Tkolo.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

Tkolo::Tkolo(string naz, float pro):Tfigura(naz)
{
    promien = pro;
}

Tkolo::~Tkolo()
{
    //dtor
}

float Tkolo::pole()
{
    return M_PI*pow(promien, 2);
}

float Tkolo::obwod()
{
    return 2*M_PI*promien;
}

void Tkolo::rysuj()
{
    cout << "Rysuje: " << nazwa << endl;
}
