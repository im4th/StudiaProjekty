#ifndef TFAKTURA_H
#define TFAKTURA_H
#include <Tdokument.h>
#include "Ttowar.h"
#include "Tklient.h"

class Tfaktura : public Tdokument
{
    public:
        Tfaktura(string naz = "Podstawowa faktura", data data= {1,1,2001}, string NIP = "123-456-78-90", int iloscTowarow = 6, Tklient klient = {"jan", "jan"});
        virtual ~Tfaktura();
        void wczytaj();
        void wyswietl();
        void dodajFakture();
    protected:
        Ttowar *towary;
        int iloscTowarow;
        Tklient klient;
    private:
};

#endif // TFAKTURA_H
