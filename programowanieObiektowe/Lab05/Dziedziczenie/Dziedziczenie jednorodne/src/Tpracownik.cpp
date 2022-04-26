#include "Tpracownik.h"
#include <iostream>

using namespace std;

Tpracownik::Tpracownik(string imi, string nzwi, string nazwaFirmy):Tosoba(imi, nzwi)
{
    nazwaFirmy = nazwaFirmy;
    cout<< "Dziala konstruktor Tpracownik" << endl;
}

Tpracownik::~Tpracownik()
{
    cout<< "Dziala destruktor Tpracownik" << endl;
}

void Tpracownik::wczytaj()
{
    Tosoba::wczytaj();
    cout << "Podaj nazwe Firmy: ";
    cin >> nazwaFirmy;
}

void Tpracownik::wyswietl()
{
    Tosoba::wyswietl();
    cout <<"Firma: " << nazwaFirmy << endl;
}
