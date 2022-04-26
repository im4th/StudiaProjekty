#include "TosobaS.h"
#include <iostream>

using namespace std;

TosobaS::TosobaS()
{
    this -> nazwisko[DL] = "Kowal";
    this -> imie[DL] = "Jan";
    this -> wiek = 3;
    cout << "Utworzono obiekt klasy TosobaS"<<endl;
    liczbaObiektow++;
}

TosobaS::~TosobaS()
{
    cout << "Usunieto obiekt klasy TosobaS"<<endl;
}

TosobaS::TosobaS(char *nazwisko, char *imie, int wiek)
{
    this -> nazwisko[DL] = nazwisko[DL];
    this -> imie[DL] = imie[DL];
    this -> wiek = wiek;
    cout << "Utworzono obiekt klasy TosobaS"<<endl;
    liczbaObiektow++;
}

void TosobaS::podajDane()
{
   cout << "Podaj nazwisko : ";
   cin >> nazwisko[DL];
   cout << "Podaj imie : ";
   cin >> imie[DL];
   cout << "Podaj wiek : ";
   cin >> wiek;
}

void TosobaS::wyswietl()
{
    cout << imie << " " << nazwisko << " lat " << wiek << endl;
}

int TosobaS::liczbaObiektow = 0;

int TosobaS::ile()
{
    return liczbaObiektow;
}

