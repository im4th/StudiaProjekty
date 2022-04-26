#ifndef TOSOBA_H
#define TOSOBA_H
#include <string>
#include <iostream>

using namespace std;

class Tosoba
{
    public:
        Tosoba(string im = "jan?", string naz = "Kowal?");//---konstruktor z parametrami domyœlnymi---
        virtual ~Tosoba();
        void wczytaj();
        void wyswietl();
    protected:
        string imie, nazwisko;

    private:
};

#endif // TOSOBA_H
