#ifndef TPRACOWNIKFIZYCZNY_H
#define TPRACOWNIKFIZYCZNY_H

#include <Tpracownik.h>


class TpracownikFizyczny : public Tpracownik
{
    public:
        TpracownikFizyczny(string imi="Marcin", string nzwi= "Najman", int stawkaG=10, int iloscG=8, int premiaProc=12, string nFirmy="firma");
        void wyswietl();
        float policzPlace();
        void wczytaj();
        virtual ~TpracownikFizyczny();
    protected:
        int stawkaGodzinowa, iloscPrzepracowanychGodzin, premiaWProcentach;
    private:
};

#endif // TPRACOWNIKFIZYCZNY_H
