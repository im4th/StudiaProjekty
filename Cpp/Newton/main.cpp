#include <iostream>

using namespace std;

void pobierz();

void wyswietl();

void Newton(int iloscWezlow,int punkt,float x[],float y[],float rob[], float a[]);

int iloscWezlow, punkt;
float wynik;
float *x = new float[iloscWezlow];
float *y = new float[iloscWezlow];
float *rob = new float[iloscWezlow+1];
float *a = new float[iloscWezlow+1];

int main()
{
    pobierz();
    wyswietl();
    Newton(iloscWezlow, punkt, x, y, rob,a);
    wynik = a[iloscWezlow];
    for(int k = iloscWezlow-1; k>=0; k--)
        wynik = wynik*(punkt-x[k]) + a[k];
    cout << endl << "Wynik to: " << wynik;
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

void Newton(int iloscWezlow,int punkt,float x[],float y[],float rob[], float a[])
{
    for(int i=0; i<iloscWezlow; i++)
    {
        rob[i]=y[i];
        for (int k=i-1; k>=0; k--)
        {
            rob[k]=(rob[k+1]-rob[k])/(x[i]-x[k]);
        }
        a[i]=rob[0];
    }
}
