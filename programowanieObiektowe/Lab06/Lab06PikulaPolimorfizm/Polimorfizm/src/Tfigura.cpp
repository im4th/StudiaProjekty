#include "Tfigura.h"
#include <string>
#include <iostream>

using namespace std;

Tfigura::Tfigura(string naz)
{
    nazwa = naz;
}

Tfigura::~Tfigura()
{
    //dtor
}

string Tfigura::info()
{
    return nazwa;
}

void Tfigura::rysuj()
{
    cout << "Rysuje: " << nazwa << endl;
}

float Tfigura::obwod()
{
    return 0;
}

float Tfigura::pole()
{
    return 0;
}

void Tfigura::wyswietl()
{
    cout << "Figura: "<< info() << endl << "Pole: "<< pole() <<" m^2" << endl << "Obwod: " << obwod() << " m" << endl;
    rysuj();
    cout << endl;
}
