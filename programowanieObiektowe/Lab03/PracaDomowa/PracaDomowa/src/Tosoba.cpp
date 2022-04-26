#include "Tosoba.h"
#include <locale>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

Tosoba::Tosoba()
{
    strcpy(imie, "Ania");
    nazwisko = " Kowalska";
    dataUrodzenia.dzien = 20;
    dataUrodzenia.miesiac = 12;
    dataUrodzenia.rok = 2010;
    cout << "Dziala konstruktor domyslny" << endl;
}

Tosoba::Tosoba(char *im, string naz, data dataU)
{
    strncpy(imie, im, 9);
    imie[9]='\0';
    nazwisko = naz;
    dataUrodzenia=dataU;
    cout << "Dziala konstruktor z parametrami" << endl;
}
Tosoba::~Tosoba()
{
    cout << "Dziala destruktor" << endl;
}
void Tosoba::wczytaj()
{
    cout <<"Podaj imie: ";
    cin >> imie;
    cout <<"Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj dzien: ";
    cin >> dataUrodzenia.dzien;
    cout << "Podaj miesiac: ";
    cin >> dataUrodzenia.miesiac;
    cout << "Podaj rok: ";
    cin >> dataUrodzenia.rok;
    //cin >> dataUrodzenia.dzien >> dataUrodzenia.miesiac >> dataUrodzenia.rok;
}

void Tosoba::wyswietl()
{
    cout << imie << " " << nazwisko << " urodzil sie " << dataUrodzenia.dzien << "." << dataUrodzenia.miesiac << "." << dataUrodzenia.rok << endl;
}

void Tosoba::wyswietl(int rok)
{
    cout << imie << " " << nazwisko <<" ma " << rok-dataUrodzenia.rok << " lat";
}

void Tosoba::info(int rok)
{
    if(rok-dataUrodzenia.rok <18)
        cout << "Dziecko" << endl;
    else if(rok-dataUrodzenia.rok>18 && rok-dataUrodzenia.rok<=30)
        cout << "Pelnoletni" << endl;
    else if(rok-dataUrodzenia.rok>30 && rok-dataUrodzenia.rok<=50)
        cout << "30+" << endl;
    else if(rok-dataUrodzenia.rok>50)
        cout << "50+" << endl;
}
void Tosoba::info()
{
    cout << "Skonczyl 18 w roku " <<dataUrodzenia.rok+18<<endl;

}
