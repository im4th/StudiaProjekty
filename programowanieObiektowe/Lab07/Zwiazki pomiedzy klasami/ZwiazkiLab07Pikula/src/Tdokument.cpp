#include "Tdokument.h"
#include <string>
#include <iostream>

using namespace std;


Tdokument::Tdokument(string nazwa, data data, string NIP)
{
    this -> nazwa = nazwa;
    this -> dataWydania = data;
    this -> numerNIP = NIP;
}

Tdokument::Tdokument()
{
    nazwa = "Podstawowy dokument";
    dataWydania  = {1,1,2001};
    numerNIP  = "123-456-78-90";
}

Tdokument::~Tdokument()
{
    //dtor
}

void Tdokument::wczytaj()
{
    cout << "Podaj nazwe dokumentu: ";
    cin >> nazwa;
    cout << "Podaj date wydania dokumentu: ";
    cin >> dataWydania.dzien >> dataWydania.miesiac >> dataWydania.rok;
    cout << "Podaj numer NIP faktury: ";
    cin >> numerNIP;
}

void Tdokument::wyswietl()
{
    cout << "Dokument " << nazwa << " wydany " << dataWydania.dzien << "/" << dataWydania.miesiac << "/" << dataWydania.rok << " o numerze NIP " << numerNIP << endl;
}
