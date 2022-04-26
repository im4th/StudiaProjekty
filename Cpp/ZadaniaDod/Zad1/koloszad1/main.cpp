#include <iostream>
#include<fstream>

using namespace std;

int podzial2czescizad1(int *x, int n, int granica);

void wyswietl1D(int* tab, int n);

void wczytaj(int *&tab, int &n, string nazwa_pliku);

void zadanie1(int *&tab, int n);

void zadanie12(int *&tab, int n);

int podzial2czescizad12(int *x, int n, int granica);

void zadanie13(int *&tab, int n);

int podzial3czesci(int *x, int n, int granica1, int granica2, int wybor);

int main()
{
    int* tab;
    int* tab2;
    int* tab3;
    int n, m, k;
    //wczytaj(tab, n,"grupa1zad1.csv");
    //cout << n << endl;
    zadanie1(tab, n);
    cout<<endl;
    zadanie12(tab2, m);
    cout<<endl;
    zadanie13(tab3,  k);
    cout<<endl;
    return 0;
}

int podzial2czescizad1(int *x, int n, int granica)
{
    int i=0, j=n-1;
    while(i<j)
    {
        while(x[j]<granica && i<j || x[j]>granica && i<j)
        {
            j--;
        }
        while(x[i]==granica && i<j)
        {
            i++;
        }
        if(i<j)
        {
            swap(x[i],x[j]);
            i++;
            j--;
        }
    }
    if(x[i]<=granica)
    {
        return i+1;
    }
    else
        return i;
}

int podzial2czescizad12(int *x, int n, int granica)
{
    int i=0, j=n-1;
    while(i<j)
    {
        while(x[i]<=granica && i<j)
        {
            i++;
        }
        while(x[j]>granica && i<j)
        {
            j--;
        }
        if(i<j)
        {
            swap(x[i],x[j]);
            i++;
            j--;
        }
    }
    if(x[i]<=granica)
    {
        return i+1;
    }
    else
        return i;
}

void wyswietl1D(int* tab, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
}

void wczytaj(int *&tab, int &n, string nazwa_pliku) //n rozmiar tablicy, tab tablica
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

void zadanie1(int *&tab, int n)
{
    int b=0;
    wczytaj(tab, n,"grupa1zad1.csv");
    int i = podzial2czescizad1(tab, n, 2);
    for(int a=i; a<i+3; a++)
    {
        b = b + tab[a];
    }
    wyswietl1D(tab, n);
    cout <<endl<< "Wynik dodawania: " << b << endl;
}

void zadanie12(int *&tab, int n)
{
    int b=0;
    wczytaj(tab, n,"grupa2zad1.csv");
    int i = podzial2czescizad12(tab, n, 9);
    for(int a = 0; a<i ; a++)
    {
        b++;
    }
    wyswietl1D(tab, n);
    cout <<endl<<"liczb 1cyfrowych jest: " << b << endl;
}

void zadanie13(int *&tab, int n)
{
    int b=0,c=0;
    wczytaj(tab, n,"grupa2zad1.csv");
    int i = podzial3czesci(tab, n, 9, 19, 1);
    int j = podzial3czesci(tab, n, 9, 19, 2);
    for(int a = 0; a<i+1 ; a++)
    {
        b++;
    }
     for(int a = j; a-1<n-1 ; a++)
    {
        c++;
    }
    wyswietl1D(tab, n);
    cout <<endl<<"liczb 1cyfrowych jest: " << b;
    cout <<endl<<"liczb >20 jest: " << c;
}

int podzial3czesci(int *x, int n, int granica1, int granica2, int wybor)
{
    int j=0, i=-1, k=n;
    while(j<k)
    {
        if(x[j]<=granica1)
        {
            i++;
            swap(x[i],x[j]);
            j++;
        }
        else if(x[j]>granica2)
        {
            k--;
            swap(x[k],x[j]);
        }
        else
            j++;
    }
    if(wybor==1)
    {
        return i;
    }
    else
        return k;
}
