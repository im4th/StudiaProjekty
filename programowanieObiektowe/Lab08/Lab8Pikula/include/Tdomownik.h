#ifndef TDOMOWNIK_H
#define TDOMOWNIK_H
#include <string>

using namespace std;

class Tdomownik
{
    public:
        Tdomownik(string nazwa, string sekret);
        virtual ~Tdomownik();
        static long int getcode();
        static void setcode(long int n);
        void wyswietl();
        friend void sasiad(Tdomownik *wsk);
    protected:

    private:
        string nazwa, sekret;
        static long int kod;
};

#endif // TDOMOWNIK_H
