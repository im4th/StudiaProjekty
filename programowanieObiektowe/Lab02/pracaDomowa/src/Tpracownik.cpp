#include "Tpracownik.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void Tpracownik::wczytaj()
{
    cout <<"Podaj imie: ";
    cin >> imie;
    cout <<"Podaj nazwisko: ";
    cin >> nazwisko;
    cout <<"Podaj stawke: ";
    cin >> stawka;
    cout <<"Podaj liczbe godzin: ";
    cin >> liczbaGodzin;
    cout <<"Podaj date zatrudnienia d m r: ";
    cin >> dataZatrudnienia.d>>dataZatrudnienia.m>>dataZatrudnienia.r;
}

float Tpracownik::liczPlace()
{
    return liczbaGodzin*stawka;
}

void Tpracownik::wyswietl()
{
    cout << imie << " " << nazwisko << " zatrudniony dnia " << dataZatrudnienia.d <<"."<<dataZatrudnienia.m<<"."<<dataZatrudnienia.r<<" zarobi "<< liczPlace()<<" PLN"<< endl;
}
