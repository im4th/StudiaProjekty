#ifndef TPRACOWNIKUMYSLOWY_H
#define TPRACOWNIKUMYSLOWY_H

#include <Tpracownik.h>


class TpracownikUmyslowy : public Tpracownik
{
    public:
        TpracownikUmyslowy(string imi="Marcin", string nzwi= "Najman",int pensjaM = 7000, int premiaProc=12, string nFirmy="firma");
        virtual ~TpracownikUmyslowy();
        void wyswietl();
        void wczytaj();
        float policzPlace();

    protected:
        int pensjaMiesieczna, premiaWProcentach;
    private:
};

#endif // TPRACOWNIKUMYSLOWY_H
