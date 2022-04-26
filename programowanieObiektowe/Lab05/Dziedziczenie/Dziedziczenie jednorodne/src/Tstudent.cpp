#include "Tstudent.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

Tstudent::Tstudent(string imi, string nzwi, string ucz, int liczOc):Tosoba(imi, nzwi) //---definicja konstruktora w potomku z jednoczesnym wywolaniem konstruktora z przodka---
{
    cout<< "Dziala konstruktor Tstudent" << endl;
    //imie = imi;
    //nazwisko = nzwi;
    nazwaUczelni = ucz;
    liczbaOcen = liczOc;
    oceny = new int[liczbaOcen];
    cout << "utworzono "<< liczbaOcen <<" elementowa tablice ocen" << endl;
    for(int i = 0; i<liczbaOcen; i++)
        oceny[i] = 2;
}

Tstudent::~Tstudent()
{
    cout<< "Dziala destruktor Tstudent" << endl;
    delete [] oceny;
    cout << "usunieto "<< liczbaOcen <<" elementowa tablice ocen" << endl;
}

void Tstudent::wyswietl()
{
    //cout << imie << " " << nazwisko;
    Tosoba::wyswietl();
    cout << "Z uczelni " << nazwaUczelni<< endl;
    cout << "Oceny: ";
        for(int i = 0; i<liczbaOcen; i++)
            cout << oceny[i] << " ";
    cout << endl << endl;
}

void Tstudent::wprowadzOceny()
{
    cout << "Podaj "<< liczbaOcen <<" ocen: ";
    for(int i = 0; i<liczbaOcen; i++)
        cin >> oceny[i];
}

void Tstudent::sredniaOrazCzyZdal()
{
    float rbc = 0;
    for(int i=0;i<liczbaOcen;i++)
    {
        rbc = rbc + oceny[i];
    }
    float srednia = rbc/liczbaOcen;
    cout << "Srednia" << endl;
    Tosoba::wyswietl();
    cout << "wynosi: " << fixed << setprecision(2) << srednia;
    cout << ", a student ";
    if(srednia >= 2 )
        cout << "zaliczyl sesje.";
    else
        cout << "nie zaliczyl sesji.";
}
