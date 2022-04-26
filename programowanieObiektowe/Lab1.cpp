#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
/*using std::cout;
using std::cin;
using std::endl;
*/

namespace kolega1
{
char imie[20] = "Mateusz";
int wiek = 20;
}

using namespace kolega1;

struct pracownik
{
   char nazwisko[20];
   float stawkaZaGodzine;
   int liczbaGodzin;
};

void wczytajPracownik(pracownik* p);

void wyswietlPrac(pracownik p);

float zwrocPlace(pracownik p);

int main()
{
    //using namespace kolega1;
    //std::cout << "Hello world!" << std::endl;
    //cout << imie << " " << wiek << endl;
    //cout << kolega1::imie << " " << kolega1::wiek << endl;
    int a;
    float b;
    char c;
    char nazwisko[20];
    //printf("Podaj znak, liczbe calkowita, liczbe rzeczywista, nazwisko");
    cout <<"Podaj znak, liczbe calkowita, liczbe rzeczywista, nazwisko";
    //scanf("%c %d %f %s", &c, &a, &b, nazwisko);
    cin >>c>>a>>b>>nazwisko;
    //printf("%2c %5d %10.2f %20s \n", c, a, b, nazwisko);
    cout <<setw(2)<<c<<setw(5)<<a<<setw(10)<<fixed<<setprecision(2)<<b<<setw(20)<<nazwisko<<endl;
    float pole;
    pole = pow(b,2)*M_PI;
    printf("Pole kola jest rowne: %0.2f \n", pole);

    return 0;
}


void wczytajPracownik(pracownik* p)
{
    cout <<" Podaj nazwisko, stawke, liczbe godzin";
    cin << p->nazwisko<<p->stawkaZaGodzine<<p->liczbaGodzin;
}
