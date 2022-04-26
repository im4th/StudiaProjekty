#include <iostream>
#include "Tosoba.h"

using namespace std;

int main()
{
    cout << "Osoba 1" << endl;
    Tosoba osoba;
    osoba.wyswietl();
    cout << "Osoba 2" << endl;
    data dataUrodz;
    dataUrodz.d = 12;
    dataUrodz.m = 1;
    dataUrodz.r = 2001;
    //Tosoba osoba2("Mateusz", "Pikula", dataUrodz);
    Tosoba osoba2("Mateusz", "Pikula", {12,1,2001});
    return 0;
}
