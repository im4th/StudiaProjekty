#include "Tstudent.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void Tstudent::wczytaj()
{
    cout <<"Podaj imie ";
    cin >> imie;
    cout <<"Podaj nazwisko ";
    cin >> nazwisko;
    cout <<"Podaj ocene za pierwszy egzamin ";
    cin >> oceny[0];
    cout <<"Podaj ocene za drugi egzamin ";
    cin >> oceny[1];
    cout <<"Podaj ocene za trzeci egzamin ";
    cin >> oceny[2];
}
float Tstudent::obliczSrednia()
{
    return (oceny[0]+oceny[1]+oceny[2])/3;
}
void Tstudent::wyswietl()
{
    cout <<"---"<<endl<<"Srednia "<<imie<<" "<<nazwisko<<" za 3 egzaminy wynosi "<< obliczSrednia()<<endl<<"---";
}
