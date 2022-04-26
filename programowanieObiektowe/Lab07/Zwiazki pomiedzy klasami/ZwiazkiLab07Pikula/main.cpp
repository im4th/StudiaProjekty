#include <iostream>
#include "Tdokument.h"
#include "Tfaktura.h"

using namespace std;

int main()
{
    Tfaktura klient1, klient2;

    klient1.wczytaj();
    klient1.wyswietl();

    klient2.wczytaj();
    klient2.wyswietl();
    klient2.dodajFakture();
    klient2.wyswietl();

    return 0;
}
