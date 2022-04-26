#include "TpracownikFizyczny.h"
#include <math.h>

TpracownikFizyczny::TpracownikFizyczny(string imi, string nzwi, int stawkaG, int iloscG, int premiaProc, string nFirmy):Tpracownik(imi, nzwi, nFirmy)
{
    stawkaGodzinowa = stawkaG;
    iloscPrzepracowanychGodzin = iloscG;
    premiaWProcentach = premiaProc;
    cout<< "Dziala konstruktor TpracownikFizyczny" << endl;
}

TpracownikFizyczny::~TpracownikFizyczny()
{
    cout<< "Dziala destruktor TpracownikFizyczny" << endl;
}

void TpracownikFizyczny::wczytaj()
{
    Tpracownik::wczytaj();
    cout << "Podaj stawke godzinowa: ";
    cin >> stawkaGodzinowa;
    cout << "Podaj liczbe przepracowanych godzin: ";
    cin >> iloscPrzepracowanychGodzin;
    cout << "Podaj premie w procentach: ";
    cin >> premiaWProcentach;
}

float TpracownikFizyczny::policzPlace()
{
      return (iloscPrzepracowanychGodzin*stawkaGodzinowa*(1 + (premiaWProcentach*0.01)));
}

void TpracownikFizyczny::wyswietl()
{
    Tpracownik::wyswietl();
    cout << "Stawka godzinowa: "<< stawkaGodzinowa << endl;
    cout << "Liczba przepracowanych godzin: " << iloscPrzepracowanychGodzin << endl;
    cout << "Premia: " << premiaWProcentach<< endl;
    cout << "Placa: " << policzPlace()<< endl;
}
