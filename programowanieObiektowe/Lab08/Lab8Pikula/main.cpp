#include <iostream>
#include <string>
#include "Tdomownik.h"

using namespace std;

void sasiad(Tdomownik *wsk);

int main()
{
    cout << "Podstawowy kod: " << endl;
    cout << Tdomownik::getcode() << endl;

    Tdomownik ojciec("ojciec", "nie karmie psa");
    Tdomownik matka("matka", "zapominam kluczy");
    Tdomownik corka("corka", "nie ucze sie");

    cout << "kod corka: " << endl;
    corka.setcode(222);
    corka.wyswietl();

    Tdomownik::setcode(111);
    cout << Tdomownik::getcode()<< endl;

    sasiad(&matka);
    cout << Tdomownik::getcode() << endl;
    return 0;
}

void sasiad(Tdomownik *wsk)
{
    cout <<"Sasiad zmienia kod do domu" << endl;
    Tdomownik::setcode(333);
    cout << "Sekret " << wsk->nazwa << " to " << wsk->sekret << endl;
}
