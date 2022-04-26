#include <iostream>
#include "Ttime.h"
#include <iomanip>
using namespace std;

ostream & operator<<(ostream &os, Ttime &a);

Ttime operator*(Ttime &a, int razy);

Ttime operator*(int razy, Ttime &a);

bool operator==(Ttime &a, Ttime &b);

int main()
{
    Ttime lotCP(12,15), lotPW(6,0), oczekiwanie(1,15), calkowityCzasLotu, czasLotuW2StronyPW, czasLotuLW(5,50), czasLotuW2StronyLW;
    calkowityCzasLotu = lotCP + lotPW + oczekiwanie;
    czasLotuW2StronyPW =lotPW*2;
    czasLotuW2StronyLW=czasLotuLW*2;
    cout << "Calkowity czas lotu: " <<calkowityCzasLotu<<endl;
    cout << "Calkowity czas lotu Paryz-Warszawa w 2 strony: " <<czasLotuW2StronyPW <<endl;
    if(czasLotuW2StronyPW == czasLotuW2StronyLW)
        cout << "Czasy lotow sie rownaja"<<endl;
    else
        cout << "Czasy lotow sa rozne" << endl;
    return 0;
}

ostream & operator<<(ostream &os, Ttime &a)
{
    if(a.minuty<10)
        os << setw(2) << a.godziny << ":" << "0" << a.minuty << "h";
    else
        os << a.godziny << ":" << a.minuty << "h";
}

Ttime operator*(Ttime &a, int razy)
{
    int temp;
    Ttime razyCzas(0,0);
    razyCzas.godziny = a.godziny*razy;
    razyCzas.minuty = a.minuty*razy;
    temp = razyCzas.minuty/60;
    if(razyCzas.minuty>60)
    {
        razyCzas.godziny = temp + razyCzas.godziny;
        razyCzas.minuty = razyCzas.minuty%60;
    }
    return razyCzas;
}

Ttime operator*(int razy, Ttime &a)
{
    int temp;
    Ttime razyCzas(0,0);
    razyCzas.godziny = a.godziny*razy;
    razyCzas.minuty = a.minuty*razy;
    temp = razyCzas.minuty/60;
    if(razyCzas.minuty>60)
    {
        razyCzas.godziny = temp + razyCzas.godziny;
        razyCzas.minuty = razyCzas.minuty%60;
    }
    return razyCzas;
}

bool operator==(Ttime &a, Ttime &b)
{
    if(a.godziny==b.godziny and a.minuty==b.minuty)
        return true;
    else
        return false;
}
