#include <iostream>
#include<fstream>
using namespace std;
void wczytaj(int *&tab, int &n, string nazwa_pliku) //n rozmiar tablicy, tab tablica
{
    ifstream odczyt;
    odczyt.open(nazwa_pliku.c_str());
    odczyt>>n;
    tab=new int[n];
    while(odczyt >> n)
    {
        cout << n << endl;
    }
    odczyt.close();
}
int main()
{
    int* tab;
    int n;
    wczytaj(tab,n,"grupa1zad1.csv");
    return 0;
}
