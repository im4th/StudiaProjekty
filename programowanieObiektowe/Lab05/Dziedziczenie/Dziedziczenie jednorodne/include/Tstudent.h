#ifndef TSTUDENT_H
#define TSTUDENT_H
#include <vector>
#include <Tosoba.h>


class Tstudent : public Tosoba
{
    public:
        Tstudent(string imi = "Adam", string nzwi = "Malysz", string ucz = "PL", int liczOc = 3);
        virtual ~Tstudent();
        void wyswietl();
        void wprowadzOceny();
        void sredniaOrazCzyZdal();

    protected:
        string nazwaUczelni;
        int *oceny; //---tablica---
        int liczbaOcen;
    private:
};

#endif // TSTUDENT_H
