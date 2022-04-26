#include <iostream>
#include <cstdlib>
#include "Tpracownik.h"
#include "Tdzialania.h"
#include "Tstudent.h"


using namespace std;


int main()
{
    /*
    Tpracownik pracownik01, pracownik02; //---dwa obiekty klasowe---
    pracownik01.wczytaj();
    //pracownik01.liczPlace(); ---niepotrzebne, wywoluje to w metodzie wyswietl---
    pracownik01.wyswietl();
    pracownik02.wczytaj();
    pracownik02.wyswietl();
    Tdzialania l;
    l.wczytaj();
    l.wyswietl();
    */
    Tstudent student1;
    student1.wczytaj();
    student1.wyswietl();
    return 0;
}
