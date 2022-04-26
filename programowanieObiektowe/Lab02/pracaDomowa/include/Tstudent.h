#ifndef TSTUDENT_H
#define TSTUDENT_H


class Tstudent
{
public:
    void wczytaj();
    float obliczSrednia();
    void wyswietl();
protected:

private:
    char imie[20];
    char nazwisko[25];
    float oceny[3];
};

#endif // TSTUDENT_H
