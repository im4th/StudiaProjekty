#ifndef TDOKUMENT_H
#define TDOKUMENT_H
#include <string>

using namespace std;

struct data
{
    int dzien, miesiac, rok;
};

class Tdokument
{
    public:
        Tdokument();
        Tdokument(string nazwa, data data, string numerNIP);
        virtual ~Tdokument();
        void wczytaj();
        void wyswietl();
    protected:
        data dataWydania;
        string nazwa;
        string numerNIP;
    private:
};

#endif // TDOKUMENT_H
