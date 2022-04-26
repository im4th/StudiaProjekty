#include <iostream>
#include <time.h>

using namespace std;

void przydzielPamiec1D(int* &tab,int n);

void wypelnijTablice1D(int *tab, int n, int a, int b);

void usunTablice1D(int* &tab);

void wyswietl1D(int* tab, int n);

void sortowanieBabelkowe(int* tab, int n, int tryb);

int podstawoweDane(int rozmiarTablicy, int minV, int maxV);

void sortowaniePrzezWybor(int* tab, int n, int tryb);

int main()
{
    int ans = 1;
    string menu = "Wybierz sposob sortowania:\n"
                  "1.Babelkowe";
    while(ans!=0)
    {
        cout << menu << endl;
        cin >> ans;
        switch(ans)
        {
        case 1:
        {
            int* tab;
            int tryb,n, minV, maxV;
            cout << "Sortowanie Babelkowe" << endl << "Podaj tryb\n1-rosnaco\t 2-malejaco\n";
            cin >> tryb;
            cout << "Podaj rozmiar Tablicy = ";
            cin >> n;
            cout << "Podaj min = ";
            cin >> minV;
            cout << "Podaj min = ";
            cin >> maxV;
            //podstawoweDane(n,minV,maxV);
            przydzielPamiec1D(tab, n);
            wypelnijTablice1D(tab, n, minV, maxV);
            wyswietl1D(tab, n);
            cout <<endl;
            sortowanieBabelkowe(tab, n, tryb);
            wyswietl1D(tab, n);
            cout <<endl;
        }
        case 2:
            int* tab;
            int n=10,minV=1,maxV=30,tryb=1;
            przydzielPamiec1D(tab,n);
            wypelnijTablice1D(tab,n,minV,maxV);
            wyswietl1D(tab, n);
            cout << endl;
            sortowaniePrzezWybor(tab, n, tryb);
            wyswietl1D(tab, n);
            cout << endl;
        }
    }
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
void sortowanieBabelkowe(int* tab, int rozmiarTablicy, int tryb)
{
    for(int i=rozmiarTablicy-1; i>0; i--)
    {
        int p = 1;
        for(int j=0; j<i; j++)
        {
            if(tryb==1)
            {
                if(tab[j]>tab[j+1])
                {
                    swap(tab[j],tab[j+1]);
                }
            }
            else if(tab[j]<tab[j+1])
            {
                swap(tab[j],tab[j+1]);
            }
            p=0;

        }
        if(p==1)
            break;
    }
}
int podstawoweDane(int rozmiarTablicy,int minV,int maxV)
{
    cout << "Podaj rozmiar Tablicy=" << endl;
    cin >> rozmiarTablicy;
    cout << "Podaj min ="<<endl;
    cin >> minV;
    cout << "Podaj min ="<<endl;
    cin >> maxV;
    return rozmiarTablicy, minV, maxV;
}
void sortowaniePrzezWybor(int* tab, int n, int tryb)
{
    for(int i=n-1; i>0; i--)
    {
        int ind=0;
        for(int j=1; j<=i; j++)
        {
            if(tab[j]>tab[ind])
            {
                ind=j;
            }
        }
        swap(tab[i],tab[ind]);
    }
}
