#ifndef TTOWAR_H
#define TTOWAR_H
#include <iostream>

using namespace std;

class Ttowar
{
    public:
        Ttowar(string nazwa = "ziemia", float cena = 4.25, int iloscTowarow = 10);
        virtual ~Ttowar();
        void wczytaj();
        void wyswietl();
        float cena;
    protected:
        string nazwa;
        //float cena;
        int iloscTowarow;
    private:
};

#endif // TTOWAR_H
