#include <iostream>
#include <time.h>

using namespace std;

void przydzielPamiec1D(int* &tab,int n);

void wypelnijTablice1D(int *tab, int n, int a, int b);

void usunTablice1D(int* &tab);

void wyswietl1D(int* tab, int n);

int podzial2czesci(int* tab, int n, int granica);

int podzial3czesci(int *tab, int n, int granica1, int granica2, int wybor);

int main()
{
    int* tab = nullptr;
    int n=20, b=30, a=1, granica=10, granica2=20;
    przydzielPamiec1D(tab, n);
    wypelnijTablice1D(tab, n, a, b);
    cout <<"---";
    wyswietl1D(tab, n);
    /*cout <<endl<< "indeks pierwszego elementu drugiego podzbioru to "<< podzial2czesci(tab, n, granica) <<endl;
    wyswietl1D(tab, n);z*/
    cout <<"---"<< endl <<"Indeks pierwszego elementu drugiego podzbioru " << podzial3czesci(tab, n, granica, granica2, 1)<< endl;
    cout << "Indeks pierwszego elementu trzeciego podzbioru " << podzial3czesci(tab, n, granica, granica2, 2)<< endl << "---";

    wyswietl1D(tab, n);
    cout << "---";
    return 0;
}

void przydzielPamiec1D(int* &tab,int n)
{
    tab = new int[n];
}
void wypelnijTablice1D(int *tab, int n, int a, int b)
{
    srand(time(NULL));
    for(int i=0; i<n; i++)
    {
        tab[i] = a+rand()%(b-a+1);
    }
}
void usunTablice1D(int *&tab)
{
    delete[] tab;
}
void wyswietl1D(int* tab, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
}

int podzial2czesci(int *x, int n, int granica)
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
