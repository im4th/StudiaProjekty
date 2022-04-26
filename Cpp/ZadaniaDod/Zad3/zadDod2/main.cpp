#include <iostream>
#include <time.h>

using namespace std;

void z1(int *&tab ,int n);

void sortowaniePrzezWybor(int* tab, int n, int tryb);

void wyswietl(int* tab, int n);

void sortowaniePrzezWybor2(int* tab, int n, int tryb);

int main()
{
    int n;
    srand(time(NULL));
    n= (2*rand()%20) + 4;
    int *tab = new int[n];
    z1(tab, n);
    delete[] tab;
    return 0;
}

void z1(int *&tab ,int n)
{
    for(int i=0;i<n;i++)
    {
        tab[i]= 1 + rand()%20;
    }
    int m = n/2;
    sortowaniePrzezWybor2(tab,n,2);
    sortowaniePrzezWybor(tab,m,1);
    cout <<"Wylosowane n: " << n << endl << "Tablica po sortowaniu: " << endl;
    wyswietl(tab, n);
    float a = tab[(n/2)-1], b = tab[n-1], srednia = (a + b)/2;
    cout << endl <<  "Srednia tych 2 elementow to: " << srednia;
}
void sortowaniePrzezWybor(int* tab, int n, int tryb)
{
    int ind = 0;
    for (int i=n-1;i>0;i--)
    {
        ind = 0;
        for(int j=1;j<=i;j++)
        {
            if (tryb==1)
            {
                if (tab[j]>tab[ind]) ind = j;
            }
            else if (tab[j]<tab[ind]) ind = j;
        }
        swap(tab[i],tab[ind]);
    }
}

void sortowaniePrzezWybor2(int* tab, int n, int tryb)
{
    int m = n/2;
    int ind = m;
    for (int i=n-1;i>=m;i--)
    {
        ind = m;
        for(int j=m;j<=i;j++)
        {
            if (tryb==1)
            {
                if (tab[j]>tab[ind]) ind = j;
            }
            else if (tab[j]<tab[ind]) ind = j;
        }
        swap(tab[i],tab[ind]);
    }
}

void wyswietl(int* tab, int n)
{
    for(int i=0; i<n; i++)
    {
        cout << tab[i] << " ";
    }
}

