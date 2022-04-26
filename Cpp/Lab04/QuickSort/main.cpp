#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    int punkty;
};

void wczytajDaneStudentow(student* &st, int &liczbaStudentow, string sciezka);

void sortowanieQuickSort_fp(student* tab, int rozmiarTablicy, int tryb);

void sortowanieQuickSort(student * tab, int lewy, int prawy);

int podzial2czesci(student* tab, int n, int granica);

int main()
{
    student student1;
    student * st;
    int liczbaStudentow;
    string sciezka = "studenci.csv";
    wczytajDaneStudentow(st, liczbaStudentow, sciezka);
    sortowanieQuickSort(st, 0, liczbaStudentow-1);
    //sortowanieQuickSort_fp(st, liczbaStudentow, 1);
    for (int i = 0; i<liczbaStudentow; i++)
        cout <<st[i].imie<<" "
             <<st[i].nazwisko<<" "
             <<st[i].punkty<<endl;
    return 0;
}

void wczytajDaneStudentow(student* &st, int &liczbaStudentow, string sciezka)
{
    string linia, liczbaPunktowStr;
    ifstream plik;
    char sredniki;
    plik.open(sciezka);
    plik >> liczbaStudentow;
    st = new student[liczbaStudentow];
    for(int i = 0; i < 2; i++)
        plik >> sredniki;

    for(int i=0; i<liczbaStudentow; i++)
    {
        plik>>linia;
        istringstream ss(linia);
        getline(ss, st[i].imie, ';');
        getline(ss, st[i].nazwisko, ';');
        getline(ss, liczbaPunktowStr);
        st[i].punkty = atoi(liczbaPunktowStr.c_str());
    }
    plik.close();

}

void sortowanieQuickSort_fp(student* tab, int rozmiarTablicy, int tryb)
{
    int srodek = (int)(rozmiarTablicy/2);
    student pivot = tab[srodek];
    tab[srodek] = tab[rozmiarTablicy-1] ;
    int granica = podzial2czesci(tab, rozmiarTablicy-1, pivot.punkty);
    tab[rozmiarTablicy-1]  = tab[granica] ;
    tab[granica] = pivot;
    if(granica > 1)
    {
        sortowanieQuickSort_fp(tab, granica, tryb);
    }
    if(rozmiarTablicy-granica > 2)
    {
      sortowanieQuickSort_fp(tab+granica+1, rozmiarTablicy-granica-1, tryb);
    }
}

void sortowanieQuickSort(student *x, int lewy, int prawy)
{
    int srodek = (int)(lewy+prawy)/2;
    student pivot=x[srodek];
    x[srodek]=x[prawy];
    int granica=lewy;
    for(int i= lewy; i<prawy; i++)
    {
        if(x[i].punkty<pivot.punkty)
        {
            swap(x[granica], x[i]);
            granica = granica + 1;
        }
    }
    x[prawy] = x[granica];
    x[granica] = pivot;
    if(lewy<granica -1)
        sortowanieQuickSort(x, lewy, granica-1);
    if(granica+1<prawy)
        sortowanieQuickSort(x, granica+1, prawy);
}

int podzial2czesci(student *x, int rozmiarTablicy, int granica)
{
    int i=0, j=rozmiarTablicy-1;
    while(i<j)
    {
        while(x[i].punkty<=granica && i<j)
        {
            i++;
        }
        while(x[j].punkty>granica && i<j)
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
    if(x[i].punkty<=granica)
    {
        return i+1;
    }
    else
        return i;
}
