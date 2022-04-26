#include <iostream>
#include <time.h>

using namespace std;

void sortowanieBabelkowe1(int* tab, int rozmiarTablicy);

void  sortowanieBabelkowe(int* tab, int n, int tryb);

void zadanie1(int *&tab ,int n);

void z1(int *&tab ,int n);

void wyswietl1D(int* tab, int n);

void  sortowanieBabelkowe3(int* tab, int n, int tryb);

int main()
{
    int n;
    srand(time(NULL));
    n= (2*rand()%20) + 2;
    int *tab = new int[n];
    //zadanie1(tab, n);
    z1(tab, n);
    delete[] tab;
    return 0;
}

void sortowanieBabelkowe1(int* tab, int rozmiarTablicy)
{
    int a= rozmiarTablicy/2;
    for(int i=rozmiarTablicy-1; i>0; i--)
    {
        int p = 1;
        for(int j=0; j<a-1; j++)
        {
                if(tab[j]<tab[j+1])
                {
                    swap(tab[j],tab[j+1]);
                }
            p=0;
        }
        for(int j=a; j<rozmiarTablicy-1; j++)
        {
            if(tab[j]>tab[j+1])
            {
                swap(tab[j],tab[j+1]);
            }
            p=0;
        }
        if(p==1)
            break;
    }
}

void  sortowanieBabelkowe(int* tab, int n, int tryb)
{
    for (int i = n-1; i>0; i--)
    {
        for (int j=0;j<i;j++)
        {
            if(tryb == 1)
            {
                if (tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
            }
            else if (tab[j]<tab[j+1]) swap(tab[j],tab[j+1]);
        }
    }
}
void  sortowanieBabelkowe3(int* tab, int n, int tryb)
{
    int m = n/2;
    for (int i = n-1; i>=m; i--)
    {
        for (int j=m;j<i;j++)
        {
            if(tryb == 1)
            {
                if (tab[j]>tab[j+1]) swap(tab[j],tab[j+1]);
            }
            else if (tab[j]<tab[j+1]) swap(tab[j],tab[j+1]);
        }
    }
}

void zadanie1(int *&tab ,int n)
{
    srand(time(NULL));
    n= 2 + (2*rand())%10;
    for(int i=0;i<n;i++)
    {
        tab[i]= 1 + (rand())%10;
    }
    sortowanieBabelkowe1(tab,n);
    wyswietl1D(tab, n);
    float a = tab[0], b = tab[n/2], srednia = (a + b)/2;
    cout << endl <<  "Srednia tych 2 elementow to: " << srednia;
}

void z1(int *&tab ,int n)
{
    //srand(time(NULL));
    //n= (2*rand())%10 + 2;
    //tab[i]=rand()%(b-a+1)+a;;
    cout <<"--" << n << "--" << endl;
    for(int i=0;i<n;i++)
    {
        tab[i]= 1 + rand()%20;
    }
    int m = n/2;
    wyswietl1D(tab, n);
    cout  << endl;
    sortowanieBabelkowe3(tab,n,1);
    sortowanieBabelkowe(tab,m,2);
    wyswietl1D(tab, n);
    float a = tab[0], b = tab[n/2], srednia = (a + b)/2;
    cout << endl <<  "Srednia tych 2 elementow to: " << srednia;
}

void wyswietl1D(int* tab, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
}
