#include "Ttrojkat.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

Ttrojkat::Ttrojkat()
{
    bokA = 1;
    bokB = 1;
    bokC = 1;
}

Ttrojkat::~Ttrojkat()
{
    //dtor
}
void Ttrojkat::wczytaj()
{
    cout <<"Podaj bok A: ";
    cin >> bokA;
    cout <<"Podaj bok B: ";
    cin >> bokB;
    cout <<"Podaj bok C: ";
    cin >> bokC;
    cout <<"Podaj wysokosc padajaca na bok A: ";
    cin >> wysokoscA;
}
void Ttrojkat::sprawdz()
{
    if(bokA+bokB>bokC && bokB+bokC>bokA && bokA+bokC>bokB)
        cout <<"Taki trojkat istnieje"<<endl;
    else
    {
        cout <<"Taki trojkat nie istnieje"<< endl;
        exit(1);
    }
}
float Ttrojkat::PoleZWysokosci()
{
    cout << "Pole trojkata = ";
    return (bokA*wysokoscA)/2;
}
float Ttrojkat::PoleZWysokosci(int bokJeden, int wysokoscJeden)
{
    cout << "Pole trojkata = ";
    return (bokJeden*wysokoscJeden)/2;
}
float Ttrojkat::PoleZHerona()
{
    cout << "Pole trojkata = ";
    float p = (bokA+bokB+bokC)/2;
    return sqrt(p*(p-bokA)*(p-bokB)*(p-bokC));
}
float Ttrojkat::PoleZHerona(int bokJeden,int bokDwa,int bokTrzy)
{
    cout << "Pole trojkata = ";
    float p = (bokJeden+bokDwa+bokTrzy)/2;
    return sqrt(p*(p-bokJeden)*(p-bokDwa)*(p-bokTrzy));
}
