#include "Tklient.h"
#include <string>
#include <iostream>

using namespace std;

Tklient::Tklient()
{
    imie = "john";
    nazwisko = "doe";
}

Tklient::Tklient(string imie, string nazwisko)
{
    imie = imie;
    nazwisko = nazwisko;
}

Tklient::~Tklient()
{
    //dtor
}

void Tklient::wczytaj()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
}

void Tklient::wyswietl()
{
    cout << "Imie i nazwisko: " << imie << " " << nazwisko;
}
