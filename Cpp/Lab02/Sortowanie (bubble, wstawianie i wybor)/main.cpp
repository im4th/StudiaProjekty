#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
void przydzielPamiec1D(int*& tab, int n)
{
    tab = new int[n];
}
void przydzielPamiec2D(int**& tab, int w, int k)
{
    tab = new int* [w];
    for(int i = 0; i<w;i++){
        tab[i]= new int[k];
    }
}
void wypelnijTablice1D(int* tab, int n, int a, int b)
{
    for(int i = 0; i<n; i++){
        tab[i]=rand()%(b-a+1)+a;;
    }

}
void wypelnijTablice2D(int** tab, int w, int k, int a, int b)
{
    for(int i = 0; i<w; i++){
        for(int j = 0; j<k; j++){
            tab[i][j]=rand()%(b-a+1)+a;;
        }
    }
}

void usunTablice1D(int*& tab)
{
    delete []tab;
}
void usunTablice2D(int**& tab, int w)
{
    for(int i=0;i<w;i++){
        delete []tab[i];
    }
    delete []tab;
}
void wyswietl1D(int* tab, int n)
{
    for(int i =0; i<n; i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;

}
void wyswietl2D(int** tab, int w, int k)
{
    for(int i = 0; i<w; i++){
        for(int j =0; j<k; j++){
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
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

void sortowaniePrzezWstawianie(int* tab, int n, int tryb)
{
    int j,temp;
    for(int i=n-2;i>=0;i--)
    {
        j=i;
        temp = tab[j];
        if (tryb == 1)
        {
            while (temp>tab[j+1]&&j<n-1)
            {
                tab[j]=tab[j+1];
                j++;
            }
            tab[j]=temp;
        }
        else
        {
            while (temp<tab[j+1]&&j<n-1)
            {
                tab[j]=tab[j+1];
                j++;
            }
            tab[j]=temp;
        }
    }
}

void sortowanieBabelkowe2D(int** tab, int w, int k, int tryb, int nrKol)
{
    for(int i = 0; i < w; ++i)
    {
        for(int j = 0; j < i; ++j)
        {
            if(tryb == 1)
            {
            if(tab[j][nrKol-1] > tab[i][nrKol-1])
            swap(tab[i], tab[j]);
            }
            else
            {
            if(tab[j][nrKol-1] < tab[i][nrKol-1])
            swap(tab[i], tab[j]);
            }
        }
    }
}
void zad2()
{
    int *tab = nullptr;
    int n,a,b,tryb;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    cout << endl << "Podaj gorny przedzial losowania: ";
    cin >> b;
    cout << endl << "Podaj dolny przedzial losowania: ";
    cin >> a;
    cout << "Wybierz tryb sortowania" << endl << "Dla rosnacego wpisz 1" << endl
    <<"Dla malejacego wpisz 2"<< endl;
    cin >> tryb;
    przydzielPamiec1D(tab,n);
    wypelnijTablice1D(tab,n,a,b);
    cout << "Przed sortowaniem" << endl;
    wyswietl1D(tab,n);
    sortowanieBabelkowe(tab,n,tryb);
    cout << "Po sortowaniu babelkowym" <<endl;
    wyswietl1D(tab,n);
    usunTablice1D(tab);
}
void zad3()
{
    int *tab = nullptr;
    int n,a,b,tryb;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    cout << endl << "Podaj gorny przedzial losowania: ";
    cin >> b;
    cout << endl << "Podaj dolny przedzial losowania: ";
    cin >> a;
    cout << "Wybierz tryb sortowania" << endl << "Dla rosnacego wpisz 1" << endl
    <<"Dla malejacego wpisz 2"<< endl;
    cin >> tryb;
    przydzielPamiec1D(tab,n);
    wypelnijTablice1D(tab,n,a,b);
    cout << "Przed sortowaniem" << endl;
    wyswietl1D(tab,n);
    sortowaniePrzezWybor(tab,n,tryb);
    cout << "Po sortowaniu przez wybor" <<endl;
    wyswietl1D(tab,n);
    usunTablice1D(tab);
}
void zad4()
{
    int *tab = nullptr;
    int n,a,b,tryb;
    cout << "Podaj wielkosc tablicy: ";
    cin >> n;
    cout << endl << "Podaj gorny przedzial losowania: ";
    cin >> b;
    cout << endl << "Podaj dolny przedzial losowania: ";
    cin >> a;
    cout << "Wybierz tryb sortowania" << endl << "Dla rosnacego wpisz 1" << endl
    <<"Dla malejacego wpisz 2"<< endl;
    cin >> tryb;
    przydzielPamiec1D(tab,n);
    wypelnijTablice1D(tab,n,a,b);
    cout << "Przed sortowaniem" << endl;
    wyswietl1D(tab,n);
    sortowaniePrzezWstawianie(tab,n,tryb);
    cout << "Po sortowaniu przez wstawianie" <<endl;
    wyswietl1D(tab,n);
    usunTablice1D(tab);
}
void zad5()
{
    int **tab = nullptr;
    int w,k,a,b,tryb,nrKol;
    cout << "Podaj ilosc wierszy tablicy: ";
    cin >> w;
    cout << endl << "Podaj ilosc kolumn tablicy: ";
    cin >> k;
    cout << endl << "Podaj gorny przedzial losowania: ";
    cin >> b;
    cout << endl << "Podaj dolny przedzial losowania: ";
    cin >> a;
    cout << "Wybierz tryb sortowania" << endl << "Dla rosnacego wpisz 1" << endl
    <<"Dla malejacego wpisz 2"<< endl;
    cin >> tryb;
    cout << "Podaj w ktorej kolumnie tablicy ma zrobione byc sorotwanie: ";
    cin >> nrKol;
    przydzielPamiec2D(tab,w,k);
    wypelnijTablice2D(tab,w,k,a,b);
    cout << "Przed sortowaniem" << endl;
    wyswietl2D(tab,w,k);
    sortowanieBabelkowe2D(tab,w,k,tryb,nrKol);
    cout << "Po sortowaniu babelkowym" <<endl;
    wyswietl2D(tab,w,k);
    usunTablice2D(tab,w);
}
int main()
{
    srand(time(NULL));
    zad5();
    return 0;
}
