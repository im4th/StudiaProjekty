#include "Tdomownik.h"
#include <string>
#include <iostream>

using namespace std;

Tdomownik::Tdomownik(string nazwa, string sekret)
{
    this -> nazwa = nazwa;
    this -> sekret = sekret;
}

Tdomownik::~Tdomownik()
{
    //dtor
}

void Tdomownik::setcode(long int n)
{
    //cout << "Podaj kod dostepu do domu: ";
    //cin >> kod;
    kod = n;
}

long int Tdomownik::getcode()
{
    //cout << "Kod dostepu do domu: " << kod << endl;
    return kod;
}

void Tdomownik::wyswietl()
{
    cout << "Nazwa: " << nazwa << endl << "Sekret: " << sekret << endl;
}

long int Tdomownik::kod = 123123;
