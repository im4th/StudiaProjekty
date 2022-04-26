#ifndef TKLIENT_H
#define TKLIENT_H
#include <iostream>

using namespace std;

class Tklient
{
    public:
        Tklient();
        Tklient(string imie, string nazwisko);
        virtual ~Tklient();
        void wczytaj();
        void wyswietl();
    protected:
        string imie, nazwisko;
    private:
};

#endif // TKLIENT_H
