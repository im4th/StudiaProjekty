#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

void zadanie31(int *&tab, int n);

void zadanie32(int *&tab, int n);

void wyszukiwanie_bisekcyjne1(int* tab, int n, int punkty);

void wczytaj(int *&tab, int &n, string nazwa_pliku);

void sortowanie(int* tab,int n);

void wyszukiwanie_bisekcyjne2(int* tab, int n, int punkty);

void wyswietl1D(int* tab, int n);

int main()
{
    int *tab;
    int n;
    zadanie32(tab, n);
    return 0;
}
void wyszukiwanie_bisekcyjne1(int* tab, int n, int punkty)
{
    int licznik = 0;
    int lewy = 0;
    int prawy = n-1;
    int srodek;
    while (lewy <= prawy)
    {
        srodek=(int)(lewy+prawy)/2;
        if (tab[srodek] == punkty)
        {
            while(tab[srodek]==punkty)
            {
                licznik++;
                srodek--;
            }
            srodek=(int)(lewy+prawy)/2 + 1;
            while(tab[srodek]==punkty)
            {
                licznik++;
                srodek++;
            }
            break;
        }
        else if (punkty<tab[srodek])
            prawy = srodek-1;
        else if (punkty>tab[srodek])
            lewy = srodek+1;
    }
    cout <<endl<< "wynik: "<<licznik << endl;
}

void wczytaj(int *&tab, int &n, string nazwa_pliku)
{
    ifstream odczyt;
    odczyt.open(nazwa_pliku.c_str());
    odczyt>>n;
    tab=new int[n];
    for(int i=0; i<n; i++)
    {
        odczyt>>tab[i];
    }
    odczyt.close();
}

void zadanie31(int *&tab, int n)
{
    wczytaj(tab, n, "grupa1zad3.csv");
    sortowanie(tab, n);
    wyszukiwanie_bisekcyjne1(tab, n, 10);
    wyswietl1D(tab, n);
}

void sortowanie(int* tab,int n)
{
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if (tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
        }
    }
}

void zadanie32(int *&tab, int n)
{
    wczytaj(tab, n, "grupa1zad3.csv");
    sortowanie(tab, n);
    wyszukiwanie_bisekcyjne2(tab, n, 10);
    wyswietl1D(tab, n);
}
void wyszukiwanie_bisekcyjne2(int* tab, int n, int punkty)
{
    int licznik = 0, niema= 0;
    int lewy = 0;
    int prawy = n-1;
    int srodek,i=0;
    while (lewy <= prawy)
    {
        srodek=(int)(lewy+prawy)/2;
        if (tab[srodek] == punkty)
        {
            while(tab[srodek]==punkty)
            {
                licznik ++;
                srodek--;
            }
            srodek=(int)(lewy+prawy)/2 + 1;
            while(tab[srodek]==punkty)
            {
                licznik ++;
                srodek++;
            }
            break;
        }
        else if (punkty<tab[srodek])
            prawy = srodek-1;
        else if (punkty>tab[srodek])
            lewy = srodek+1;
    }
    for(int i=0;i <n-1;i++)
    {
        if(tab[i]==10)
        {
        cout<< "index: " << i <<endl;
        break;
        }
        else if(tab[i]!=10)
            niema++;
    }
    if(niema==n-1)
        cout<< "-1" << endl ;
}

void wyswietl1D(int* tab, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
}

