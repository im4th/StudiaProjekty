#include "Tprostokat.h"
#include <string>
#include <iostream>

using namespace std;


Tprostokat::Tprostokat(string naz, float bkA, float bkB)
{
    nazwa = naz;
    bokA = bkA;
    bokB = bkB;
}

Tprostokat::~Tprostokat()
{
    //dtor
}

float Tprostokat::obwod()
{
    return 2*bokA + 2*bokB;
}

float Tprostokat::pole()
{
    return bokA*bokB;
}
void Tprostokat::rysuj()
{
    cout << "Rysuje: " << nazwa << endl;
}
