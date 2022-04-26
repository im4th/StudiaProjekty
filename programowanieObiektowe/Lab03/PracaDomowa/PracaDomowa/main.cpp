#include <iostream>
#include "Tosoba.h"
#include "Ttrojkat.h"

using namespace std;

int main()
{

    cout << "Osoba 1" << endl;
    Tosoba osoba;
    osoba.wyswietl();
    cout << "Osoba 2" << endl;
    data dataUrodz;
    dataUrodz.dzien = 12;
    dataUrodz.miesiac = 1;
    dataUrodz.rok = 2001;
    Tosoba osoba2("Mateusz", "Pikula", dataUrodz);
    //Tosoba osoba2("Mateusz", "Pikula", {12,1,2001});
    osoba2.wyswietl();
    osoba2.info(2021);
    Ttrojkat trojkat;
    trojkat.wczytaj();
    trojkat.sprawdz();
    cout << trojkat.PoleZHerona()<<endl;
    cout << trojkat.PoleZHerona(10,20,30)<<endl;
    cout << trojkat.PoleZWysokosci()<<endl;
    cout << trojkat.PoleZWysokosci(1,2)<<endl;

    return 0;
}
