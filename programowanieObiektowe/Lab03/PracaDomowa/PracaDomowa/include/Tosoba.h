#ifndef TOSOBA_H
#define TOSOBA_H
#include <locale>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct data
{
    int dzien, miesiac, rok;
};


class Tosoba
{
    public:
        Tosoba();
        Tosoba(char *im, string naz, data dataU);
        virtual ~Tosoba();
        void wczytaj();
        void wyswietl();
        void wyswietl(int rok);
        void info();
        void info(int rok);
    protected:

    private:
        char imie[10];
        string nazwisko;
        data dataUrodzenia;
};

#endif // TOSOBA_H
