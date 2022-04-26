#include "Tosoba.h"
#include <string>
#include <iostream>

using namespace std;

Tosoba::Tosoba(string im, string naz)
{
    cout<< "Dziala konstruktor Tosoba" << endl;
    imie = im;
    nazwisko = naz;
}

Tosoba::~Tosoba()
{
    cout<< "Dziala destruktor Tosoba" << endl;
}

void Tosoba::wczytaj()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
}

void Tosoba::wyswietl()
{
cout << "Imie: " << imie << endl << "Nazwisko: " << nazwisko << endl;
}
