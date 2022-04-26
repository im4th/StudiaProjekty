#include "Tdata.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

Tdata::Tdata()
{
    d=25;
    m=12;
    r=2001;
}

void Tdata::wczytaj()
{
    cin >> d;
    cin >> m;
    cin >> r;
}

void Tdata::wyswietl()
{
    cout << "Data to " << d << "." << m << "." << r << endl;
}

int Tdata::getR()
{
    return r;
}

Tdata::~Tdata()
{
    //dtor
}
