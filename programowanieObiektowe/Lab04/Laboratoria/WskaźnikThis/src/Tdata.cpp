#include "Tdata.h"
#include <iostream>

using namespace std;

Tdata::Tdata()
{
    d = 21;
    m = 11;
    r = 2001;
}

Tdata::~Tdata()
{
    //dtor
}

void Tdata::wczytaj()
{
    cout << "Podaj dzien miesiac rok";
    cin >> d >> m >> r;
}

void Tdata::wyswietl()
{
    cout << d << "." << m << "." << r << endl;
}
int Tdata::getR()
{
    return r;
}
