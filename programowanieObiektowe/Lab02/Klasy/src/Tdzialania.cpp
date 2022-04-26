#include "Tdzialania.h"
#include <iostream>

Tdzialania::dzialania;

using namespace std;
void Tdzialania::wczytaj()
{
    cout <<"Podaj liczby: ";
    cin >> x >> y;
}

int Tdzialania::iloczyn()
{
    return x*y;
}

float Tdzialania::iloraz()
{
    if(y==0)
    {
        cout << "nie dziel przez 0";
        return 0;
    }
    else
        return x/y;
}

void Tdzialania::wyswietl()
{
    cout << "Wynik iloczynu: " << iloczyn() << endl;
    cout << "Wynik ilorazu: " << iloraz();
}
