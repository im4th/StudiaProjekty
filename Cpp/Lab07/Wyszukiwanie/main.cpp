#include <iostream>
#include <vector>
#include <fstream>
#include <stdlib.h>
#include <sstream>
#include <istream>
#include <fstream>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    int punkty;
};

void znajdzStudentowLiniowe(student* st, int liczbaStud, int szukanaLPunktow);

void znajdzStudentowBisekcyjnie(student* st, int liczbaStud, int szukanaLPunktow);

void wczytajDaneStudentow(student* &st, int &liczbaStudentow, string sciezka);

void sortowanieQuickSort(student *x, int lewy, int prawy);

int main()
{
    student student1;
    student * st;
    int liczbaStudentow;
    string sciezka = "studenci.csv";
    wczytajDaneStudentow(st, liczbaStudentow, sciezka);
    znajdzStudentowBisekcyjnie(st, liczbaStudentow, 4);
    znajdzStudentowLiniowe(st, liczbaStudentow, 4);
    return 0;
}

void znajdzStudentowLiniowe(student* st, int liczbaStud, int szukanaLPunktow)
{
    ofstream plik_odp("znalezieniStudenci_Liniowe_ilczbaPunktow_LP.csv");
    int j=0;
    for(int i=0; i<liczbaStud; i++)
    {
        if(st[i].punkty == szukanaLPunktow)
        {
            plik_odp << st[i].imie <<";"<<st[i].nazwisko<<";"<<st[i].punkty<<endl;//plik_odp <<"Brak uczniow o podanej liczbie punktow";
            j++;
        }
    }
    if(j == 0)
    {
        plik_odp <<"Brak uczniow o podanej liczbie punktow";
    }
    plik_odp.flush();
    plik_odp.close();
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

void znajdzStudentowBisekcyjnie(student* st, int liczbaStud, int szukanaLPunktow)
{
    ofstream plik_odp("znalezieniStudenci_Bisekcyjne_ilczbaPunktow_LP.csv");
    sortowanieQuickSort(st, 0, liczbaStud-1);
    int lewy = 0, prawy = liczbaStud - 1, j=0;
    while(lewy<=prawy)
    {
        int srodek = (int)(lewy + prawy)/2;
        if(st[srodek].punkty == szukanaLPunktow)
        {
            plik_odp << st[srodek].imie <<";"<<st[srodek].nazwisko<<";"<<st[srodek].punkty<<endl;
            j++;
        }
        if(st[srodek].punkty > szukanaLPunktow)
        {
            prawy = srodek - 1;
        }
        else
        {
            lewy = srodek + 1;
        }
    }
    if(j == 0)
    {
        plik_odp <<"Brak uczniow o podanej liczbie punktow";
    }
    plik_odp.flush();
    plik_odp.close();
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
