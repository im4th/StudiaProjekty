#ifndef TPRACOWNIK_H
#define TPRACOWNIK_H


struct data
{
    int d,m,r;
};

class Tpracownik //----klasa---
{
private:
    char imie[20]; // ---pola----
    char nazwisko[25];
    float stawka;
    int liczbaGodzin;
    data dataZatrudnienia;
public:
    void wczytaj(); //---metody---
    float liczPlace();
    void wyswietl();
};

#endif // TPRACOWNIK_H
