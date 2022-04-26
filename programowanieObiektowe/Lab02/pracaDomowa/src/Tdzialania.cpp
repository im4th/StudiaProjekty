#include "Tdzialania.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

void Tdzialania::wczytaj()
{
    cout << "Podaj liczbe x: ";
    cin >> x;
    cout <<"Podaj liczbe y rozna od zera: ";
    cin >> y;
}
int Tdzialania::iloczyn()
{
    return x*y;
}
float Tdzialania::iloraz()
{
    if(y==0)
        {
            cout << "Nie dziel przez zero";
            return 0;
        }
    else
        return x/(1.0*y);
}
void Tdzialania::wyswietl()
{
    cout <<"iloczyn= " << iloczyn() << endl;
    cout <<"iloraz= "<< iloraz();
}
