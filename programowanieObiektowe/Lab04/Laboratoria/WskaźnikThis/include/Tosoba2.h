#ifndef TOSOBA2_H
#define TOSOBA2_H
#include <string>
#include "Tdata.h"
#include <iostream>

using namespace std;


class Tosoba2
{
    public:
        Tosoba2();
        Tosoba2(string nazwisko, string imie, Tdata dataUr);
        virtual ~Tosoba2();
        void wczytaj();
        void wyswietl();
        string GetNazwiskoImie();
        int roznicaWieku(Tosoba2 &osoba);
        Tosoba2 dluzszeNazwisko(Tosoba2 &osoba);



    protected:

    private:
        string nazwisko, imie, motto;
        Tdata dataUr;
};

#endif // TOSOBA2_H
