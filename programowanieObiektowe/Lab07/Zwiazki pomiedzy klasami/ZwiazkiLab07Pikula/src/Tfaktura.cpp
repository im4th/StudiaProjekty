#include "Tfaktura.h"
#include <string>
#include <iostream>
#include "Ttowar.h"
#include "Tklient.h"

using namespace std;

Tfaktura::Tfaktura(string naz, data data, string NIP, int iloscTowarow, Tklient klient):Tdokument(naz, data, NIP)
{
    this -> klient = klient;
    this -> iloscTowarow = iloscTowarow;
    this -> towary = new Ttowar[iloscTowarow];
}

Tfaktura::~Tfaktura()
{
    delete[] towary;
}

void Tfaktura::wczytaj()
{
    Tdokument::wczytaj();
    klient.wczytaj();
    cout << "Podaj ilosc towarow na fakturze: ";
    cin >> iloscTowarow;
    for(int i = 0; i<iloscTowarow; i++)
    {
        towary[i].Ttowar::wczytaj();
    }
}

void Tfaktura::wyswietl()
{
    Tdokument::wyswietl();
    klient.wyswietl();
    cout << endl << "Zawartosc faktury: " << endl;
    for(int i = 0; i<iloscTowarow; i++)
    {
        towary[i].Ttowar::wyswietl();
    }
    float add = 0;
    for(int i = 0; i<iloscTowarow; i++)
    {
        add = add + towary[i].cena;
    }
    cout << "Suma cen z faktury: " << add << " PLN" << endl;
}

void Tfaktura::dodajFakture()
{
    Tdokument::wczytaj();
    delete [] towary;
    towary = new Ttowar[iloscTowarow];
    for(int i = 0; i<iloscTowarow; i++)
    {
        towary[i].Ttowar::wczytaj();
    }
}
