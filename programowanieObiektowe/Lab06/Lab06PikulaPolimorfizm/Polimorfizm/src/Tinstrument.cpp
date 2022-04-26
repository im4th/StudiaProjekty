#include "Tinstrument.h"
#include <string>
#include <iostream>

using namespace std;

Tinstrument::Tinstrument()
{
    cout << "Dziala konstruktor Tinstrument" << endl;
    nazwa = "Nie wiadomo co";
}

Tinstrument::~Tinstrument()
{
    cout << "Dziala destruktor Tinstrument" << endl;
}
Tinstrument::Tinstrument(string nazwa)
{
    nazwa this -> nazwa;
    cout << "Dziala konstruktor Tinstrument" << endl;
}
void Tinstrument::muzyka(int n)
{
    cout << "Gra: " << nazwa << endl;
    for(int i = 0;i<= n; i++)
        cout << dzwiek();
    cout <<endl;
}
string Tinstrument::dzwiek()
{
    return "ijo-ije ";
}
