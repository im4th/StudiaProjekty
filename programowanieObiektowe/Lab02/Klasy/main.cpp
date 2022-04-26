#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

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

void Tpracownik::wczytaj()
{
    cout <<"Podaj imie: ";
    cin >> imie;
    cout <<"Podaj nazwisko: ";
    cin >> nazwisko;
    cout <<"Podaj stawke: ";
    cin >> stawka;
    cout <<"Podaj liczbe godzin: ";
    cin >> liczbaGodzin;
    cout <<"Podaj date zatrudnienia d m r: ";
    cin >> dataZatrudnienia.d>>dataZatrudnienia.m>>dataZatrudnienia.r;
}

float Tpracownik::liczPlace()
{
    return liczbaGodzin*stawka;
}

void Tpracownik::wyswietl()
{
    cout << imie << " " << nazwisko << " zatrudniony dnia " << dataZatrudnienia.d <<"."<<dataZatrudnienia.m<<"."<<dataZatrudnienia.r<<" zarobi "<< liczPlace()<<" PLN"<< endl;
}
int main()
{
    Tpracownik pracownik01, pracownik02; //---dwa obiekty klasowe---
    pracownik01.wczytaj();
    //pracownik01.liczPlace(); ---niepotrzebne, wywo³uje to w metodzie wyœwietl---
    pracownik01.wyswietl();
    pracownik02.wczytaj();
    pracownik02.wyswietl();
    return 0;
}
