#include <iostream>
#include "Tdata.h"
#include "Tosoba2.h"

using namespace std;

int main()
{
    Tosoba2 osoba1;
    Tosoba2 osoba2("kamil", "nazwisko", {2,10,1666});
    //cout << osoba1.dluzszeNazwisko(osoba2);
    cout << osoba2.roznicaWieku(osoba1);
    return 0;
}
