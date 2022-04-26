#include <iostream>
#include "Tosoba.h"
#include "Tstudent.h"
#include "Tpracownik.h"
#include "TpracownikFizyczny.h"
#include "TpracownikUmyslowy.h"
#include <math.h>

using namespace std;

int main()
{
    Tosoba osoba1;
    osoba1.wyswietl();
    Tosoba osoba2("Ania", "Ktos");
    osoba2.wyswietl();
    Tstudent student1;
    cout << endl;
    student1.wprowadzOceny();
    student1.wyswietl();
    Tstudent student2("Mariusz", "Pudzianoski", "Pollub", 5);
    cout << endl;
    student2.wprowadzOceny();
    student2.wyswietl();
    student2.sredniaOrazCzyZdal();
    cout << endl;
    student2.Tosoba::wyswietl();
    TpracownikUmyslowy pracownik1;
    pracownik1.wczytaj();
    pracownik1.wyswietl();
    return 0;
}
