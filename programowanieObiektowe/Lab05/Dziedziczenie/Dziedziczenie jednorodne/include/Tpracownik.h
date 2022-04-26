#ifndef TPRACOWNIK_H
#define TPRACOWNIK_H

#include <Tosoba.h>


class Tpracownik : public Tosoba
{
    public:
        Tpracownik(string imi = "Bartosz", string nzwi="Rudecki", string nazwaFirmy="firma");
        void wyswietl();
        void wczytaj();
        virtual ~Tpracownik();
    protected:
        string nazwaFirmy;

    private:
};

#endif // TPRACOWNIK_H
