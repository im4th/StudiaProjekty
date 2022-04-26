#include <iostream>
#include <stdlib.h>

using namespace std;

void pobierz();

void wyswietl();

void Lagrange(int iloscWezlow,int punkt,float x[],float y[],float rob[]);

int iloscWezlow, punkt;
float wynik = 0;
float *x = new float[iloscWezlow];
float *y = new float[iloscWezlow];
float *rob = new float[100];

int main()
{
    pobierz();
    wyswietl();
    Lagrange(iloscWezlow,punkt,x,y,rob);
    for(int i=0; i<iloscWezlow; i++)
    {
        wynik+=rob[i];
    }
    cout<< endl << endl <<"Wynik: "<< wynik << endl;
    return 0;
}

void pobierz()
{
    cout << "Podaj ilosc wezlow: ";
    cin >> iloscWezlow;
    cout << endl << "Podaj x"<<"["<<"0"<<"]: ";
    cin >> x[0];
    for(int i=1; i<iloscWezlow; i++)
    {
        cout << endl << "Podaj x"<<"["<<i<<"]: ";
        cin >> x[i];
        while(x[i]<=x[i-1])
        {
            cout <<endl <<"Niepoprawne dane";
            cout << endl << "Podaj POPRAWNE x"<<"["<<i<<"]: ";
            cin >> x[i];
        }
    }
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << endl << "Podaj y"<<"["<<i<<"]: ";
        cin  >> y[i];
    }
    cout <<endl<< "Podaj punkt p: ";
    cin >> punkt;
    while(punkt<x[0] || punkt>x[iloscWezlow-1])
    {
        cout << "Niepoprawny punkt p; rowiazanie nie istnieje. Podaj POPRAWNY punkt p: ";
        cin >> punkt;
    }
    cout << endl;
}

void wyswietl()
{
    cout <<"----------------------------" << endl;
    cout << "Ilosc wezlow: " << iloscWezlow << endl << endl;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout << "x["<<i<<"]: "<< x[i] << "  ";
    }
    cout <<endl << endl;
    for(int i=0; i<iloscWezlow; i++)
    {
        cout <<"y["<<i<<"]: "<< y[i] << "  ";
    }
    cout << endl << endl << "Punkt p: " << punkt << endl;
    cout <<"----------------------------";
}

void Lagrange(int iloscWezlow,int punkt,float x[],float y[],float rob[])
{
    for(int i=0; i<iloscWezlow; i++)
    {
        rob[i]=y[i];
        for(int j=0; j<iloscWezlow; j++)
        {
            if(x[i]!=x[j])
                rob[i]=rob[i]*(punkt-x[j])/(x[i]-x[j]);
        }
    }
}
