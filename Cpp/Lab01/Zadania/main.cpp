#include <iostream>
#include <time.h>

using namespace std;

void przydzielPamiec1D(int* &tab,int n);

void wypelnijTablice1D(int *tab, int n, int a, int b);

void usunTablice1D(int* &tab);

void wyswietl1D(int* tab, int n);

void zadanie2(int* &tab, int n, int a, int b);

bool czyPierwsza(int a);

void zadanie3(int* &tab,int n);

int main()
{
    int ans = 1;
    string menu = "Wybierz opcje:\n"
                  "1. zadanie 1.2\n"
                  "2. zadanie 1.3\n"
                  "3. zadanie 1.4\n"
                  "4. zadanie 1.5\n"
                  "0. zakoncz";
    while(ans!=0)
    {
        cout << menu <<endl;
        cin >> ans;
        switch(ans)
        {
        case 1:
            int* tab;
            int rozmiarTablicy, minV, maxV;
            zadanie2(tab, rozmiarTablicy, minV, maxV);
            usunTablice1D(tab);
            break;
        case 2:
            zadanie3(tab,rozmiarTablicy);
            usunTablice1D(tab);
            break;
        case 3:
        case 4:
        default:
            break;


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
void zadanie2(int* &tab, int rozmiarTablicy, int minV, int maxV)
{
    int najmniejszy;
    cout << "Zadanie 1.2" << endl << "Podaj rozmiar tablicy =";
    cin >> rozmiarTablicy;
    cout << "Podaj min =";
    cin >> minV;
    cout << "Podaj max =";
    cin >> maxV;
    przydzielPamiec1D(tab, rozmiarTablicy);
    wypelnijTablice1D(tab, rozmiarTablicy, minV, maxV);
    najmniejszy = tab[0];
    for(int i=1; i<rozmiarTablicy; i++)
        if(najmniejszy>tab[i])
            najmniejszy = tab[i];

    cout << endl <<"Najmniejszy element to:"<< najmniejszy<< endl;
    if(czyPierwsza(najmniejszy)==true)
        cout << "Jest to liczba pierwsza" << endl;
    else
        cout << "Nie jest to liczba pierwsza" << endl;
}
bool czyPierwsza(int n)
{
    if(n<2)
        return false;
    for(int i=2; i*i<n; i++)
        if(n%i==0)
            return false;
    return true;
}
void zadanie3(int* &tab, int rozmiarTablicy)
{
    int licznik0=0, licznik1=0, licznik2=0, licznik3=0, licznik4=0, licznik5=0, licznik6=0, licznik7=0, licznik8=0, licznik9=0;
    cout << "Zadanie 1.3" << endl << "Podaj rozmiar tablicy =";
    cin >> rozmiarTablicy;
    przydzielPamiec1D(tab, rozmiarTablicy);
    wypelnijTablice1D(tab, rozmiarTablicy, 0, 9);
    wyswietl1D(tab, rozmiarTablicy);
    for(int i=0; i<rozmiarTablicy; i++)
    {
        if(tab[i]==0)
            licznik0++;
        else if(tab[i]==1)
            licznik1++;
        else if(tab[i]==2)
            licznik2++;
        else if(tab[i]==3)
            licznik3++;
        else if(tab[i]==4)
            licznik4++;
        else if(tab[i]==5)
            licznik5++;
        else if(tab[i]==6)
            licznik6++;
        else if(tab[i]==7)
            licznik7++;
        else if(tab[i]==8)
            licznik8++;
        else
            licznik9++;
    }
    cout <<endl << "Cyfra 0:" << licznik0 <<endl<< "Cyfra 1:" << licznik1 <<endl<< "Cyfra 2:" << licznik2 <<endl<< "Cyfra 3:" << licznik3 <<endl<< "Cyfra 4:" << licznik4 <<endl<< "Cyfra 5:" << licznik5 <<endl<< "Cyfra 6:" << licznik6 <<endl;
    cout << "Cyfra 7:" << licznik7 <<endl<< "Cyfra 8:" << licznik8 <<endl<< "Cyfra 9:" << licznik9 <<endl;
}
