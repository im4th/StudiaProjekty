#include "TpracownikUmyslowy.h"

TpracownikUmyslowy::TpracownikUmyslowy(string imi, string nzwi,int pensjaM, int premiaProc, string nFirmy):Tpracownik(imi, nzwi, nFirmy)
{
    pensjaMiesieczna = pensjaM;
    premiaWProcentach = premiaProc;
    cout<< "Dziala konstruktor TpracownikUmyslowy" << endl;
}

TpracownikUmyslowy::~TpracownikUmyslowy()
{
    cout<< "Dziala destruktor TpracownikUmyslowy" << endl;
}

void TpracownikUmyslowy::wczytaj()
{
    Tpracownik::wczytaj();
    cout <<"Podaj pensje miesieczna: ";
    cin >> pensjaMiesieczna;
    cout << "Podaj premie w procentach: ";
    cin >> premiaWProcentach;
}

void TpracownikUmyslowy::wyswietl()
{
    Tpracownik::wyswietl();
    cout << "Pensja: " << pensjaMiesieczna << endl;
    cout << "Premia: " << premiaWProcentach << endl;
    cout << "Placa: " << policzPlace() << endl;
}

float TpracownikUmyslowy::policzPlace()
{
      return pensjaMiesieczna*(1+(premiaWProcentach*0.01));
}
