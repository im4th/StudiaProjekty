#include "Tosoba2.h"
#include <string>
#include <iostream>
#include "Tdata.h"
#include "Tosoba2.h"

using namespace std;

Tosoba2::Tosoba2()
{
    this -> imie = "Imie";
    this -> nazwisko = "Nazwisko";
    this -> dataUr = dataUr;

}

Tosoba2::Tosoba2(std::string nazwisko, std::string imie, Tdata d)
{
    motto="costam";
}

Tosoba2::~Tosoba2()
{
    //dtor
}

void Tosoba2::wczytaj()
{
    cin >> imie >> nazwisko;
    getline(cin,motto);
    dataUr.wczytaj();
}

void Tosoba2::wyswietl()
{
    cout << imie << " " << nazwisko<< " " << motto<< " " << endl;
    dataUr.wyswietl();
}

string Tosoba2::GetNazwiskoImie()
{
    return imie + " " + nazwisko;
}

int Tosoba2::roznicaWieku(Tosoba2 &osoba)
{
    return abs(dataUr.getR() - osoba.dataUr.getR());
}

Tosoba2 Tosoba2::dluzszeNazwisko(Tosoba2 &osoba)
{
    if(osoba.nazwisko.size()> nazwisko.size())
        return osoba;
    else
        return *this;
}
