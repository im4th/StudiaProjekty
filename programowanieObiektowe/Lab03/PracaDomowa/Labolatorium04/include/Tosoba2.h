#ifndef TOSOBA2_H
#define TOSOBA2_H
#include <string>
#include <iostream>
#include "Tdata.h"

using namespace std;

class Tosoba2
{
    public:
        Tosoba2();
        Tosoba2(std::string nazwisko, std::string imie, Tdata d);
        void wczytaj();
        void wyswietl();
        string GetNazwiskoImie();
        Tosoba2 dluzszeNazwisko(Tosoba2 &osoba);
        int roznicaWieku(Tosoba2 &osoba);
        virtual ~Tosoba2();

    protected:

    private:
        string nazwisko, imie, motto;
        Tdata  dataUr;
};

#endif // TOSOBA2_H
