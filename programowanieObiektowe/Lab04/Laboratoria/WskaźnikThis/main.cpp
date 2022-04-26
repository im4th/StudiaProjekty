#include <iostream>
#include "Tdata.h"
#include "Tosoba2.h"
#include "TosobaS.h"

using namespace std;

int main()
{
    /*Tosoba2 osoba1;
    osoba1.wczytaj();
    Tdata data(1,1,1990);
    Tosoba2 osoba2("Jan", "Kowalski", data);
    cout << endl;
    osoba1.wyswietl();
    osoba2.wyswietl();
    cout << "Osoba z d³u¿szym nazwiskiem to : ";
    osoba2.dluzszeNazwisko(osoba1).wyswietl();*/
    TosobaS osoba1;
    TosobaS osoba2("Ali", "kowal", 20);
    osoba2.wyswietl();
    TosobaS::ile();
    return 0;
}
