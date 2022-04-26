#include "Ttowar.h"
#include <string>
#include <iostream>

using namespace std;

Ttowar::Ttowar(string naz, float cena, int iloscT)
{

}

Ttowar::~Ttowar()
{
    //dtor
}
void Ttowar::wczytaj()
{
    cout << "Podaj rodzaj towaru: ";
        cin >> nazwa;
        cout << "Podaj cene towaru " << nazwa << " :";
        cin >> cena;
}

void Ttowar::wyswietl()
{
    cout << "  -Produkt: " << nazwa << " o cenie " << cena << endl;
}
