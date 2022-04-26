#include <iostream>
#include <time.h>

using namespace std;

void przydzielPamiec1D(int* &tab,int n);

void wypelnijTablice1D(int *tab, int n, int a, int b);

void usunTablice1D(int* &tab);

void wyswietl1D(int* tab, int n);

int podzial3czesci(int *tab, int n, int granica1, int granica2, int &i, int &k);

int main()
{
    int* tab = nullptr;
    int n=20, b=30, a=1, granica=10, granica2=20, i, k;
    przydzielPamiec1D(tab, n);
    wypelnijTablice1D(tab, n, a, b);
    wyswietl1D(tab, n);
    /*cout <<endl<< "indeks pierwszego elementu drugiego podzbioru to "<< podzial2czesci(tab, n, granica) <<endl;
    wyswietl1D(tab, n);z*/
    podzial3czesci(tab, n, granica, granica2, i, k);
    cout <<endl<<"Pierwsza czesc zawiera elementy" <<endl;
    for(int j=0; j<=i; j++)
    {
        cout << tab[j]<<" ";
    }
    cout <<endl <<"Druga czesc zawiera elementy" <<endl;
    for(int j=i+1; j<=k-1; j++)
    {
        cout << tab[j] <<" ";
    }
     cout <<endl <<"Trzecia czesc zawiera elementy" <<endl;
    for(int j=k;j<n;j++)
        cout << tab[j] << " ";
    //wyswietl1D(tab, n);
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
int podzial3czesci(int *x, int n, int granica1, int granica2, int &i, int &k)
{
    int j=0;
    i=-1;
    k=n;
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
    return 0;
}
