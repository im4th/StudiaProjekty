#include <iostream>
#include <stdlib.h>

using namespace std;

void pobierz();

void wyswietl();

double Neville(int iloscWezlow, double punkt, double x[],double y[]);

int iloscWezlow;
double punkt;
double *x = new double[iloscWezlow];
double *y = new double[iloscWezlow];

int main()
{
    pobierz();
    wyswietl();
   cout << endl << "Wynik: " << Neville(iloscWezlow,punkt,x,y);
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
        for(int z=0; z<i;z++)
        {
            while(x[i]==x[z])
            {
            cout << endl <<"Niepoprawne dane";
            cout << endl << "Podaj POPRAWNE x"<<"["<<i<<"]: ";
            cin >> x[i];
            }
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

double Neville(int iloscWezlow, double punkt, double x[],double y[])
{
   double *p = new double[iloscWezlow];
   for(int k = 0;k<=iloscWezlow-1;k++)
   {
       p[k] = y[k];
       for(int j = k-1;j>=0;j--)
       {
           p[j]=p[j+1]+(p[j+1]-p[j])*(punkt-x[k])/(x[k]-x[j]);
       }
   }
    double wynik = p[0];
    delete [] p;
   return wynik;
}
