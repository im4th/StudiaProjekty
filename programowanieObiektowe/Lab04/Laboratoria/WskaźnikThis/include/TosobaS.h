#ifndef TOSOBAS_H
#define TOSOBAS_H

const int DL=20;

class TosobaS
{
    public:
        TosobaS();
        virtual ~TosobaS();
        TosobaS(char *nazwisko, char *imie, int wiek);
        void podajDane();
        void wyswietl();
        static int ile();

    protected:
        char nazwisko[DL], imie[DL];
        int wiek;
    private:
        static int liczbaObiektow;
};

#endif // TOSOBAS_H
