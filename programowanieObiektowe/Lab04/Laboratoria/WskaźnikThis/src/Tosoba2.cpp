#include "Tosoba2.h"
#include <string>

Tosoba2::Tosoba2()
{
this -> imie = "Mateusz";
this -> nazwisko = "Kowalski";
Tdata data(1,1,2001);
this -> dataUr = data;
this -> motto = "100%";
}

Tosoba2::Tosoba2(string nazwisko, string imie, Tdata dataUr)
{
    this -> imie = imie;
    this -> nazwisko = nazwisko;
    this -> dataUr = dataUr;
    this -> motto = "100%";
}
Tosoba2::~Tosoba2()
{
    //dtor
}

void Tosoba2::wczytaj()
{
    cout << "Podaj imie :";
    cin >> imie;
    cout << "Podaj nazwisko :";
    cin >> nazwisko;
    dataUr.wczytaj();
    //cout << "Podaj motto";
    //getline(cin, motto);
}

void Tosoba2::wyswietl()
{
    cout << imie << " " << nazwisko << endl;
    dataUr.wyswietl();
    cout << motto << endl;
}

string Tosoba2::GetNazwiskoImie()
{
    return imie+" "+nazwisko;
}

int Tosoba2::roznicaWieku(Tosoba2 &osoba)
{
    return dataUr.getR() - osoba.dataUr.getR();
}
Tosoba2 Tosoba2::dluzszeNazwisko(Tosoba2 &osoba)
{
    if(osoba.nazwisko.length() > nazwisko.length())
    {
        return  osoba;
    }
    else
        return *this;
}
