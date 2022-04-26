#include "Ttrabka.h"
#include <string>
#include <iostream>

using namespace std;

Ttrabka::Ttrabka()
{
    cout << "Dziala konstruktor Ttrabka" << endl;
    nazwa = "Tromba";
}

Ttrabka::~Ttrabka()
{
    cout << "Dziala destruktor Ttrabka" << endl;
}
string Ttrabka::dzwiek()
{
    return "tudududu-dututududu ";
}
Ttrabka::Ttrabka(string nazwa)
{
    nazwa = nazwa;
    cout << "Dziala konstruktor Ttrabka" << endl;
}
