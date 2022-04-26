#include <iostream>
#include <fstream>

using namespace std;

void sortowanieBabelkowe(int* tab, int rozmiarTablicy);

void wyswietl1D(int* tab, int n);

void wczytaj(int *&tab, int &n, string nazwa_pliku);

void zadanie21(int *&tab, int n);

void sortowaniePrzezWybor(int* tab, int n);

void zadanie22(int *&tab, int n);

int main()
{
    int *tab;
    int n;
    //zadanie21(tab, n);
    zadanie22(tab, n);
    return 0;
}
void sortowanieBabelkowe(int* tab, int rozmiarTablicy)
{
    int a= rozmiarTablicy/2;
    for(int i=rozmiarTablicy-1; i>0; i--)
    {
        int p = 1;
        for(int j=0; j<a-1; j++)
        {
                if(tab[j]>tab[j+1])
                {
                    swap(tab[j],tab[j+1]);
                }
            p=0;
        }
        for(int j=a; j<rozmiarTablicy-1; j++)
        {
            if(tab[j]<tab[j+1])
            {
                swap(tab[j],tab[j+1]);
            }
            p=0;
        }
        if(p==1)
            break;
    }
}

void wyswietl1D(int* tab, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
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

void zadanie21(int *&tab, int n)
{
    wczytaj(tab, n, "grupa2zad2.csv");
    sortowanieBabelkowe(tab,n);
    wyswietl1D(tab, n);
    float a = tab[(n/2)-1], b = tab[n-1], srednia = (a + b)/2;
    cout << endl <<  "Srednia tych 2 elementow to: " << srednia << endl;
}
void zadanie22(int *&tab, int n)
{
    wczytaj(tab, n, "grupa1zad2.csv");
    sortowaniePrzezWybor(tab,n);
    wyswietl1D(tab, n);
    float a = tab[(n/2)-1], b = tab[n-1], srednia = (a + b)/2;
    cout << endl <<  "Srednia tych 2 elementow to: " << srednia << endl;
}

void sortowaniePrzezWybor(int* tab, int n)
{
    int a = n/2;
    int ind = 0;
    int inf = a;
    for(int i=a;i>0;i--)
    {
        ind = 0;
        for(int j=1;j<=i;j++)
        {
            if (tab[j]>tab[ind])
                ind = j;
        }
        swap(tab[i],tab[ind]);
    }
    for(int i=n-1;i>a;i--)
    {
        inf = a;
        for(int k=a;k<=i;k++)
        {
            if (tab[k]<tab[inf])
                inf = k;
        }
        swap(tab[i],tab[inf]);
    }
}
