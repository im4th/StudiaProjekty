#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>

using namespace std;

struct student
{
    string imie;
    string nazwisko;
    int punkty;
};

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
    ofstream plik_kopia("studenci_kopia.csv");
    for(int i = 0; i<liczbaStudentow;i++)
        plik_kopia << st[i].imie << "test imie"<<";"<<st[i].nazwisko<<";"<<st[i].punkty<<endl;
    plik_kopia.flush();
    plik_kopia.close();
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
