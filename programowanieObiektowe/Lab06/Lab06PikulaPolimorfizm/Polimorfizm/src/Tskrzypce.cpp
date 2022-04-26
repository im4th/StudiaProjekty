#include "Tskrzypce.h"
#include <string>
#include <iostream>

using namespace std;


Tskrzypce::Tskrzypce()
{
    cout << "Dziala konstruktor Tskrzypce" << endl;
    nazwa = "Skrzypce";
}

Tskrzypce::~Tskrzypce()
{
    cout << "Dziala destruktor Tskrzypce" << endl;
}
string Tskrzypce::dzwiek()
{
    return "skrrr";
}
Tskrzypce::Tskrzypce(string nazwa)
{
    cout << "Dziala konstruktor Tskrzypce" << endl;
    nazwa = nazwa;
}
