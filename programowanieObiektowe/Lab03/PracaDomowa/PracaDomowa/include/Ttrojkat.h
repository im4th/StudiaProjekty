#ifndef TTROJKAT_H
#define TTROJKAT_H
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


class Ttrojkat
{
    public:
        Ttrojkat();
        virtual ~Ttrojkat();
        void wczytaj();
        void sprawdz();
        float PoleZWysokosci();
        float PoleZWysokosci(int bokJeden, int wysokoscJeden);
        float PoleZHerona();
        float PoleZHerona(int bokJeden,int bokDwa,int bokTrzy);
    protected:

    private:
        int bokA, bokB, bokC, wysokoscA;
};

#endif // TTROJKAT_H
