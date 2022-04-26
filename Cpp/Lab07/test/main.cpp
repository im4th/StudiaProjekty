#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <vector>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    int punkty;
};

vector<int> wyszukiwanie_liniowe(int szukany, student *tab, int n);
void quickSort(student *tab, int n, int l, int p);
vector<int> wyszukiwanie_binarne(int szukany, student *tab, int n);

void wczytajDaneStudentow(student* &st,
                     int &liczbaStudentow,
                     string sciezka);

int main()
{
    student student1;
    student * st;
    int liczbaStudentow;
    string sciezka = "studenci.csv";
    wczytajDaneStudentow(st, liczbaStudentow,
                         sciezka);
    /*/ofstream plik_kopia("studenci_kopia.csv");
    for(int i = 0; i<liczbaStudentow;i++)
        plik_kopia << st[i].imie << "test imie"<<";"<<st[i].nazwisko<<";"<<st[i].punkty<<endl;
    plik_kopia.flush();
    plik_kopia.close();/*/
    for (int i = 0; i<liczbaStudentow;i++)
        cout <<st[i].imie<<" "
             <<st[i].nazwisko<<" "
             <<st[i].punkty<<endl;
    int szukana=0;
    cout<<"Podaj szukana liczbe punktow: ";
    cin>>szukana;
    ofstream znalezieniStudenci_l("znalezieniStudenci_wyszukiwanieLiniowe_liczbaPunktow_LP.csv");
    vector<int> res = wyszukiwanie_liniowe(szukana, st, liczbaStudentow);
    for(int i=0; i<res.size(); i++)
    {
        znalezieniStudenci_l << st[res[i]].imie<<";"<<st[res[i]].nazwisko<<";"<<st[res[i]].punkty<<endl;
        cout<<st[res[i]].imie<<"; "<<st[res[i]].nazwisko<<"; "<<st[res[i]].punkty<<endl;
    }
    znalezieniStudenci_l.flush();
    znalezieniStudenci_l.close();

    ofstream znalezieniStudenci_b("znalezieniStudenci_wyszukiwanieBinarne_liczbaPunktow_LP.csv");
    vector<int> resp = wyszukiwanie_binarne(5, st, liczbaStudentow);
    for(int i=0; i<resp.size(); i++)
        znalezieniStudenci_b << st[resp[i]].imie<<";"<<st[resp[i]].nazwisko<<";"<<st[resp[i]].punkty<<endl;

    znalezieniStudenci_l.flush();
    znalezieniStudenci_l.close();

    return 0;
}

void wczytajDaneStudentow(student* &st,
                     int &liczbaStudentow,
                     string sciezka)
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

vector<int> wyszukiwanie_liniowe(int szukany, student *tab, int n)
{
    vector<int> result;
    for(int i=0; i<n; i++)
    {
        if(szukany==tab[i].punkty)
            result.push_back(i);
    }
    return result;
}

void quickSort(student *tab, int n, int l, int p)
{
    int srodek=(l+p)/2;
    student piwot=tab[srodek];
    tab[srodek]=tab[p];
    int granica = l;
    for(int i=l; i<p; i++)
    {
        if(tab[i].punkty<piwot.punkty)
        {
            swap(tab[granica], tab[i]);
            granica++;
        }
    }
    tab[p]=tab[granica];
    tab[granica]=piwot;
    if(l<granica-1)
        quickSort(tab, n, l, granica-1);
    if(granica+1<p)
        quickSort(tab, n, granica+1, p);
}

vector<int> wyszukiwanie_binarne(int szukany, student *tab, int n)
{
    vector<int> result;
    quickSort(tab, n, 0, n-1);
    int lewy=0, prawy=n-1;
    while(lewy<prawy)
    {
        int s=(int)(lewy+prawy)/2;
        if(tab[s].punkty==szukany)
            result.push_back(s);
        if(szukany<tab[s].punkty)
            prawy=s-1;
        else
            lewy=s+1;
    }
    return result;
}
