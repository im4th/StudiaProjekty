#include "Tkwadrat.h"
#include <string>
#include <iostream>
#include <cmath>

using namespace std;

Tkwadrat::Tkwadrat(string naz, float bk):Tprostokat(naz)
{
    bok = bk;
}

/*Tkwadrat::Tkwadrat()
{
    nazwa = "Podstawowy kwadrat";
    bok = 10;
}*/

Tkwadrat::~Tkwadrat()
{
    //dtor
}

float Tkwadrat::pole()
{
    return pow(bok, 2);
}

float Tkwadrat::obwod()
{
    return 4*bok;
}

/*void Tkwadrat::rysuj()
{
    cout << "Rysuje: " << nazwa << endl;
}*/

